/*
FUNCTION_NAME: UnityEngine.InputForUI.TextInputEvent$$set_playerId
ENTRY_POINT: 05e51ac8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void UnityEngine_InputForUI_TextInputEvent__set_playerId(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
      thunk_FUN_02dc1ef0();
    }
    else {
      FUN_036a5e08();
    }
    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
    FUN_05044d4c(lVar3,0);
    puVar2 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
    ;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_0664c580;
      thunk_FUN_02dc1ef0();
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
      uVar4 = *unaff_x19;
      *(undefined4 *)(lVar3 + 0x18) = 0;
      lVar5 = thunk_FUN_02d8a638(uVar4);
      FUN_036a55a0(lVar5,*unaff_x27);
      puVar2 = PTR_DAT_06646c18;
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        uVar4 = *(undefined8 *)Method_System_Net_Configuration_SmtpNetworkElement_set_Password__;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_02dc1ef0();
          }
          else {
            FUN_036a5e08(lVar5,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                        );
          }
          *(long *)(lVar3 + 0x30) = lVar5;
          thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
          lVar5 = thunk_FUN_02d8a638(*unaff_x25);
          FUN_036a55a0(lVar5,*unaff_x29);
          lVar7 = thunk_FUN_02d8a638(*unaff_x24);
          FUN_05044d4c(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)
                  Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
            ;
            thunk_FUN_02dc1ef0();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
            thunk_FUN_02dc1ef0();
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar6 = lVar7;
                  thunk_FUN_02dc1ef0(plVar6,lVar7);
                }
                else {
                  FUN_036a5e08(lVar5,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x28) = lVar5;
                thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                lVar5 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar5 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar6 = lVar3;
                    thunk_FUN_02dc1ef0(plVar6,lVar3);
                  }
                  else {
                    FUN_036a5e08();
                  }
                  lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                  FUN_05044d4c(lVar3,0);
                  puVar2 = Method_System_RuntimeType_GetEnumUnderlyingType__;
                  if (lVar3 != 0) {
                    *(undefined8 *)(lVar3 + 0x10) =
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlFactory<RepeatButton,_RepeatButton_UxmlTraits>__ctor__
                    ;
                    thunk_FUN_02dc1ef0();
                    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                    uVar4 = *unaff_x19;
                    *(undefined4 *)(lVar3 + 0x18) = 0;
                    lVar5 = thunk_FUN_02d8a638(uVar4);
                    FUN_036a55a0(lVar5,*unaff_x27);
                    puVar2 = PTR_DAT_06646c18;
                    if (lVar5 != 0) {
                      lVar7 = *(long *)(lVar5 + 0x10);
                      uVar4 = *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_MoveToAttribute__;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                          thunk_FUN_02dc1ef0();
                        }
                        else {
                          FUN_036a5e08(lVar5,uVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        *(long *)(lVar3 + 0x30) = lVar5;
                        thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                        lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                        FUN_036a55a0(lVar5,*unaff_x29);
                        lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                        FUN_05044d4c(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_GetAttribute__;
                          thunk_FUN_02dc1ef0();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                          thunk_FUN_02dc1ef0();
                          if (lVar5 != 0) {
                            lVar8 = *(long *)(lVar5 + 0x10);
                            lVar9 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar6 = lVar7;
                                thunk_FUN_02dc1ef0(plVar6,lVar7);
                              }
                              else {
                                FUN_036a5e08(lVar5,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x28) = lVar5;
                              thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                              lVar5 = *(long *)(unaff_x20 + 0x10);
                              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                              if (lVar5 != 0) {
                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                  plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar6 = lVar3;
                                  thunk_FUN_02dc1ef0(plVar6,lVar3);
                                }
                                else {
                                  FUN_036a5e08();
                                }
                                lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                FUN_05044d4c(lVar3,0);
                                puVar2 = PTR_DAT_06648368;
                                if (lVar3 != 0) {
                                  *(undefined8 *)(lVar3 + 0x10) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Stack<CompilerContextData>__ctor__
                                  ;
                                  thunk_FUN_02dc1ef0();
                                  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                  uVar4 = *unaff_x19;
                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                  lVar5 = thunk_FUN_02d8a638(uVar4);
                                  FUN_036a55a0(lVar5,*unaff_x27);
                                  if (lVar5 != 0) {
                                    lVar7 = *(long *)(lVar5 + 0x10);
                                    uVar4 = *(undefined8 *)puVar2;
                                    lVar8 = *(long *)PTR_DAT_06646c18;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                        ;
                                        thunk_FUN_02dc1ef0();
                                      }
                                      else {
                                        FUN_036a5e08(lVar5,uVar4,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar3 + 0x30) = lVar5;
                                      thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                      lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                      FUN_036a55a0(lVar5,*unaff_x29);
                                      lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                      FUN_05044d4c(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Xml_Serialization_XmlSerializer_Serialize__
                                        ;
                                        thunk_FUN_02dc1ef0();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                        thunk_FUN_02dc1ef0();
                                        if (lVar5 != 0) {
                                          lVar8 = *(long *)(lVar5 + 0x10);
                                          lVar9 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar6 = lVar7;
                                              thunk_FUN_02dc1ef0(plVar6,lVar7);
                                            }
                                            else {
                                              FUN_036a5e08(lVar5,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x28) = lVar5;
                                            thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                            lVar5 = *(long *)(unaff_x20 + 0x10);
                                            *(int *)(unaff_x20 + 0x1c) =
                                                 *(int *)(unaff_x20 + 0x1c) + 1;
                                            if (lVar5 != 0) {
                                              uVar1 = *(uint *)(unaff_x20 + 0x18);
                                              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar6 = lVar3;
                                                thunk_FUN_02dc1ef0(plVar6,lVar3);
                                              }
                                              else {
                                                FUN_036a5e08();
                                              }
                                              lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                              FUN_05044d4c(lVar3,0);
                                              puVar2 = 
                                              Method_System_Xml_XmlSqlBinaryReader_CheckAllowContent__
                                              ;
                                              if (lVar3 != 0) {
                                                *(undefined8 *)(lVar3 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_Stack<ByteArraySlice>_get_Count__
                                                ;
                                                thunk_FUN_02dc1ef0();
                                                *(undefined8 *)(lVar3 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                                uVar4 = *unaff_x19;
                                                *(undefined4 *)(lVar3 + 0x18) = 0;
                                                lVar5 = thunk_FUN_02d8a638(uVar4);
                                                FUN_036a55a0(lVar5,*unaff_x27);
                                                puVar2 = PTR_DAT_06646c18;
                                                if (lVar5 != 0) {
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  uVar4 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_ClientDomain__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadEndElement__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                                    FUN_05044d4c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadElement__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>_Pop__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                                  uVar4 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 2;
                                                  lVar5 = thunk_FUN_02d8a638(uVar4);
                                                  FUN_036a55a0(lVar5,*unaff_x27);
                                                  puVar2 = PTR_DAT_06646c18;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_get_UserName__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetString__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                                    FUN_05044d4c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_GetAttribute__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<DerSequenceReader>__ctor__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                                  uVar4 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar4);
                                                  FUN_036a55a0(lVar5,*unaff_x27);
                                                  puVar2 = PTR_DAT_06646c18;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_TargetName__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ParseMB32__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                                    FUN_05044d4c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Xml_XmlSqlBinaryReader_FinishCDATA__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadDoctype__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                                  uVar4 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d8a638(uVar4);
                                                  FUN_036a55a0(lVar5,*unaff_x27);
                                                  puVar2 = PTR_DAT_06646c18;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_SmtpNetworkElement_set_Port__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetValueType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                                    FUN_05044d4c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                                  uVar4 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02d8a638(uVar4);
                                                  FUN_036a55a0(lVar5,*unaff_x27);
                                                  puVar2 = PTR_DAT_06646c18;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                                    FUN_05044d4c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    uVar4 = *unaff_x19;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02d8a638(uVar4);
                                                    FUN_036a55a0(lVar5,*unaff_x27);
                                                    puVar2 = PTR_DAT_06646c18;
                                                    if (lVar5 != 0) {
                                                      lVar7 = *(long *)(lVar5 + 0x10);
                                                      uVar4 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    lVar3 = thunk_FUN_02d8a638(*unaff_x26);
                                                    FUN_05044d4c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                                                  uVar4 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02d8a638(uVar4);
                                                  FUN_036a55a0(lVar5,*unaff_x27);
                                                  puVar2 = PTR_DAT_06646c18;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d8a638(*unaff_x25);
                                                  FUN_036a55a0(lVar5,*unaff_x29);
                                                  lVar7 = thunk_FUN_02d8a638(*unaff_x24);
                                                  FUN_05044d4c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Xml_XmlNode_InsertBefore__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar5;
                                                  thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_02dc1ef0(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_036a5e08();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x20;
                                                    uVar4 = thunk_FUN_02dc1ef0();
                                                    FUN_05e465bc(uVar4,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


