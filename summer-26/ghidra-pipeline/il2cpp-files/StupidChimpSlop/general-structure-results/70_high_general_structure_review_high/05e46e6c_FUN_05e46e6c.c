/*
FUNCTION_NAME: FUN_05e46e6c
ENTRY_POINT: 05e46e6c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_05e46e6c(void)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar3 = Method_System_Xml_XmlNamespaceManager_RemoveNamespace__;
  if ((DAT_06a58d6b & 1) == 0) {
    FUN_02d4dc40(Method_System_Xml_XmlNode__ctor__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_AppendChild__);
    FUN_02d4dc40(Method_System_Xml_XmlNamespaceManager_RemoveNamespace__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_GetEventArgs__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_InsertAfter__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_InsertBefore__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_RemoveChild__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_set_InnerXml__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_set_Value__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_ConvertTokenToXmlValue__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_DeserializeNode__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_GetPropertyName__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_ReadAttributeElements__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_ReadElement__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_ReadJson__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_SerializeNode__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_WrapXml__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReader__ctor__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReader_GetAttribute__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReader_MoveToAttribute__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReader_ReadString__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReader_ResolveEntity__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReaderNavigator_CheckIndexCondition__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlMiscConverter_ToString__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReaderNavigator_GetAttribute__);
    FUN_02d4dc40(Method_System_Xml_XmlNotation_CloneNode__);
    FUN_02d4dc40(Method_System_Xml_XmlNotation_set_InnerXml__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__);
    FUN_02d4dc40(PTR_DAT_06646708);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToInt32__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToInt32__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToString__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ChangeType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ChangeType__);
    DAT_06a58d6b = 1;
  }
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_05044d4c(lVar10,0);
  puVar7 = Method_System_Xml_XmlNotation_set_InnerXml__;
  puVar6 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_ConvertTokenToXmlValue__;
  puVar8 = Method_System_Xml_XmlNode_set_Value__;
  puVar5 = Method_System_Xml_XmlNode_GetEventArgs__;
  puVar4 = Method_System_Xml_Schema_XmlMiscConverter_ToString__;
  puVar3 = PTR_DAT_06646708;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)Method_System_Xml_XmlNodeReader_MoveToAttribute__;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar4;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar7;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar3;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar3;
    thunk_FUN_02dc1ef0();
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
    FUN_036a55a0(lVar11,*(undefined8 *)puVar8);
    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
    FUN_05044d4c(lVar12,0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x18) =
           *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__;
      *(undefined4 *)(lVar12 + 0x10) = 0x164;
      thunk_FUN_02dc1ef0();
      puVar3 = Method_System_Xml_XmlNode_InsertAfter__;
      if (lVar11 != 0) {
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar17 = *(long *)Method_System_Xml_XmlNode_InsertAfter__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02dc1ef0(plVar13,lVar12);
          }
          else {
            FUN_036a5e08(lVar11,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
          FUN_05044d4c(lVar12,0);
          if (lVar12 != 0) {
            *(undefined8 *)(lVar12 + 0x18) =
                 *(undefined8 *)Method_System_Xml_XmlNodeReader_GetAttribute__;
            *(undefined4 *)(lVar12 + 0x10) = 0x264;
            thunk_FUN_02dc1ef0();
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar17 = *(long *)puVar3;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar5 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__;
            puVar4 = Method_System_Xml_XmlNode_set_InnerXml__;
            puVar3 = Method_System_Xml_XmlNode_AppendChild__;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_02dc1ef0(plVar13,lVar12);
              }
              else {
                FUN_036a5e08(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x20) = lVar11;
              thunk_FUN_02dc1ef0((long *)(lVar10 + 0x20),lVar11);
              lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
              FUN_036a55a0(lVar11,*(undefined8 *)puVar4);
              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
              FUN_05044d4c(lVar12,0);
              puVar6 = Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__;
              puVar8 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__;
              puVar5 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__;
              puVar4 = Method_System_Xml_XmlNode__ctor__;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) =
                     *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToString__;
                thunk_FUN_02dc1ef0();
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar6;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                uVar14 = *(undefined8 *)puVar8;
                *(undefined4 *)(lVar12 + 0x18) = 0;
                lVar15 = thunk_FUN_02d8a638(uVar14);
                FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                FUN_05044d4c(lVar17,0);
                if (lVar17 != 0) {
                  *(undefined8 *)(lVar17 + 0x18) =
                       *(undefined8 *)Method_System_Xml_XmlNodeReaderNavigator_GetAttribute__;
                  thunk_FUN_02dc1ef0();
                  *(undefined8 *)(lVar17 + 0x10) =
                       *(undefined8 *)Method_System_Xml_XmlNotation_set_InnerXml__;
                  thunk_FUN_02dc1ef0();
                  puVar6 = Method_System_Xml_XmlNode_InsertBefore__;
                  if (lVar15 != 0) {
                    lVar16 = *(long *)(lVar15 + 0x10);
                    lVar18 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar16 != 0) {
                      uVar2 = *(uint *)(lVar15 + 0x18);
                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                        plVar13 = (long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar13 = lVar17;
                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                      }
                      else {
                        FUN_036a5e08(lVar15,lVar17,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar12 + 0x28) = lVar15;
                      thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15);
                      *(undefined1 *)(lVar12 + 0x38) = 1;
                      puVar7 = Method_System_Xml_XmlNode_RemoveChild__;
                      if (lVar11 != 0) {
                        lVar15 = *(long *)(lVar11 + 0x10);
                        lVar17 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar15 != 0) {
                          uVar2 = *(uint *)(lVar11 + 0x18);
                          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                            plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar13 = lVar12;
                            thunk_FUN_02dc1ef0(plVar13,lVar12);
                          }
                          else {
                            FUN_036a5e08(lVar11,lVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                          FUN_05044d4c(lVar12,0);
                          puVar9 = Method_System_Xml_XmlNodeReaderNavigator_CheckIndexCondition__;
                          if (lVar12 != 0) {
                            *(undefined8 *)(lVar12 + 0x10) =
                                 *(undefined8 *)
                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__;
                            thunk_FUN_02dc1ef0();
                            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar9;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                            uVar14 = *(undefined8 *)puVar8;
                            *(undefined4 *)(lVar12 + 0x18) = 0;
                            lVar15 = thunk_FUN_02d8a638(uVar14);
                            FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                            lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                            FUN_05044d4c(lVar17,0);
                            if (lVar17 != 0) {
                              *(undefined8 *)(lVar17 + 0x18) =
                                   *(undefined8 *)
                                    Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__;
                              thunk_FUN_02dc1ef0();
                              *(undefined8 *)(lVar17 + 0x10) =
                                   *(undefined8 *)Method_System_Xml_XmlNotation_set_InnerXml__;
                              thunk_FUN_02dc1ef0();
                              if (lVar15 != 0) {
                                lVar16 = *(long *)(lVar15 + 0x10);
                                lVar18 = *(long *)puVar6;
                                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                if (lVar16 != 0) {
                                  uVar2 = *(uint *)(lVar15 + 0x18);
                                  if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                    plVar13 = (long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                                    *plVar13 = lVar17;
                                    thunk_FUN_02dc1ef0(plVar13,lVar17);
                                  }
                                  else {
                                    FUN_036a5e08(lVar15,lVar17,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar12 + 0x28) = lVar15;
                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15);
                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                  lVar15 = *(long *)(lVar11 + 0x10);
                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                  lVar17 = *(long *)puVar7;
                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                  if (lVar15 != 0) {
                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                                      *plVar13 = lVar12;
                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                    }
                                    else {
                                      FUN_036a5e08(lVar11,lVar12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                    FUN_05044d4c(lVar12,0);
                                    puVar9 = Method_System_Xml_XmlNodeReader__ctor__;
                                    if (lVar12 != 0) {
                                      *(undefined8 *)(lVar12 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Xml_Schema_XmlNumeric10Converter_ToInt32__
                                      ;
                                      thunk_FUN_02dc1ef0();
                                      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar9;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                      uVar14 = *(undefined8 *)puVar8;
                                      *(undefined4 *)(lVar12 + 0x18) = 0;
                                      lVar15 = thunk_FUN_02d8a638(uVar14);
                                      FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                      lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                      FUN_05044d4c(lVar17,0);
                                      if (lVar17 != 0) {
                                        *(undefined8 *)(lVar17 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Xml_XmlNodeReader_ReadString__;
                                        thunk_FUN_02dc1ef0();
                                        *(undefined8 *)(lVar17 + 0x10) =
                                             *(undefined8 *)
                                              Method_System_Xml_XmlNotation_set_InnerXml__;
                                        thunk_FUN_02dc1ef0();
                                        if (lVar15 != 0) {
                                          lVar16 = *(long *)(lVar15 + 0x10);
                                          lVar18 = *(long *)puVar6;
                                          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar2 = *(uint *)(lVar15 + 0x18);
                                            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                              plVar13 = (long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                              *plVar13 = lVar17;
                                              thunk_FUN_02dc1ef0(plVar13,lVar17);
                                            }
                                            else {
                                              FUN_036a5e08(lVar15,lVar17,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar18 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar12 + 0x28) = lVar15;
                                            thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15);
                                            iVar1 = *(int *)(lVar11 + 0x1c);
                                            lVar15 = *(long *)(lVar11 + 0x10);
                                            *(undefined1 *)(lVar12 + 0x38) = 1;
                                            lVar17 = *(long *)puVar7;
                                            *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                            if (lVar15 != 0) {
                                              uVar2 = *(uint *)(lVar11 + 0x18);
                                              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                *plVar13 = lVar12;
                                                thunk_FUN_02dc1ef0(plVar13,lVar12);
                                              }
                                              else {
                                                FUN_036a5e08(lVar11,lVar12,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                              FUN_05044d4c(lVar12,0);
                                              puVar9 = 
                                              Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__
                                              ;
                                              if (lVar12 != 0) {
                                                *(undefined8 *)(lVar12 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__
                                                ;
                                                thunk_FUN_02dc1ef0();
                                                *(undefined8 *)(lVar12 + 0x20) =
                                                     *(undefined8 *)puVar9;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                uVar14 = *(undefined8 *)puVar8;
                                                *(undefined4 *)(lVar12 + 0x18) = 0;
                                                lVar15 = thunk_FUN_02d8a638(uVar14);
                                                FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                                lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                                FUN_05044d4c(lVar17,0);
                                                if (lVar17 != 0) {
                                                  *(undefined8 *)(lVar17 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_WrapXml__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Xml_XmlNotation_set_InnerXml__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar2
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar17;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  lVar17 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05044d4c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_GetPropertyName__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_ReadJson__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar8;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05044d4c(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToInt32__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Xml_XmlNotation_set_InnerXml__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar2
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar17;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  lVar17 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05044d4c(lVar12,0);
                                                  puVar9 = 
                                                  Method_System_Xml_Schema_XmlNumeric2Converter_ChangeType__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_DeserializeNode__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar8;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05044d4c(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlNumeric2Converter_ChangeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Xml_XmlNotation_set_InnerXml__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar2
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar17;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  lVar17 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05044d4c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_ReadAttributeElements__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_SerializeNode__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar8;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05044d4c(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Xml_XmlNotation_CloneNode__;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar17 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlNotation_set_InnerXml__;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar2
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar17;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  lVar17 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05044d4c(lVar12,0);
                                                  puVar9 = 
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar8;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05044d4c(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlNumeric2Converter_ChangeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Xml_XmlNotation_set_InnerXml__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar2
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar17;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  lVar17 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05044d4c(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_ReadElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar8;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d8a638(uVar14);
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar5);
                                                  lVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05044d4c(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlNodeReader_ResolveEntity__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Xml_XmlNotation_set_InnerXml__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar2
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar17;
                                                        thunk_FUN_02dc1ef0(plVar13,lVar17);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  lVar17 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  uVar14 = thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28
                                                                                      ),lVar11);
                                                  FUN_05e465bc(uVar14,lVar10);
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
  FUN_02d4dee8();
}


