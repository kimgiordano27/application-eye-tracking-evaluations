/*
FUNCTION_NAME: UnityEngine.Physics$$OnSceneContactModify
ENTRY_POINT: 05e5fdbc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_5
*/


void UnityEngine_Physics__OnSceneContactModify(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 05e5fda4 with catch @ 05e5fdc0 */
  FUN_036a5e08(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
                    /* try { // try from 05e5fdc4 to 05f5fdcb has its CatchHandler @ 05e5fdd4 */
                    /* try { // try from 05e5fdcc to 05f5fdd7 has its CatchHandler @ 05e5fc58 */
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  thunk_FUN_02dc1ef0();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e5fdc4 with catch @ 05e5fdd4
                        */
                    /* try { // try from 05e5fdd8 to 05f5fe67 has its CatchHandler @ 05e5fdd8
                       catch() { ... } // from try @ 05e5fdd8 with catch @ 05e5fdd8
                       catch() { ... } // from try @ 05e5feb8 with catch @ 05e5fdd8
                       catch() { ... } // from try @ 05e5fee8 with catch @ 05e5fdd8
                       catch() { ... } // from try @ 05e5ff14 with catch @ 05e5fdd8
                       catch() { ... } // from try @ 05e5ff38 with catch @ 05e5fdd8 */
  lVar6 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_02dc1ef0();
    }
    else {
      FUN_036a5e08();
    }
    lVar6 = thunk_FUN_02d8a638(*unaff_x25);
    FUN_05e467f0(lVar6,0);
    puVar2 = Method_System_Xml_XmlWellFormedWriter_WriteCharEntity__;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) =
           *(undefined8 *)Method_System_Xml_XmlWellFormedWriter_LookupPrefix__;
      thunk_FUN_02dc1ef0();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
      uVar3 = *unaff_x27;
      *(undefined4 *)(lVar6 + 0x18) = 1;
      lVar4 = thunk_FUN_02d8a638(uVar3);
      FUN_036a55a0(lVar4,*unaff_x20);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        uVar3 = *(undefined8 *)Method_System_Xml_XmlWellFormedWriter_WriteBase64__;
        lVar8 = *unaff_x29;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_02dc1ef0();
          }
          else {
            FUN_036a5e08(lVar4,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar6 + 0x30) = lVar4;
          thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
          lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                      Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                    );
          FUN_036a55a0(lVar4,*(undefined8 *)
                              Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
          lVar7 = thunk_FUN_02d8a638(*unaff_x28);
          FUN_05e467e8(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)Method_System_Xml_XmlValidatingReaderImpl__ctor__;
            thunk_FUN_02dc1ef0();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
            thunk_FUN_02dc1ef0();
            if (lVar4 != 0) {
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *unaff_x19;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar7;
                  thunk_FUN_02dc1ef0(plVar5,lVar7);
                }
                else {
                  FUN_036a5e08(lVar4,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x28) = lVar4;
                thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                lVar4 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar6;
                    thunk_FUN_02dc1ef0(plVar5,lVar6);
                  }
                  else {
                    FUN_036a5e08();
                  }
                  lVar6 = thunk_FUN_02d8a638(*unaff_x25);
                  FUN_05e467f0(lVar6,0);
                  puVar2 = Method_System_Xml_XmlTextWriter_InternalWriteEndElement__;
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)Method_System_Xml_XmlTextReaderImpl_FinishInitUriString__;
                    thunk_FUN_02dc1ef0();
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
                    uVar3 = *unaff_x27;
                    *(undefined4 *)(lVar6 + 0x18) = 1;
                    lVar4 = thunk_FUN_02d8a638(uVar3);
                    FUN_036a55a0(lVar4,*unaff_x20);
                    if (lVar4 != 0) {
                      lVar7 = *(long *)(lVar4 + 0x10);
                      uVar3 = *(undefined8 *)
                               Method_System_Xml_XmlTextReaderImpl_set_WhitespaceHandling__;
                      lVar8 = *unaff_x29;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                          thunk_FUN_02dc1ef0();
                        }
                        else {
                          FUN_036a5e08(lVar4,uVar3,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar6 + 0x30) = lVar4;
                        thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
                        lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                        
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                        FUN_036a55a0(lVar4,*(undefined8 *)
                                            Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                    );
                        lVar7 = thunk_FUN_02d8a638(*unaff_x28);
                        FUN_05e467e8(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)Method_System_Xml_XmlWellFormedWriter_AddAttribute__;
                          thunk_FUN_02dc1ef0();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                          thunk_FUN_02dc1ef0();
                          if (lVar4 != 0) {
                            lVar8 = *(long *)(lVar4 + 0x10);
                            lVar9 = *unaff_x19;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_02dc1ef0(plVar5,lVar7);
                              }
                              else {
                                FUN_036a5e08(lVar4,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar4;
                              thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                              lVar4 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar5 = lVar6;
                                  thunk_FUN_02dc1ef0(plVar5,lVar6);
                                }
                                else {
                                  FUN_036a5e08();
                                }
                                lVar6 = thunk_FUN_02d8a638(*unaff_x25);
                                FUN_05e467f0(lVar6,0);
                                puVar2 = 
                                Method_System_Xml_XmlSqlBinaryReader_XsdKatmaiTimeScaleToValueLength__
                                ;
                                if (lVar6 != 0) {
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)
                                        Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__;
                                  thunk_FUN_02dc1ef0();
                                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
                                  uVar3 = *unaff_x27;
                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                  lVar4 = thunk_FUN_02d8a638(uVar3);
                                  FUN_036a55a0(lVar4,*unaff_x20);
                                  if (lVar4 != 0) {
                                    lVar7 = *(long *)(lVar4 + 0x10);
                                    uVar3 = *(undefined8 *)
                                             Method_System_Xml_XmlTextReaderImpl_ResolveEntity__;
                                    lVar8 = *unaff_x29;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                        ;
                                        thunk_FUN_02dc1ef0();
                                      }
                                      else {
                                        FUN_036a5e08(lVar4,uVar3,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x30) = lVar4;
                                      thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
                                      lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                    
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                      FUN_036a55a0(lVar4,*(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                      lVar7 = thunk_FUN_02d8a638(*unaff_x28);
                                      FUN_05e467e8(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Xml_XmlWellFormedWriter_WriteEndAttribute__
                                        ;
                                        thunk_FUN_02dc1ef0();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                        thunk_FUN_02dc1ef0();
                                        if (lVar4 != 0) {
                                          lVar8 = *(long *)(lVar4 + 0x10);
                                          lVar9 = *unaff_x19;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar7;
                                              thunk_FUN_02dc1ef0(plVar5,lVar7);
                                            }
                                            else {
                                              FUN_036a5e08(lVar4,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x28) = lVar4;
                                            thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                                            lVar4 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar4 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar5 = lVar6;
                                                thunk_FUN_02dc1ef0(plVar5,lVar6);
                                              }
                                              else {
                                                FUN_036a5e08();
                                              }
                                              lVar6 = thunk_FUN_02d8a638(*unaff_x25);
                                              FUN_05e467f0(lVar6,0);
                                              puVar2 = 
                                              Method_System_Xml_XmlSqlBinaryReader_ValueAsString__;
                                              if (lVar6 != 0) {
                                                *(undefined8 *)(lVar6 + 0x10) =
                                                     *(undefined8 *)
                                                      Method_System_Xml_XmlTextWriter_AutoComplete__
                                                ;
                                                thunk_FUN_02dc1ef0();
                                                *(undefined8 *)(lVar6 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
                                                uVar3 = *unaff_x27;
                                                *(undefined4 *)(lVar6 + 0x18) = 0;
                                                lVar4 = thunk_FUN_02d8a638(uVar3);
                                                FUN_036a55a0(lVar4,*unaff_x20);
                                                if (lVar4 != 0) {
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  uVar3 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Xml_XmlSqlBinaryReader_ScanText__;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_XmlUntypedConverter_ToString__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dc1ef0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02dc1ef0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar6 = thunk_FUN_02d8a638(*unaff_x25);
                                                    FUN_05e467f0(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_SkipExtn__;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlTextReaderImpl_SetupFromParserContext__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d8a638(uVar3);
                                                  FUN_036a55a0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlTextReaderImpl_MoveToAttribute__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dc1ef0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02dc1ef0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar6 = thunk_FUN_02d8a638(*unaff_x25);
                                                    FUN_05e467f0(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlWellFormedWriter_PushNamespaceImplicit__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_AdvanceState__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02d8a638(uVar3);
                                                  FUN_036a55a0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlUrlResolver_GetEntity__;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_CheckNCName__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dc1ef0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02dc1ef0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar6 = thunk_FUN_02d8a638(*unaff_x25);
                                                    FUN_05e467f0(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlValidatingReaderImpl_MoveOffEntityReference__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02d8a638(uVar3);
                                                  FUN_036a55a0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__
                                                  );
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x28);
                                                  FUN_05e467e8(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlWellFormedWriter_WriteBinHex__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dc1ef0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_02dc1ef0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02dc1ef0(plVar5,lVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


