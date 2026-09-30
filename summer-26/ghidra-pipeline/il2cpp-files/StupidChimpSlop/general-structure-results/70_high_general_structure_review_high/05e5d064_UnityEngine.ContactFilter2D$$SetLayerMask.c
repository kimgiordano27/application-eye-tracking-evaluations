/*
FUNCTION_NAME: UnityEngine.ContactFilter2D$$SetLayerMask
ENTRY_POINT: 05e5d064
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


void UnityEngine_ContactFilter2D__SetLayerMask(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 *puVar16;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar17;
  long unaff_x28;
  
  puVar2 = PTR_DAT_06646c10;
                    /* try { // try from 05e5d064 to 05f5d0b3 has its CatchHandler @ 05e5cd90 */
  puVar16 = *(undefined8 **)(unaff_x19 + 0x1b0);
  puVar17 = *(undefined8 **)(unaff_x27 + 0xc08);
  *(undefined8 *)(unaff_x22 + 0x10) = **(undefined8 **)(param_1 + 0x220);
  thunk_FUN_02dc1ef0();
  *(undefined8 *)(unaff_x22 + 0x20) = *puVar16;
  thunk_FUN_02dc1ef0((undefined8 *)(unaff_x22 + 0x20));
  uVar8 = *puVar17;
  *(undefined4 *)(unaff_x22 + 0x18) = 2;
  lVar9 = thunk_FUN_02d8a638(uVar8);
  FUN_036a55a0(lVar9,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_06646c18;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    uVar8 = *(undefined8 *)Method_System_Net_Configuration_SmtpNetworkElement_get_UserName__;
    lVar12 = *(long *)PTR_DAT_06646c18;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar4 = Method_System_Xml_XmlNode_AppendChild__;
    puVar5 = Method_System_Xml_XmlNode__ctor__;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        thunk_FUN_02dc1ef0();
      }
      else {
        FUN_036a5e08(lVar9,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *(long *)(unaff_x22 + 0x30) = lVar9;
      thunk_FUN_02dc1ef0((long *)(unaff_x22 + 0x30),lVar9);
      lVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                );
      FUN_036a55a0(lVar9,*(undefined8 *)
                          Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
      lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
      FUN_05e467e8(lVar11,0);
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x18) =
             *(undefined8 *)
              Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__;
        thunk_FUN_02dc1ef0();
        *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
        thunk_FUN_02dc1ef0();
        puVar6 = Method_System_Xml_XmlNode_InsertBefore__;
        if (lVar9 != 0) {
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar11;
              thunk_FUN_02dc1ef0(plVar10,lVar11);
            }
            else {
              FUN_036a5e08(lVar9,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar9;
            thunk_FUN_02dc1ef0((long *)(unaff_x22 + 0x28),lVar9);
            if (unaff_x21 != 0) {
              lVar9 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                  thunk_FUN_02dc1ef0();
                }
                else {
                  FUN_036a5e08();
                }
                lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                FUN_05e467f0(lVar9,0);
                puVar4 = PTR_DAT_06648360;
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0x10) =
                       *(undefined8 *)Method_System_Collections_Generic_Stack<ByteArraySlice>_Pop__;
                  thunk_FUN_02dc1ef0();
                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                  uVar8 = *puVar17;
                  *(undefined4 *)(lVar9 + 0x18) = 1;
                  lVar11 = thunk_FUN_02d8a638(uVar8);
                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                  if (lVar11 != 0) {
                    lVar12 = *(long *)(lVar11 + 0x10);
                    uVar8 = *(undefined8 *)puVar4;
                    lVar13 = *(long *)puVar3;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar1 = *(uint *)(lVar11 + 0x18);
                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                        thunk_FUN_02dc1ef0();
                      }
                      else {
                        FUN_036a5e08(lVar11,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar9 + 0x30) = lVar11;
                      thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                      lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                      
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                 );
                      FUN_036a55a0(lVar11,*(undefined8 *)
                                           Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                  );
                      lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
                      FUN_05e467e8(lVar12,0);
                      puVar4 = 
                      Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__;
                      if (lVar12 != 0) {
                        *(undefined8 *)(lVar12 + 0x18) =
                             *(undefined8 *)
                              Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                        ;
                        thunk_FUN_02dc1ef0();
                        *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                        thunk_FUN_02dc1ef0();
                        if (lVar11 != 0) {
                          lVar13 = *(long *)(lVar11 + 0x10);
                          lVar14 = *(long *)puVar6;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar11 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                              plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar10 = lVar12;
                              thunk_FUN_02dc1ef0(plVar10,lVar12);
                            }
                            else {
                              FUN_036a5e08(lVar11,lVar12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar9 + 0x28) = lVar11;
                            thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                            lVar11 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar11 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar10 = lVar9;
                                thunk_FUN_02dc1ef0(plVar10,lVar9);
                              }
                              else {
                                FUN_036a5e08();
                              }
                              lVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                                          Method_System_Xml_XmlNode_AppendChild__);
                              FUN_05e467f0(lVar9,0);
                              puVar7 = Method_System_Xml_Serialization_XmlSerializer__ctor__;
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x10) =
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__
                                ;
                                thunk_FUN_02dc1ef0();
                                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar7;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                uVar8 = *puVar17;
                                *(undefined4 *)(lVar9 + 0x18) = 0;
                                lVar11 = thunk_FUN_02d8a638(uVar8);
                                FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                if (lVar11 != 0) {
                                  lVar12 = *(long *)(lVar11 + 0x10);
                                  uVar8 = *(undefined8 *)
                                           Method_System_Net_Configuration_SmtpNetworkElement_set_EnableSsl__
                                  ;
                                  lVar13 = *(long *)puVar3;
                                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                  if (lVar12 != 0) {
                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                      thunk_FUN_02dc1ef0();
                                    }
                                    else {
                                      FUN_036a5e08(lVar11,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar9 + 0x30) = lVar11;
                                    thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                  
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                    FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                );
                                    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
                                    FUN_05e467e8(lVar12,0);
                                    if (lVar12 != 0) {
                                      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar4;
                                      thunk_FUN_02dc1ef0();
                                      *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                      thunk_FUN_02dc1ef0();
                                      if (lVar11 != 0) {
                                        lVar13 = *(long *)(lVar11 + 0x10);
                                        lVar14 = *(long *)puVar6;
                                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                        puVar4 = Method_System_Xml_XmlNode_AppendChild__;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                            plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar10 = lVar12;
                                            thunk_FUN_02dc1ef0(plVar10,lVar12);
                                          }
                                          else {
                                            FUN_036a5e08(lVar11,lVar12,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar9 + 0x28) = lVar11;
                                          thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                          lVar11 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar11 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar10 = lVar9;
                                              thunk_FUN_02dc1ef0(plVar10,lVar9);
                                            }
                                            else {
                                              FUN_036a5e08();
                                            }
                                            lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                            FUN_05e467f0(lVar9,0);
                                            puVar4 = 
                                            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                            ;
                                            if (lVar9 != 0) {
                                              *(undefined8 *)(lVar9 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_0664c580;
                                              thunk_FUN_02dc1ef0();
                                              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                              uVar8 = *puVar17;
                                              *(undefined4 *)(lVar9 + 0x18) = 0;
                                              lVar11 = thunk_FUN_02d8a638(uVar8);
                                              FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                              if (lVar11 != 0) {
                                                lVar12 = *(long *)(lVar11 + 0x10);
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Password__
                                                ;
                                                lVar13 = *(long *)puVar3;
                                                *(int *)(lVar11 + 0x1c) =
                                                     *(int *)(lVar11 + 0x1c) + 1;
                                                if (lVar12 != 0) {
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                                    thunk_FUN_02dc1ef0();
                                                  }
                                                  else {
                                                    FUN_036a5e08(lVar11,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)puVar6;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  puVar4 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar4 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateReader__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_DefaultCredentials__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)puVar6;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  puVar4 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar4 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_VerifyVersion__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpSection__ctor__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Xml_XmlTextEncoder_Write__;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dc1ef0();
                                                    lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                    FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)puVar6;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  puVar4 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar4 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteRoot__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_UserName__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializerImplementation_get_Writer__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateWriter__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)puVar6;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  puVar4 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar4 = 
                                                  Method_System_Xml_XmlTextReaderImpl_set_EntityHandling__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Peek__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_TargetName__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateChar__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__
                                                  ;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_Throw__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  lVar13 = thunk_FUN_02d8a638(*puVar17);
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar2);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlNodeReader_GetAttribute__;
                                                  lVar15 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar12 + 0x20),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)puVar6;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  puVar4 = Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar4 = PTR_DAT_06648368;
                                                    if (lVar9 != 0) {
                                                      *(undefined8 *)(lVar9 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  puVar4 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar9,0);
                                                  puVar7 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      lVar14 = *(long *)puVar6;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlTextWriter_LookupPrefix__;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsLong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Clear__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteCharEntity__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDateTimeString__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlStringConverter_ChangeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar8 = *puVar17;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar11 = thunk_FUN_02d8a638(uVar8);
                                                    FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                    if (lVar11 != 0) {
                                                      lVar12 = *(long *)(lVar11 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlUtf8RawTextWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceExplicit__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_ThrowInvalidStateTransition__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlWellFormedWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_LookupPrefix__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBase64__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl__ctor__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlTextWriter_InternalWriteEndElement__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_FinishInitUriString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_set_WhitespaceHandling__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AddAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_XsdKatmaiTimeScaleToValueLength__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_ResolveEntity__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteEndAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsString__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_AutoComplete__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlSqlBinaryReader_ScanText__;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlUntypedConverter_ToString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_SkipExtn__;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_SetupFromParserContext__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_MoveToAttribute__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar7 = 
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceImplicit__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AdvanceState__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlUrlResolver_GetEntity__;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_CheckNCName__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05e467f0(lVar9,0);
                                                    puVar4 = 
                                                  Method_System_Xml_XmlValidatingReaderImpl_MoveOffEntityReference__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
                                                  uVar8 = *puVar17;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar11,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e467e8(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBinHex__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar13 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar12;
                                                        thunk_FUN_02dc1ef0(plVar10,lVar12);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar11,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02dc1ef0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    *(long *)(unaff_x28 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dc1ef0();
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


