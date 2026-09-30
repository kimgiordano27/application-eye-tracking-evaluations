/*
FUNCTION_NAME: Unity.Properties.PathVisitor.PropertyScope$$Dispose
ENTRY_POINT: 05e6b1bc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Properties_PathVisitor_PropertyScope__Dispose(long param_1)

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
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *puVar18;
  long unaff_x20;
  undefined8 *puVar19;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  
  puVar6 = Method_System_Xml_XmlNode_AppendChild__;
  puVar18 = *(undefined8 **)(unaff_x19 + 0xcc0);
  uVar1 = *(uint *)(unaff_x21 + 0x18);
  puVar19 = *(undefined8 **)(unaff_x20 + 0xca0);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
    thunk_FUN_02dc1ef0();
  }
  else {
    FUN_036a5e08();
  }
  *(long *)(unaff_x26 + 0x20) = unaff_x21;
  thunk_FUN_02dc1ef0();
  lVar10 = thunk_FUN_02d8a638(*puVar18);
  FUN_036a55a0(lVar10,*puVar19);
  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_05e467f0(lVar11,0);
  puVar9 = Method_System_Xml_Schema_XsdBuilder_BuildElement_Form__;
  puVar7 = PTR_DAT_06646c10;
  puVar2 = PTR_DAT_06646c08;
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar9;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
    uVar12 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    lVar13 = thunk_FUN_02d8a638(uVar12);
    FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
    if (lVar13 != 0) {
      lVar15 = *(long *)(lVar13 + 0x10);
      uVar12 = *(undefined8 *)Method_System_Net_Configuration_SmtpNetworkElement_set_Password__;
      lVar16 = *(long *)PTR_DAT_06646c18;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      puVar9 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__;
      puVar7 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__;
      puVar2 = Method_System_Xml_XmlNode__ctor__;
      if (lVar15 != 0) {
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          thunk_FUN_02dc1ef0();
        }
        else {
          FUN_036a5e08(lVar13,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar11 + 0x30) = lVar13;
        thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13);
        lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
        FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
        lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
        FUN_05e467e8(lVar15,0);
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x18) =
               *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_GetAttribute__;
          thunk_FUN_02dc1ef0();
          *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
          thunk_FUN_02dc1ef0();
          if (lVar13 != 0) {
            lVar16 = *(long *)(lVar13 + 0x10);
            lVar17 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            puVar5 = PTR_DAT_06646c10;
            if (lVar16 != 0) {
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                *plVar14 = lVar15;
                thunk_FUN_02dc1ef0(plVar14,lVar15);
              }
              else {
                FUN_036a5e08(lVar13,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar11 + 0x28) = lVar13;
              thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13);
              puVar8 = Method_System_Xml_XmlNode_RemoveChild__;
              if (lVar10 != 0) {
                lVar13 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar14 = lVar11;
                    thunk_FUN_02dc1ef0(plVar14,lVar11);
                  }
                  else {
                    FUN_036a5e08(lVar10,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                  FUN_05e467f0(lVar11,0);
                  puVar3 = Method_System_Xml_Schema_XsdBuilder_BuildDocumentation_XmlLang__;
                  if (lVar11 != 0) {
                    *(undefined8 *)(lVar11 + 0x10) =
                         *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildFacet_Fixed__;
                    thunk_FUN_02dc1ef0();
                    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar3;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                    puVar3 = PTR_DAT_06646c08;
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                    FUN_036a55a0(lVar13,*(undefined8 *)puVar5);
                    puVar3 = PTR_DAT_06646c18;
                    if (lVar13 != 0) {
                      lVar15 = *(long *)(lVar13 + 0x10);
                      uVar12 = *(undefined8 *)
                                Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                          thunk_FUN_02dc1ef0();
                        }
                        else {
                          FUN_036a5e08(lVar13,uVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        *(long *)(lVar11 + 0x30) = lVar13;
                        thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13);
                        lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
                        FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                        lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                        FUN_05e467e8(lVar15,0);
                        if (lVar15 != 0) {
                          *(undefined8 *)(lVar15 + 0x18) =
                               *(undefined8 *)
                                Method_System_Xml_Schema_XsdBuilder_BuildElement_Final__;
                          thunk_FUN_02dc1ef0();
                          *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                          thunk_FUN_02dc1ef0();
                          if (lVar13 != 0) {
                            lVar16 = *(long *)(lVar13 + 0x10);
                            lVar17 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar16 != 0) {
                              uVar1 = *(uint *)(lVar13 + 0x18);
                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar14 = lVar15;
                                thunk_FUN_02dc1ef0(plVar14,lVar15);
                              }
                              else {
                                FUN_036a5e08(lVar13,lVar15,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar11 + 0x28) = lVar13;
                              thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13);
                              lVar13 = *(long *)(lVar10 + 0x10);
                              lVar15 = *(long *)puVar8;
                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                              if (lVar13 != 0) {
                                uVar1 = *(uint *)(lVar10 + 0x18);
                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                  plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar14 = lVar11;
                                  thunk_FUN_02dc1ef0(plVar14,lVar11);
                                }
                                else {
                                  FUN_036a5e08(lVar10,lVar11,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                                FUN_05e467f0(lVar11,0);
                                puVar3 = 
                                Method_System_Xml_Serialization_XmlSerializer_CreateReader__;
                                if (lVar11 != 0) {
                                  *(undefined8 *)(lVar11 + 0x10) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__
                                  ;
                                  thunk_FUN_02dc1ef0();
                                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar3;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                  puVar3 = PTR_DAT_06646c08;
                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar5);
                                  puVar3 = PTR_DAT_06646c18;
                                  if (lVar13 != 0) {
                                    lVar15 = *(long *)(lVar13 + 0x10);
                                    uVar12 = *(undefined8 *)
                                              Method_System_Net_Configuration_SmtpNetworkElement_set_DefaultCredentials__
                                    ;
                                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                    if (lVar15 != 0) {
                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar12;
                                        thunk_FUN_02dc1ef0();
                                      }
                                      else {
                                        FUN_036a5e08(lVar13,uVar12,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                                0xc0) + 0x70));
                                      }
                                      *(long *)(lVar11 + 0x30) = lVar13;
                                      thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13);
                                      lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
                                      FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                      lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                                      FUN_05e467e8(lVar15,0);
                                      if (lVar15 != 0) {
                                        *(undefined8 *)(lVar15 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                        ;
                                        thunk_FUN_02dc1ef0();
                                        *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                        thunk_FUN_02dc1ef0();
                                        if (lVar13 != 0) {
                                          lVar16 = *(long *)(lVar13 + 0x10);
                                          lVar17 = *(long *)Method_System_Xml_XmlNode_InsertBefore__
                                          ;
                                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar1 = *(uint *)(lVar13 + 0x18);
                                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                              plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar14 = lVar15;
                                              thunk_FUN_02dc1ef0(plVar14,lVar15);
                                            }
                                            else {
                                              FUN_036a5e08(lVar13,lVar15,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar11 + 0x28) = lVar13;
                                            thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13);
                                            lVar13 = *(long *)(lVar10 + 0x10);
                                            lVar15 = *(long *)puVar8;
                                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                            if (lVar13 != 0) {
                                              uVar1 = *(uint *)(lVar10 + 0x18);
                                              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar14 = lVar11;
                                                thunk_FUN_02dc1ef0(plVar14,lVar11);
                                              }
                                              else {
                                                FUN_036a5e08(lVar10,lVar11,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
                                              FUN_05e467f0(lVar11,0);
                                              puVar3 = 
                                              Method_System_Xml_XmlSqlBinaryReader_VerifyVersion__;
                                              if (lVar11 != 0) {
                                                *(undefined8 *)(lVar11 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Pop__
                                                ;
                                                thunk_FUN_02dc1ef0();
                                                *(undefined8 *)(lVar11 + 0x20) =
                                                     *(undefined8 *)puVar3;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                puVar3 = PTR_DAT_06646c08;
                                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                                lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                                FUN_036a55a0(lVar13,*(undefined8 *)puVar5);
                                                puVar3 = PTR_DAT_06646c18;
                                                if (lVar13 != 0) {
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  uVar12 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Net_Configuration_SmtpSection__ctor__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar3 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteRoot__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar3 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_UserName__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_CreateWriter__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar3 = 
                                                  Method_System_Xml_XmlTextReaderImpl_set_EntityHandling__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>_Peek__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar3 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_TargetName__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_Throw__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar3 = PTR_DAT_06648360;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar4 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar5);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar3;
                                                    lVar16 = *(long *)PTR_DAT_06646c18;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteStartElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar3 = 
                                                  Method_System_Xml_Serialization_XmlSerializer__ctor__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar3 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)
                                                                       PTR_DAT_06646c10);
                                                  puVar3 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_EnableSsl__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                    thunk_FUN_02dc1ef0();
                                                    puVar5 = 
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_06646c10;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar14 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar14 = lVar15;
                                                        thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Default__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Abstract__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Block__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Type__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = PTR_DAT_06648368;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar4 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar16 = *(long *)PTR_DAT_06646c18;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Ref__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadEndElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlTextWriter_LookupPrefix__;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsLong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlSignificantWhitespace__ctor__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>_Push__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 2;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_UserName__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Clear__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadElement__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 2;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Host__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetString__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_MaxOccurs__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Fixed__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_Name__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XsdBuilder_BuildFacet_Value__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_GetAttribute__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_Properties__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ParseMB32__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar5 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
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
                                                    puVar5 = PTR_DAT_06646c08;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                    puVar5 = PTR_DAT_06646c18;
                                                    if (lVar13 != 0) {
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e467f0(lVar11,0);
                                                  puVar6 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  puVar6 = PTR_DAT_06646c08;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar3);
                                                  puVar6 = PTR_DAT_06646c18;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02d8a638(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_036a55a0(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e467e8(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar15;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar15);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar14,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x26 + 0x28) = lVar10;
                                                  thunk_FUN_02dc1ef0((long *)(unaff_x26 + 0x28),
                                                                     lVar10);
                                                  FUN_05e465bc(unaff_x27,unaff_x26,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


