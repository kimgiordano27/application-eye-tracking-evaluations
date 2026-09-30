/*
FUNCTION_NAME: FUN_05ef0520
ENTRY_POINT: 05ef0520
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void FUN_05ef0520(undefined1 param_1 [16],float param_2,undefined4 param_3,float param_4,
                 long *param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  long *plVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  
  puVar4 = PTR_DAT_067c8f20;
  if ((DAT_06bc470a & 1) == 0) {
    FUN_02f08768(Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__);
    FUN_02f08768(UnityEngine_UIElements_StyleInt_TypeInfo);
    FUN_02f08768(Method_System_Xml_XmlResolver_SupportsType__);
    FUN_02f08768(Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__);
    FUN_02f08768(
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                );
    FUN_02f08768(
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteElementMembers__
                );
    FUN_02f08768(Method_System_Data_DataTable_set_Namespace__);
    FUN_02f08768(
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__
                );
    FUN_02f08768(
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                );
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__);
    FUN_02f08768(Method_System_Xml_XmlElement_SetAttributeNode__);
    FUN_02f08768(Method_System_Xml_XmlLoader_Load__);
    FUN_02f08768(Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteRoot__);
    FUN_02f08768(PTR_DAT_067d2618);
    FUN_02f08768(Method_System_Xml_Serialization_XmlSerializer__ctor__);
    FUN_02f08768(PTR_DAT_067d2620);
    FUN_02f08768(Method_System_Xml_Serialization_XmlSerializer_CreateReader__);
    FUN_02f08768(Method_System_Runtime_Serialization_XmlReaderDelegator_MoveToAttribute__);
    FUN_02f08768(Method_System_Xml_XmlDictionaryReader_ReadElementContentAsDateTime__);
    FUN_02f08768(Method_System_Runtime_Serialization_XmlReaderDelegator_ReadContentAsBase64__);
    DAT_06bc470a = 1;
  }
  lVar17 = param_5[10];
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = (long *)0x0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_060f245c(lVar17,0,0);
  if ((uVar13 & 1) != 0) {
    return;
  }
  lVar14 = FUN_05edbcac(param_5);
  if (lVar14 != 0) {
    iVar11 = FUN_05eede10();
    if (iVar11 == 2) {
      if (lVar17 == 0) goto LAB_05ef0f68;
      uVar15 = 1;
      uVar18 = 1;
    }
    else if (iVar11 == 1) {
      if (lVar17 == 0) goto LAB_05ef0f68;
      uVar18 = 10;
      uVar15 = 1;
    }
    else {
      if (iVar11 != 0) goto LAB_05ef0754;
      if (lVar17 == 0) goto LAB_05ef0f68;
      uVar18 = 10;
      uVar15 = 5;
    }
    FUN_060c12d0(lVar17,*(undefined8 *)PTR_DAT_067d2618,uVar15,0);
    FUN_060c12d0(lVar17,*(undefined8 *)PTR_DAT_067d2620,uVar18,0);
    FUN_060c12d0(lVar17,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlReaderDelegator_ReadContentAsBase64__
                 ,1,0);
    FUN_060c12d0(lVar17,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlReaderDelegator_MoveToAttribute__,
                 uVar18,0);
  }
LAB_05ef0754:
  if (param_5[7] == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_5[7] + 0x30);
  }
  if (*(int *)(*(long *)Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar10 = FUN_05ee78ec();
  if (lVar14 == 0) {
LAB_05ef0d74:
    puVar4 = Method_System_Xml_XmlResolver_SupportsType__;
    if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar17 == 0) goto LAB_05ef0f68;
    thunk_FUN_060bfb94(lVar17,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c),0xffffffff,0
                      );
    UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
              (0x43200000,lVar17,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
    UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
              (0x43200000,lVar17,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),0);
  }
  else {
    if (((param_5[7] == 0) || (lVar14 = *(long *)(param_5[7] + 0x18), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x70), lVar14 == 0)) goto LAB_05ef0f68;
    FUN_03ac039c(&local_d8,lVar14,
                 *(undefined8 *)
                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                );
    puVar8 = Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteListContent__;
    puVar7 = 
    Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__;
    puVar6 = Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__;
    puVar4 = Method_System_Xml_XmlLoader_Load__;
    uVar19 = 0;
    uVar22 = 0;
    uVar12 = 0;
    bVar21 = false;
    local_b0 = local_c8;
    puStack_b8 = puStack_d0;
    local_c0 = local_d8;
    local_d8 = 0;
    puStack_d0 = &local_c0;
    while (uVar13 = FUN_04aff1b0(&local_c0,*(undefined8 *)puVar7), plVar9 = local_b0,
          (uVar13 & 1) != 0) {
      if (local_b0 != (long *)0x0) {
        lVar14 = *local_b0;
        bVar1 = *(byte *)(lVar14 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
            bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
            if (((bVar2 <= bVar1) &&
                ((*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar8 &
                 bVar10) != 0)) && (uVar13 = FUN_060ecf4c(local_b0,0), (uVar13 & 1) != 0)) {
              if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              puVar5 = Method_System_Xml_XmlResolver_SupportsType__;
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              thunk_FUN_060bfb94(lVar17,*(undefined4 *)
                                         (*(long *)(*(long *)
                                                  Method_System_Xml_XmlResolver_SupportsType__ +
                                                  0xb8) + 0x1c),(int)plVar9[6],0);
              UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
                        ((float)*(int *)((long)plVar9 + 0x34),lVar17,
                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
              bVar21 = true;
              UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
                        ((float)(int)plVar9[7],lVar17,
                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20),0);
            }
          }
          else {
            if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar5 = Method_System_Xml_XmlResolver_SupportsType__;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            thunk_FUN_060bfdac((int)plVar9[6],*(undefined4 *)((long)plVar9 + 0x34),(int)plVar9[7],
                               *(undefined4 *)((long)plVar9 + 0x3c),lVar17,
                               *(undefined4 *)
                                (*(long *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ +
                                          0xb8) + 8),0);
            param_2 = *(float *)((long)plVar9 + 0x44);
            param_3 = (undefined4)plVar9[9];
            param_4 = *(float *)((long)plVar9 + 0x4c);
            uVar19 = 1;
            thunk_FUN_060bfdac((int)plVar9[8],param_2,param_3,lVar17,
                               *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),0);
          }
        }
        else {
          plVar20 = local_b0 + 8;
          lVar14 = *plVar20;
          uVar26 = param_3;
          fVar24 = param_4;
          if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            uVar26 = param_3;
            fVar24 = param_4;
          }
          uVar13 = FUN_060f078c(lVar14,0,0);
          if (((uVar13 & 1) == 0) || ((int)plVar9[9] != 1)) {
LAB_05ef0a04:
            plVar20 = plVar9 + 7;
            lVar14 = *plVar20;
            if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar13 = FUN_060f078c(lVar14,0,0);
            bVar3 = true;
            if ((uVar13 & 1) != 0) goto LAB_05ef0a40;
            plVar20 = (long *)0x0;
          }
          else {
            if ((param_5[7] == 0) || (lVar14 = *(long *)(param_5[7] + 0x18), lVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar14 = *(long *)(lVar14 + 0x40);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar15 = thunk_FUN_02f1863c(lVar14,0);
            uVar18 = *(undefined8 *)Method_System_Xml_XmlElement_SetAttributeNode__;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar18 = FUN_050e4454(uVar18,0);
            uVar13 = FUN_050ed374(uVar15,uVar18,0);
            if ((uVar13 & 1) == 0) goto LAB_05ef0a04;
            bVar3 = false;
LAB_05ef0a40:
            plVar20 = (long *)*plVar20;
          }
          if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_060f078c(plVar20,0,0);
          uVar13 = FUN_060f078c(plVar20,0,0);
          if ((uVar13 & 1) != 0) {
            uVar15 = (**(code **)(*param_5 + 0x198))(param_5,*(undefined8 *)(*param_5 + 0x1a0));
            uVar13 = thunk_FUN_04f6d944(uVar15,*(undefined8 *)
                                                Method_System_Xml_XmlDictionaryReader_ReadElementContentAsDateTime__
                                        ,0);
            if ((uVar13 & 1) == 0) {
              if (plVar20 != (long *)0x0) {
                lVar16 = *plVar20;
                lVar14 = *(long *)UnityEngine_UIElements_StyleInt_TypeInfo;
LAB_05ef0b34:
                if (lVar16 == lVar14) goto LAB_05ef0b88;
              }
            }
            else if (plVar20 != (long *)0x0) {
              lVar16 = *plVar20;
              lVar14 = *(long *)UnityEngine_UIElements_StyleInt_TypeInfo;
              if (lVar16 != lVar14) goto LAB_05ef0b34;
              lVar14 = param_5[10];
              if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              UnityEngine_TextCore_Text_SpriteAsset__get_height
                        (lVar14,*(undefined4 *)
                                 (*(long *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ +
                                           0xb8) + 4),plVar20,0);
              goto LAB_05ef0b88;
            }
            lVar14 = param_5[10];
            if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            UnityEngine_TextCore_Text_SpriteAsset__get_height
                      (lVar14,**(undefined4 **)
                                (*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xb8),
                       plVar20,0);
          }
LAB_05ef0b88:
          param_3 = uVar26;
          param_4 = fVar24;
          if (*(char *)((long)plVar9 + 0x4c) != '\0') {
            if (bVar3) {
              uVar22 = FUN_05eeecac(plVar9);
              plVar20 = (long *)Method_System_Xml_XmlResolver_SupportsType__;
              fVar25 = param_2;
              param_3 = uVar26;
              param_4 = fVar24;
              uVar23 = FUN_05eeeee4(plVar9);
            }
            else {
              uVar22 = FUN_05eeedc8(plVar9);
              plVar20 = (long *)Method_System_Xml_XmlResolver_SupportsType__;
              fVar25 = param_2;
              param_3 = uVar26;
              param_4 = fVar24;
              uVar23 = FUN_05eef000(plVar9);
            }
            lVar14 = param_5[10];
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            thunk_FUN_060bfdac(uVar22,1.0 - (param_2 + fVar24),uVar26,fVar24,lVar14,
                               *(undefined4 *)(*(long *)(*plVar20 + 0xb8) + 0x10),0);
            if (param_5[10] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar22 = 1;
            param_2 = 1.0 - (fVar25 + param_4);
            thunk_FUN_060bfdac(uVar23,param_2,param_3,param_5[10],
                               *(undefined4 *)(*(long *)(*plVar20 + 0xb8) + 0x14),0);
          }
        }
      }
    }
    FUN_04aff1ac(&local_c0,
                 *(undefined8 *)
                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteXmlAttribute__);
    if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05ef10d8(lVar17,*(undefined8 *)
                         Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteRoot__
                 ,uVar22);
    FUN_05ef10d8(lVar17,*(undefined8 *)Method_System_Xml_Serialization_XmlSerializer_CreateReader__,
                 uVar12 & 1);
    FUN_05ef10d8(lVar17,*(undefined8 *)Method_System_Xml_Serialization_XmlSerializer__ctor__,uVar19)
    ;
    if (!bVar21) goto LAB_05ef0d74;
  }
  if (*(int *)(*(long *)Method_System_Data_DataTable_set_Namespace__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar14 = FUN_060b6524(0);
  if ((bVar10 & 1) != 0) {
    if (lVar14 == 0) goto LAB_05ef0f68;
    uVar13 = FUN_060b657c(lVar14,0);
    puVar4 = Method_System_Xml_XmlResolver_SupportsType__;
    if ((uVar13 & 1) != 0) {
      lVar16 = *(long *)Method_System_Xml_XmlResolver_SupportsType__;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar16 = *(long *)puVar4;
      }
      uVar19 = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x28);
      uVar22 = FUN_060b6864(lVar14,0);
      if (lVar17 == 0) goto LAB_05ef0f68;
      thunk_FUN_060bfb94(lVar17,uVar19,uVar22,0);
      uVar19 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24);
      FUN_060b69cc(lVar14,0);
      UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0(lVar17,uVar19,0);
      uVar19 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c);
      iVar11 = FUN_060b6b34(lVar14,0);
      fVar24 = (float)iVar11;
      goto LAB_05ef0f30;
    }
  }
  puVar4 = Method_System_Xml_XmlResolver_SupportsType__;
  if (*(int *)(*(long *)Method_System_Xml_XmlResolver_SupportsType__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (lVar17 != 0) {
    thunk_FUN_060bfb94(lVar17,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0xffffffff,0
                      );
    fVar24 = 160.0;
    UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
              (0x43200000,lVar17,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24),0);
    uVar19 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c);
LAB_05ef0f30:
    UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0(fVar24,lVar17,uVar19,0);
    return;
  }
LAB_05ef0f68:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


