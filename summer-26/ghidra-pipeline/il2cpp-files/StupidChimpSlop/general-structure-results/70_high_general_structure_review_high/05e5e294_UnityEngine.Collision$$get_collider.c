/*
FUNCTION_NAME: UnityEngine.Collision$$get_collider
ENTRY_POINT: 05e5e294
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;strong_file_logging_hits_8;telemetry_or_network_hits_6;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Collision__get_collider(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_CY;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_x10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (in_CY) {
    FUN_036a5e08();
  }
  else {
    *(int *)(unaff_x23 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_02dc1ef0();
  }
  *(long *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_02dc1ef0();
  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                              Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                            );
  FUN_036a55a0(lVar4,*(undefined8 *)
                      Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
  lVar5 = thunk_FUN_02d8a638(*unaff_x28);
  FUN_05e467e8(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) =
         *(undefined8 *)Method_System_Xml_Serialization_XmlSerializerImplementation_get_Writer__;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
    thunk_FUN_02dc1ef0();
    lVar6 = thunk_FUN_02d8a638(*unaff_x27);
    FUN_036a55a0(lVar6,*unaff_x20);
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      uVar8 = *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__;
      lVar10 = *unaff_x29;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_02dc1ef0();
        }
        else {
          FUN_036a5e08(lVar6,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar5 + 0x20) = lVar6;
        thunk_FUN_02dc1ef0((long *)(lVar5 + 0x20),lVar6);
        if (lVar4 != 0) {
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar9 = *unaff_x19;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar5;
              thunk_FUN_02dc1ef0(plVar7,lVar5);
            }
            else {
              FUN_036a5e08(lVar4,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = thunk_FUN_02d8a638(*unaff_x28);
            FUN_05e467e8(lVar5,0);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x18) =
                   *(undefined8 *)Method_System_Xml_Serialization_XmlSerializer_CreateWriter__;
              thunk_FUN_02dc1ef0();
              *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
              thunk_FUN_02dc1ef0();
              lVar6 = thunk_FUN_02d8a638(*unaff_x27);
              FUN_036a55a0(lVar6,*unaff_x20);
              if (lVar6 != 0) {
                lVar9 = *(long *)(lVar6 + 0x10);
                uVar8 = *(undefined8 *)Method_System_Xml_XmlNodeReader_GetAttribute__;
                lVar10 = *unaff_x29;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                    thunk_FUN_02dc1ef0();
                  }
                  else {
                    FUN_036a5e08(lVar6,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar5 + 0x20) = lVar6;
                  thunk_FUN_02dc1ef0((long *)(lVar5 + 0x20),lVar6);
                  lVar6 = *(long *)(lVar4 + 0x10);
                  lVar9 = *unaff_x19;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  puVar2 = Method_System_Xml_XmlNode_AppendChild__;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar7 = lVar5;
                      thunk_FUN_02dc1ef0(plVar7,lVar5);
                    }
                    else {
                      FUN_036a5e08(lVar4,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(unaff_x22 + 0x28) = lVar4;
                    thunk_FUN_02dc1ef0((long *)(unaff_x22 + 0x28),lVar4);
                    lVar4 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                        *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                        thunk_FUN_02dc1ef0();
                      }
                      else {
                        FUN_036a5e08();
                      }
                      lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                      FUN_05e467f0(lVar4,0);
                      puVar2 = Method_System_Xml_XmlTextReaderImpl_set_EntityHandling__;
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0x10) =
                             *(undefined8 *)
                              Method_System_Collections_Generic_Stack<ExpressionCombinator>_Peek__;
                        thunk_FUN_02dc1ef0();
                        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                        uVar8 = *unaff_x27;
                        *(undefined4 *)(lVar4 + 0x18) = 0;
                        lVar5 = thunk_FUN_02d8a638(uVar8);
                        FUN_036a55a0(lVar5,*unaff_x20);
                        if (lVar5 != 0) {
                          lVar6 = *(long *)(lVar5 + 0x10);
                          uVar8 = *(undefined8 *)
                                   Method_System_Net_Configuration_SmtpNetworkElement_get_TargetName__
                          ;
                          lVar9 = *unaff_x29;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar1 = *(uint *)(lVar5 + 0x18);
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                              thunk_FUN_02dc1ef0();
                            }
                            else {
                              FUN_036a5e08(lVar5,uVar8,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar4 + 0x30) = lVar5;
                            thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                            lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                            FUN_036a55a0(lVar5,*(undefined8 *)
                                                Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                        );
                            lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                            FUN_05e467e8(lVar6,0);
                            if (lVar6 != 0) {
                              *(undefined8 *)(lVar6 + 0x18) =
                                   *(undefined8 *)
                                    Method_System_Xml_XmlTextEncoder_WriteSurrogateChar__;
                              thunk_FUN_02dc1ef0();
                              *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                              thunk_FUN_02dc1ef0();
                              lVar9 = thunk_FUN_02d8a638(*unaff_x27);
                              FUN_036a55a0(lVar9,*unaff_x20);
                              if (lVar9 != 0) {
                                lVar10 = *(long *)(lVar9 + 0x10);
                                uVar8 = *(undefined8 *)
                                         Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__;
                                lVar11 = *unaff_x29;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                    thunk_FUN_02dc1ef0();
                                  }
                                  else {
                                    FUN_036a5e08(lVar9,uVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar6 + 0x20) = lVar9;
                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x20),lVar9);
                                  if (lVar5 != 0) {
                                    lVar9 = *(long *)(lVar5 + 0x10);
                                    lVar10 = *unaff_x19;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar9 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar7 = lVar6;
                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                      }
                                      else {
                                        FUN_036a5e08(lVar5,lVar6,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                      FUN_05e467e8(lVar6,0);
                                      if (lVar6 != 0) {
                                        *(undefined8 *)(lVar6 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Xml_XmlTextReaderImpl_Throw__;
                                        thunk_FUN_02dc1ef0();
                                        *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                        thunk_FUN_02dc1ef0();
                                        lVar9 = thunk_FUN_02d8a638(*unaff_x27);
                                        FUN_036a55a0(lVar9,*unaff_x20);
                                        if (lVar9 != 0) {
                                          lVar10 = *(long *)(lVar9 + 0x10);
                                          uVar8 = *(undefined8 *)
                                                   Method_System_Xml_XmlNodeReader_GetAttribute__;
                                          lVar11 = *unaff_x29;
                                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                          if (lVar10 != 0) {
                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar8;
                                              thunk_FUN_02dc1ef0();
                                            }
                                            else {
                                              FUN_036a5e08(lVar9,uVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x20) = lVar9;
                                            thunk_FUN_02dc1ef0((long *)(lVar6 + 0x20),lVar9);
                                            lVar9 = *(long *)(lVar5 + 0x10);
                                            lVar10 = *unaff_x19;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            puVar2 = Method_System_Xml_XmlNode_AppendChild__;
                                            if (lVar9 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar7 = lVar6;
                                                thunk_FUN_02dc1ef0(plVar7,lVar6);
                                              }
                                              else {
                                                FUN_036a5e08(lVar5,lVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar4 + 0x28) = lVar5;
                                              thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                              lVar5 = *(long *)(unaff_x21 + 0x10);
                                              *(int *)(unaff_x21 + 0x1c) =
                                                   *(int *)(unaff_x21 + 0x1c) + 1;
                                              if (lVar5 != 0) {
                                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                  plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar7 = lVar4;
                                                  thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                }
                                                else {
                                                  FUN_036a5e08();
                                                }
                                                lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                                                FUN_05e467f0(lVar4,0);
                                                puVar2 = PTR_DAT_06648368;
                                                if (lVar4 != 0) {
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dc1ef0();
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  puVar2 = 
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05e467f0(lVar4,0);
                                                  puVar3 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dc1ef0();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *unaff_x19;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_System_Xml_XmlNode_AppendChild__;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlTextWriter_LookupPrefix__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsLong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Entry>_Clear__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlTextEncoder_WriteCharEntity__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_GetAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsDateTimeString__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlStringConverter_ChangeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar8 = *unaff_x27;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02d8a638(uVar8);
                                                    FUN_036a55a0(lVar5,*unaff_x20);
                                                    if (lVar5 != 0) {
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlUtf8RawTextWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceExplicit__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_ThrowInvalidStateTransition__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlWellFormedWriter_WriteCharEntity__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_LookupPrefix__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBase64__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl__ctor__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlTextWriter_InternalWriteEndElement__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_FinishInitUriString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_set_WhitespaceHandling__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AddAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_XsdKatmaiTimeScaleToValueLength__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_ResolveEntity__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteEndAttribute__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_ValueAsString__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextWriter_AutoComplete__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlSqlBinaryReader_ScanText__;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlUntypedConverter_ToString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_SkipExtn__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_SetupFromParserContext__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_MoveToAttribute__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceImplicit__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AdvanceState__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlUrlResolver_GetEntity__;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_CheckNCName__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e467f0(lVar4,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlValidatingReaderImpl_MoveOffEntityReference__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02d8a638(uVar8);
                                                  FUN_036a55a0(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar6 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBinHex__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dc1ef0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dc1ef0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dc1ef0();
                                                    FUN_05e465bc(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


