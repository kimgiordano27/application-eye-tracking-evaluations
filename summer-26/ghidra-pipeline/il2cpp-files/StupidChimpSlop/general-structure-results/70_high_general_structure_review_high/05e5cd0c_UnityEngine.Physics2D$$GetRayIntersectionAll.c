/*
FUNCTION_NAME: UnityEngine.Physics2D$$GetRayIntersectionAll
ENTRY_POINT: 05e5cd0c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_12;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Physics2D__GetRayIntersectionAll(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x25;
  
  FUN_02d4dc40();
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
              );
  FUN_02d4dc40(Method_System_Xml_XmlTextReaderImpl_Throw__);
  FUN_02d4dc40(Method_System_Xml_XmlTextReaderImpl_set_EntityHandling__);
  FUN_02d4dc40(Method_System_Xml_XmlWellFormedWriter_WriteChars__);
  FUN_02d4dc40(Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__);
  FUN_02d4dc40(PTR_DAT_06646708);
  FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_AddName__);
  FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__);
  FUN_02d4dc40(Method_System_Net_Configuration_SmtpNetworkElement_set_UserName__);
  FUN_02d4dc40(Method_System_Xml_XmlTextReaderImpl_set_WhitespaceHandling__);
  FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_AddQName__);
  FUN_02d4dc40(Method_System_Xml_XmlTextWriter_AutoComplete__);
  FUN_02d4dc40(Method_System_Net_Configuration_SmtpSection__ctor__);
  FUN_02d4dc40(Method_System_Xml_XmlWellFormedWriter_WriteDocType__);
  FUN_02d4dc40(Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__);
  FUN_02d4dc40(Method_System_Xml_XmlTextWriter_InternalWriteEndElement__);
  FUN_02d4dc40(Method_System_Xml_XmlTextWriter_LookupPrefix__);
  FUN_02d4dc40(Method_System_Xml_XmlReader_ReadValueChunk__);
  FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__);
  FUN_02d4dc40(Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__);
  FUN_02d4dc40(Method_System_Xml_XmlWellFormedWriter_WriteEndAttribute__);
  *(undefined1 *)(unaff_x19 + 0xee6) = 1;
  lVar10 = thunk_FUN_02d8a638(*unaff_x20);
  FUN_05e46800(lVar10,0);
  puVar9 = Method_System_Xml_XmlWellFormedWriter_WriteDocType__;
  puVar7 = Method_System_Xml_Schema_XmlUntypedConverter_ToSingle__;
  puVar5 = Method_System_Xml_XmlTextReaderImpl_MoveOffEntityReference__;
  puVar6 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_ConvertTokenToXmlValue__;
  puVar4 = Method_System_Xml_XmlNode_set_Value__;
  puVar3 = Method_System_Xml_XmlNode_GetEventArgs__;
  puVar2 = PTR_DAT_06646708;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)Method_System_Xml_XmlWellFormedWriter_WriteChars__;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar7;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar9;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar5;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dc1ef0();
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
    FUN_036a55a0(lVar11,*(undefined8 *)puVar4);
    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
    FUN_05e467f8(lVar12,0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x18) =
           *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__;
      *(undefined4 *)(lVar12 + 0x10) = 0x164;
      thunk_FUN_02dc1ef0();
      puVar2 = Method_System_Xml_XmlNode_InsertAfter__;
      if (lVar11 != 0) {
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)Method_System_Xml_XmlNode_InsertAfter__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02dc1ef0(plVar13,lVar12);
          }
          else {
            FUN_036a5e08(lVar11,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
          FUN_05e467f8(lVar12,0);
          if (lVar12 != 0) {
            *(undefined8 *)(lVar12 + 0x18) =
                 *(undefined8 *)Method_System_Xml_XmlNodeReader_GetAttribute__;
            *(undefined4 *)(lVar12 + 0x10) = 0x264;
            thunk_FUN_02dc1ef0();
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar3 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__;
            puVar2 = Method_System_Xml_XmlNode_set_InnerXml__;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_02dc1ef0(plVar13,lVar12);
              }
              else {
                FUN_036a5e08(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x20) = lVar11;
              thunk_FUN_02dc1ef0((long *)(lVar10 + 0x20),lVar11);
              lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
              FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlNode_AppendChild__);
              FUN_05e467f0(lVar12,0);
              puVar4 = Method_System_Xml_XmlSignificantWhitespace__ctor__;
              puVar3 = PTR_DAT_06646c10;
              puVar2 = PTR_DAT_06646c08;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Stack<DerSequenceReader>_Push__;
                thunk_FUN_02dc1ef0();
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                uVar14 = *(undefined8 *)puVar2;
                *(undefined4 *)(lVar12 + 0x18) = 2;
                lVar15 = thunk_FUN_02d8a638(uVar14);
                FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_06646c18;
                if (lVar15 != 0) {
                  lVar16 = *(long *)(lVar15 + 0x10);
                  uVar14 = *(undefined8 *)
                            Method_System_Net_Configuration_SmtpNetworkElement_get_UserName__;
                  lVar17 = *(long *)PTR_DAT_06646c18;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                  puVar6 = Method_System_Xml_XmlNode__ctor__;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                      thunk_FUN_02dc1ef0();
                    }
                    else {
                      FUN_036a5e08(lVar15,uVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar12 + 0x30) = lVar15;
                    thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15);
                    lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                 Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                               );
                    FUN_036a55a0(lVar15,*(undefined8 *)
                                         Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                );
                    lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                    FUN_05e467e8(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)
                            Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__
                      ;
                      thunk_FUN_02dc1ef0();
                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar9;
                      thunk_FUN_02dc1ef0();
                      puVar7 = Method_System_Xml_XmlNode_InsertBefore__;
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar18 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar13 = lVar16;
                            thunk_FUN_02dc1ef0(plVar13,lVar16);
                          }
                          else {
                            FUN_036a5e08(lVar15,lVar16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar12 + 0x28) = lVar15;
                          thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15);
                          if (lVar11 != 0) {
                            lVar15 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar12;
                                thunk_FUN_02dc1ef0(plVar13,lVar12);
                              }
                              else {
                                FUN_036a5e08(lVar11,lVar12,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
                              FUN_05e467f0(lVar12,0);
                              puVar5 = PTR_DAT_06648360;
                              if (lVar12 != 0) {
                                *(undefined8 *)(lVar12 + 0x10) =
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Stack<ByteArraySlice>_Pop__;
                                thunk_FUN_02dc1ef0();
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                uVar14 = *(undefined8 *)puVar2;
                                *(undefined4 *)(lVar12 + 0x18) = 1;
                                lVar15 = thunk_FUN_02d8a638(uVar14);
                                FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                if (lVar15 != 0) {
                                  lVar16 = *(long *)(lVar15 + 0x10);
                                  uVar14 = *(undefined8 *)puVar5;
                                  lVar17 = *(long *)puVar4;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar16 != 0) {
                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                      ;
                                      thunk_FUN_02dc1ef0();
                                    }
                                    else {
                                      FUN_036a5e08(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar12 + 0x30) = lVar15;
                                    thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15);
                                    lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                  
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                    FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                );
                                    lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                                    FUN_05e467e8(lVar16,0);
                                    puVar5 = 
                                    Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                                    ;
                                    if (lVar16 != 0) {
                                      *(undefined8 *)(lVar16 + 0x18) =
                                           *(undefined8 *)
                                            Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                                      ;
                                      thunk_FUN_02dc1ef0();
                                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar9;
                                      thunk_FUN_02dc1ef0();
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar18 = *(long *)puVar7;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar1 = *(uint *)(lVar15 + 0x18);
                                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar13 = lVar16;
                                            thunk_FUN_02dc1ef0(plVar13,lVar16);
                                          }
                                          else {
                                            FUN_036a5e08(lVar15,lVar16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x28) = lVar15;
                                          thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15);
                                          lVar15 = *(long *)(lVar11 + 0x10);
                                          lVar16 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar12;
                                              thunk_FUN_02dc1ef0(plVar13,lVar12);
                                            }
                                            else {
                                              FUN_036a5e08(lVar11,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                            FUN_05e467f0(lVar12,0);
                                            puVar8 = 
                                            Method_System_Xml_Serialization_XmlSerializer__ctor__;
                                            if (lVar12 != 0) {
                                              *(undefined8 *)(lVar12 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__
                                              ;
                                              thunk_FUN_02dc1ef0();
                                              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar8
                                              ;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                              uVar14 = *(undefined8 *)puVar2;
                                              *(undefined4 *)(lVar12 + 0x18) = 0;
                                              lVar15 = thunk_FUN_02d8a638(uVar14);
                                              FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                              if (lVar15 != 0) {
                                                lVar16 = *(long *)(lVar15 + 0x10);
                                                uVar14 = *(undefined8 *)
                                                                                                                    
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_EnableSsl__
                                                ;
                                                lVar17 = *(long *)puVar4;
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar16 != 0) {
                                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                                    ;
                                                    thunk_FUN_02dc1ef0();
                                                  }
                                                  else {
                                                    FUN_036a5e08(lVar15,uVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)(lVar15 + 0x10);
                                                      lVar18 = *(long *)puVar7;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0664c580;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_02d8a638(uVar14);
                                                    FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Password__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateReader__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_DefaultCredentials__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_VerifyVersion__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpSection__ctor__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Xml_XmlTextEncoder_Write__;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02dc1ef0();
                                                    lVar17 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                    if (lVar17 != 0) {
                                                      lVar18 = *(long *)(lVar17 + 0x10);
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteRoot__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_UserName__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializerImplementation_get_Writer__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateWriter__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlTextReaderImpl_set_EntityHandling__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Peek__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_TargetName__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateChar__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_Throw__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar18 = *(long *)(lVar17 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dc1ef0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = PTR_DAT_06648368;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)(lVar15 + 0x10);
                                                      lVar18 = *(long *)puVar7;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextWriter_LookupPrefix__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsLong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Clear__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteCharEntity__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDateTimeString__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlStringConverter_ChangeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar15 = thunk_FUN_02d8a638(uVar14);
                                                    FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlUtf8RawTextWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceExplicit__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_ThrowInvalidStateTransition__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlWellFormedWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_LookupPrefix__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBase64__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl__ctor__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextWriter_InternalWriteEndElement__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_FinishInitUriString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_set_WhitespaceHandling__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AddAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_XsdKatmaiTimeScaleToValueLength__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_ResolveEntity__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteEndAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsString__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_AutoComplete__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ScanText__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlUntypedConverter_ToString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_SkipExtn__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_SetupFromParserContext__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_MoveToAttribute__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceImplicit__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AdvanceState__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlUrlResolver_GetEntity__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_CheckNCName__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlValidatingReaderImpl_MoveOffEntityReference__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBinHex__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  FUN_05e465bc(unaff_x25,lVar10,0);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


