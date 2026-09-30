/*
FUNCTION_NAME: UnityEngine.Physics2D$$GetRayIntersectionNonAlloc
ENTRY_POINT: 05e5ce90
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_8;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Physics2D__GetRayIntersectionNonAlloc(undefined8 param_1,undefined8 param_2)

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
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  *(undefined8 *)(unaff_x28 + 0x30) = param_2;
  thunk_FUN_02dc1ef0();
  *(undefined8 *)(unaff_x28 + 0x38) = *unaff_x21;
  thunk_FUN_02dc1ef0();
  *(undefined8 *)(unaff_x28 + 0x40) = *unaff_x22;
  thunk_FUN_02dc1ef0();
  lVar9 = thunk_FUN_02d8a638(*unaff_x23);
  FUN_036a55a0(lVar9,*unaff_x24);
  lVar10 = thunk_FUN_02d8a638(*unaff_x19);
  FUN_05e467f8(lVar10,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x18) =
         *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__;
    *(undefined4 *)(lVar10 + 0x10) = 0x164;
    thunk_FUN_02dc1ef0();
    puVar2 = Method_System_Xml_XmlNode_InsertAfter__;
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)Method_System_Xml_XmlNode_InsertAfter__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar10;
          thunk_FUN_02dc1ef0(plVar11,lVar10);
        }
        else {
          FUN_036a5e08(lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = thunk_FUN_02d8a638(*unaff_x19);
        FUN_05e467f8(lVar10,0);
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x18) =
               *(undefined8 *)Method_System_Xml_XmlNodeReader_GetAttribute__;
          *(undefined4 *)(lVar10 + 0x10) = 0x264;
          thunk_FUN_02dc1ef0();
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar3 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__;
          puVar2 = Method_System_Xml_XmlNode_set_InnerXml__;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = lVar10;
              thunk_FUN_02dc1ef0(plVar11,lVar10);
            }
            else {
              FUN_036a5e08(lVar9,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x28 + 0x20) = lVar9;
            thunk_FUN_02dc1ef0((long *)(unaff_x28 + 0x20),lVar9);
            lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
            FUN_036a55a0(lVar9,*(undefined8 *)puVar2);
            lVar10 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlNode_AppendChild__);
            FUN_05e467f0(lVar10,0);
            puVar4 = Method_System_Xml_XmlSignificantWhitespace__ctor__;
            puVar3 = PTR_DAT_06646c10;
            puVar2 = PTR_DAT_06646c08;
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x10) =
                   *(undefined8 *)Method_System_Collections_Generic_Stack<DerSequenceReader>_Push__;
              thunk_FUN_02dc1ef0();
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar4;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
              uVar12 = *(undefined8 *)puVar2;
              *(undefined4 *)(lVar10 + 0x18) = 2;
              lVar13 = thunk_FUN_02d8a638(uVar12);
              FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
              puVar4 = PTR_DAT_06646c18;
              if (lVar13 != 0) {
                lVar14 = *(long *)(lVar13 + 0x10);
                uVar12 = *(undefined8 *)
                          Method_System_Net_Configuration_SmtpNetworkElement_get_UserName__;
                lVar15 = *(long *)PTR_DAT_06646c18;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                puVar6 = Method_System_Xml_XmlNode__ctor__;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                    thunk_FUN_02dc1ef0();
                  }
                  else {
                    FUN_036a5e08(lVar13,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar10 + 0x30) = lVar13;
                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13);
                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                             );
                  FUN_036a55a0(lVar13,*(undefined8 *)
                                       Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                              );
                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                  FUN_05e467e8(lVar14,0);
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x18) =
                         *(undefined8 *)
                          Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__
                    ;
                    thunk_FUN_02dc1ef0();
                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                    thunk_FUN_02dc1ef0();
                    puVar7 = Method_System_Xml_XmlNode_InsertBefore__;
                    if (lVar13 != 0) {
                      lVar15 = *(long *)(lVar13 + 0x10);
                      lVar16 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar11 = lVar14;
                          thunk_FUN_02dc1ef0(plVar11,lVar14);
                        }
                        else {
                          FUN_036a5e08(lVar13,lVar14,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x28) = lVar13;
                        thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13);
                        if (lVar9 != 0) {
                          lVar13 = *(long *)(lVar9 + 0x10);
                          lVar14 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar11 = lVar10;
                              thunk_FUN_02dc1ef0(plVar11,lVar10);
                            }
                            else {
                              FUN_036a5e08(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
                            FUN_05e467f0(lVar10,0);
                            puVar5 = PTR_DAT_06648360;
                            if (lVar10 != 0) {
                              *(undefined8 *)(lVar10 + 0x10) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Stack<ByteArraySlice>_Pop__;
                              thunk_FUN_02dc1ef0();
                              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar5;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                              uVar12 = *(undefined8 *)puVar2;
                              *(undefined4 *)(lVar10 + 0x18) = 1;
                              lVar13 = thunk_FUN_02d8a638(uVar12);
                              FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                              if (lVar13 != 0) {
                                lVar14 = *(long *)(lVar13 + 0x10);
                                uVar12 = *(undefined8 *)puVar5;
                                lVar15 = *(long *)puVar4;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                    thunk_FUN_02dc1ef0();
                                  }
                                  else {
                                    FUN_036a5e08(lVar13,uVar12,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar10 + 0x30) = lVar13;
                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13);
                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                              );
                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                                  FUN_05e467e8(lVar14,0);
                                  puVar5 = 
                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                                  ;
                                  if (lVar14 != 0) {
                                    *(undefined8 *)(lVar14 + 0x18) =
                                         *(undefined8 *)
                                          Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                                    ;
                                    thunk_FUN_02dc1ef0();
                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                    thunk_FUN_02dc1ef0();
                                    if (lVar13 != 0) {
                                      lVar15 = *(long *)(lVar13 + 0x10);
                                      lVar16 = *(long *)puVar7;
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar15 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar11 = lVar14;
                                          thunk_FUN_02dc1ef0(plVar11,lVar14);
                                        }
                                        else {
                                          FUN_036a5e08(lVar13,lVar14,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar10 + 0x28) = lVar13;
                                        thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13);
                                        lVar13 = *(long *)(lVar9 + 0x10);
                                        lVar14 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar11 = lVar10;
                                            thunk_FUN_02dc1ef0(plVar11,lVar10);
                                          }
                                          else {
                                            FUN_036a5e08(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                          FUN_05e467f0(lVar10,0);
                                          puVar8 = 
                                          Method_System_Xml_Serialization_XmlSerializer__ctor__;
                                          if (lVar10 != 0) {
                                            *(undefined8 *)(lVar10 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__
                                            ;
                                            thunk_FUN_02dc1ef0();
                                            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar8;
                                            thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                            uVar12 = *(undefined8 *)puVar2;
                                            *(undefined4 *)(lVar10 + 0x18) = 0;
                                            lVar13 = thunk_FUN_02d8a638(uVar12);
                                            FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                            if (lVar13 != 0) {
                                              lVar14 = *(long *)(lVar13 + 0x10);
                                              uVar12 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_EnableSsl__
                                              ;
                                              lVar15 = *(long *)puVar4;
                                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                              if (lVar14 != 0) {
                                                uVar1 = *(uint *)(lVar13 + 0x18);
                                                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                                  thunk_FUN_02dc1ef0();
                                                }
                                                else {
                                                  FUN_036a5e08(lVar13,uVar12,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar15 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar10 + 0x30) = lVar13;
                                                thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13);
                                                lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                          
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                          
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                                                FUN_05e467e8(lVar14,0);
                                                if (lVar14 != 0) {
                                                  *(undefined8 *)(lVar14 + 0x18) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    puVar5 = Method_System_Xml_XmlNode_AppendChild__
                                                    ;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0664c580;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar12 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_02d8a638(uVar12);
                                                    FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Password__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
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
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateReader__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_DefaultCredentials__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
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
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_VerifyVersion__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpSection__ctor__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Xml_XmlTextEncoder_Write__;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dc1ef0();
                                                    lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
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
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteRoot__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_UserName__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializerImplementation_get_Writer__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
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
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateWriter__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlTextReaderImpl_set_EntityHandling__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Peek__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_TargetName__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateChar__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
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
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_Throw__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_036a55a0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dc1ef0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar5 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = PTR_DAT_06648368;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar15 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar13 != 0) {
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      lVar16 = *(long *)puVar7;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextWriter_LookupPrefix__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsLong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Clear__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteCharEntity__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDateTimeString__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlStringConverter_ChangeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar12 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar13 = thunk_FUN_02d8a638(uVar12);
                                                    FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlUtf8RawTextWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceExplicit__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_ThrowInvalidStateTransition__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlWellFormedWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_LookupPrefix__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBase64__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl__ctor__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlTextWriter_InternalWriteEndElement__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_FinishInitUriString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_set_WhitespaceHandling__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AddAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_XsdKatmaiTimeScaleToValueLength__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_ResolveEntity__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteEndAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsString__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_AutoComplete__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ScanText__;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlUntypedConverter_ToString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_SkipExtn__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_SetupFromParserContext__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_MoveToAttribute__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceImplicit__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AdvanceState__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlUrlResolver_GetEntity__;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_CheckNCName__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467f0(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlValidatingReaderImpl_MoveOffEntityReference__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_02d8a638(uVar12);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467e8(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBinHex__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dc1ef0(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Xml_XmlNode_RemoveChild__;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02dc1ef0(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar9;
                                                  thunk_FUN_02dc1ef0((long *)(unaff_x28 + 0x28),
                                                                     lVar9);
                                                  FUN_05e465bc(unaff_x25,unaff_x28,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


