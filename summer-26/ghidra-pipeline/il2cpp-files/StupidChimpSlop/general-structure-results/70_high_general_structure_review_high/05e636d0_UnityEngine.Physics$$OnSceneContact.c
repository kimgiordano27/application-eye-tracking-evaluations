/*
FUNCTION_NAME: UnityEngine.Physics$$OnSceneContact
ENTRY_POINT: 05e636d0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Physics__OnSceneContact(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  thunk_FUN_02dc1ef0();
  lVar8 = thunk_FUN_02d8a638(*unaff_x19);
  FUN_05e467f8(lVar8,0);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)Method_System_Xml_XmlNodeReader_GetAttribute__;
    *(undefined4 *)(lVar8 + 0x10) = 0x264;
    thunk_FUN_02dc1ef0();
    lVar12 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    puVar3 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__;
    puVar2 = Method_System_Xml_XmlNode_set_InnerXml__;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar8;
        thunk_FUN_02dc1ef0(plVar9,lVar8);
      }
      else {
        FUN_036a5e08();
      }
      *(long *)(unaff_x20 + 0x20) = unaff_x21;
      thunk_FUN_02dc1ef0();
      lVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_036a55a0(lVar8,*(undefined8 *)puVar2);
      puVar4 = Method_System_Xml_XmlNode_AppendChild__;
      lVar12 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlNode_AppendChild__);
      FUN_05e467f0(lVar12,0);
      puVar5 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputDevice,_InputDevice>__
      ;
      puVar3 = PTR_DAT_06646c10;
      puVar2 = PTR_DAT_06646c08;
      if (lVar12 != 0) {
        *(undefined8 *)(lVar12 + 0x10) =
             *(undefined8 *)Method_System_Collections_Generic_Stack<ByteArraySlice>_Push__;
        thunk_FUN_02dc1ef0();
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
        uVar10 = *(undefined8 *)puVar2;
        *(undefined4 *)(lVar12 + 0x18) = 2;
        lVar11 = thunk_FUN_02d8a638(uVar10);
        FUN_036a55a0(lVar11,*(undefined8 *)puVar3);
        puVar3 = PTR_DAT_06646c18;
        if (lVar11 != 0) {
          lVar13 = *(long *)(lVar11 + 0x10);
          uVar10 = *(undefined8 *)Method_System_Net_Configuration_SmtpNetworkElement_get_UserName__;
          lVar14 = *(long *)PTR_DAT_06646c18;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_02dc1ef0();
            }
            else {
              FUN_036a5e08(lVar11,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar12 + 0x30) = lVar11;
            thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11);
            lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                         Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                       );
            FUN_036a55a0(lVar11,*(undefined8 *)
                                 Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
            lVar13 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlNode__ctor__);
            FUN_05e467e8(lVar13,0);
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x18) =
                   *(undefined8 *)
                    Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__
              ;
              thunk_FUN_02dc1ef0();
              *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
              thunk_FUN_02dc1ef0();
              puVar5 = Method_System_Xml_XmlNode_InsertBefore__;
              if (lVar11 != 0) {
                lVar14 = *(long *)(lVar11 + 0x10);
                lVar15 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar9 = lVar13;
                    thunk_FUN_02dc1ef0(plVar9,lVar13);
                  }
                  else {
                    FUN_036a5e08(lVar11,lVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar12 + 0x28) = lVar11;
                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11);
                  puVar6 = Method_System_Xml_XmlNode_RemoveChild__;
                  if (lVar8 != 0) {
                    lVar11 = *(long *)(lVar8 + 0x10);
                    lVar13 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar9 = lVar12;
                        thunk_FUN_02dc1ef0(plVar9,lVar12);
                      }
                      else {
                        FUN_036a5e08(lVar8,lVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                      FUN_05e467f0(lVar12,0);
                      puVar7 = Method_System_Xml_Schema_XsdBuilder_BuildAnyAttribute_Namespace__;
                      if (lVar12 != 0) {
                        *(undefined8 *)(lVar12 + 0x10) =
                             *(undefined8 *)
                              Method_System_Collections_Generic_Stack<ByteArraySlice>_Clear__;
                        thunk_FUN_02dc1ef0();
                        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar7;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                        uVar10 = *(undefined8 *)puVar2;
                        *(undefined4 *)(lVar12 + 0x18) = 2;
                        lVar11 = thunk_FUN_02d8a638(uVar10);
                        FUN_036a55a0(lVar11,*(undefined8 *)PTR_DAT_06646c10);
                        if (lVar11 != 0) {
                          lVar13 = *(long *)(lVar11 + 0x10);
                          uVar10 = *(undefined8 *)
                                    Method_System_Net_Configuration_SmtpNetworkElement_set_Host__;
                          lVar14 = *(long *)puVar3;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar11 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                              thunk_FUN_02dc1ef0();
                            }
                            else {
                              FUN_036a5e08(lVar11,uVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar12 + 0x30) = lVar11;
                            thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11);
                            lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                            FUN_036a55a0(lVar11,*(undefined8 *)
                                                 Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                        );
                            lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                         Method_System_Xml_XmlNode__ctor__);
                            FUN_05e467e8(lVar13,0);
                            if (lVar13 != 0) {
                              *(undefined8 *)(lVar13 + 0x18) =
                                   *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_GetString__;
                              thunk_FUN_02dc1ef0();
                              *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                              thunk_FUN_02dc1ef0();
                              if (lVar11 != 0) {
                                lVar14 = *(long *)(lVar11 + 0x10);
                                lVar15 = *(long *)puVar5;
                                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                    plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar9 = lVar13;
                                    thunk_FUN_02dc1ef0(plVar9,lVar13);
                                  }
                                  else {
                                    FUN_036a5e08(lVar11,lVar13,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar12 + 0x28) = lVar11;
                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11);
                                  lVar11 = *(long *)(lVar8 + 0x10);
                                  lVar13 = *(long *)puVar6;
                                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar9 = lVar12;
                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                    }
                                    else {
                                      FUN_036a5e08(lVar8,lVar12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                    FUN_05e467f0(lVar12,0);
                                    puVar4 = PTR_DAT_06648360;
                                    if (lVar12 != 0) {
                                      *(undefined8 *)(lVar12 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_Stack<ByteArraySlice>_Pop__
                                      ;
                                      thunk_FUN_02dc1ef0();
                                      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                      uVar10 = *(undefined8 *)puVar2;
                                      *(undefined4 *)(lVar12 + 0x18) = 1;
                                      lVar11 = thunk_FUN_02d8a638(uVar10);
                                      FUN_036a55a0(lVar11,*(undefined8 *)PTR_DAT_06646c10);
                                      if (lVar11 != 0) {
                                        lVar13 = *(long *)(lVar11 + 0x10);
                                        uVar10 = *(undefined8 *)puVar4;
                                        lVar14 = *(long *)puVar3;
                                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar10;
                                            thunk_FUN_02dc1ef0();
                                          }
                                          else {
                                            FUN_036a5e08(lVar11,uVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x30) = lVar11;
                                          thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11);
                                          lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                          FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                          lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                          FUN_05e467e8(lVar13,0);
                                          puVar4 = 
                                          Method_System_Xml_XmlSqlBinaryReader_ImplReadData__;
                                          if (lVar13 != 0) {
                                            *(undefined8 *)(lVar13 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadData__
                                            ;
                                            thunk_FUN_02dc1ef0();
                                            *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                            thunk_FUN_02dc1ef0();
                                            if (lVar11 != 0) {
                                              lVar14 = *(long *)(lVar11 + 0x10);
                                              lVar15 = *(long *)puVar5;
                                              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                              if (lVar14 != 0) {
                                                uVar1 = *(uint *)(lVar11 + 0x18);
                                                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                  plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar9 = lVar13;
                                                  thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                }
                                                else {
                                                  FUN_036a5e08(lVar11,lVar13,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar15 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar12 + 0x28) = lVar11;
                                                thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11);
                                                lVar11 = *(long *)(lVar8 + 0x10);
                                                lVar13 = *(long *)puVar6;
                                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar9 = lVar12;
                                                    thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                  }
                                                  else {
                                                    FUN_036a5e08(lVar8,lVar12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_Serialization_XmlSerializer__ctor__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_EnableSsl__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar11 != 0) {
                                                      lVar14 = *(long *)(lVar11 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                          plVar9 = (long *)(lVar14 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar9 = lVar13;
                                                  thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                  }
                                                  else {
                                                    FUN_036a5e08(lVar11,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0664c580;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar11 = thunk_FUN_02d8a638(uVar10);
                                                    FUN_036a55a0(lVar11,*(undefined8 *)
                                                                         PTR_DAT_06646c10);
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Password__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar4 = PTR_DAT_06648368;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)puVar4;
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar10;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,uVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  puVar4 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar11 != 0) {
                                                      lVar14 = *(long *)(lVar11 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_XmlWriterSettings_set_NamespaceHandling__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<IMGUIContainer>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_Schema_XsdBuilder_BuildAnnotated_Id__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<GameObject>_Push__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_Port__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetValueType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_XmlWriterSettings_CreateWriter__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<GameObject>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_Properties__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ParseMB32__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar7 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar11 = thunk_FUN_02d8a638(uVar10);
                                                    FUN_036a55a0(lVar11,*(undefined8 *)
                                                                         PTR_DAT_06646c10);
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e467f0(lVar12,0);
                                                  puVar4 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_02d8a638(uVar10);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05e467e8(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar13;
                                                        thunk_FUN_02dc1ef0(plVar9,lVar13);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar8;
                                                  thunk_FUN_02dc1ef0((long *)(unaff_x20 + 0x28),
                                                                     lVar8);
                                                  FUN_05e465bc(unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


