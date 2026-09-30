/*
FUNCTION_NAME: FUN_05dcda08
ENTRY_POINT: 05dcda08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05dcda08(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
  if ((DAT_066dbdc3 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063198f8);
    FUN_02b3c81c(Method_System_Xml_XmlEntity_CloneNode__);
    FUN_02b3c81c(Method_System_Xml_XmlEntity_set_InnerText__);
    FUN_02b3c81c(Method_System_Xml_XmlEntity_set_InnerXml__);
    FUN_02b3c81c(Method_System_Xml_XmlEntityReference__ctor__);
    FUN_02b3c81c(Method_System_Xml_XmlEntityReference_set_Value__);
    FUN_02b3c81c(Method_System_Xml_XmlExceptionHelper_ThrowXmlException__);
    FUN_02b3c81c(Method_System_Xml_XmlExceptionHelper_ThrowXmlException__);
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_HandleUnexpectedItemInCollection__
                );
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_ReadValue__);
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlFormatWriterInterpreter_<WriteCollection>b__24_0__
                );
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlFormatWriterInterpreter_WriteCollection__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<byte[]>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<bool>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<byte>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<DateTime>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<DateTimeOffset>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<double>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<short>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<int>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<long>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<object>__);
    FUN_02b3c81c(Method_System_Xml_Schema_XmlListConverter_ToArray<sbyte>__);
    FUN_02b3c81c(Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
    DAT_066dbdc3 = 1;
  }
  lVar3 = *(long *)puVar2;
  iVar1 = *(int *)(lVar3 + 0xe4);
  switch(param_1) {
  case 1:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[2] != 0) {
      return puVar5[2];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<byte[]>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar3;
    break;
  case 2:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[3] != 0) {
      return puVar5[3];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<DateTimeOffset>__,
                 0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar4 = lVar3;
    break;
  case 3:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[4] != 0) {
      return puVar5[4];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar4 = lVar3;
    break;
  case 4:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[5] != 0) {
      return puVar5[5];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<double>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar4 = lVar3;
    break;
  case 5:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[6] != 0) {
      return puVar5[6];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<short>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar4 = lVar3;
    break;
  case 6:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[7] != 0) {
      return puVar5[7];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<int>__
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar4 = lVar3;
    break;
  case 7:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[8] != 0) {
      return puVar5[8];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<long>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
    *plVar4 = lVar3;
    break;
  case 8:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[9] != 0) {
      return puVar5[9];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<object>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
    *plVar4 = lVar3;
    break;
  case 9:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[10] != 0) {
      return puVar5[10];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<sbyte>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
    *plVar4 = lVar3;
    break;
  case 10:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xb] != 0) {
      return puVar5[0xb];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlEntity_set_InnerText__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
    *plVar4 = lVar3;
    break;
  case 0xb:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xc] != 0) {
      return puVar5[0xc];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlEntity_set_InnerXml__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
    *plVar4 = lVar3;
    break;
  case 0xc:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xd] != 0) {
      return puVar5[0xd];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlEntityReference__ctor__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
    *plVar4 = lVar3;
    break;
  case 0xd:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xe] != 0) {
      return puVar5[0xe];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlEntityReference_set_Value__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
    *plVar4 = lVar3;
    break;
  case 0xe:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xf] != 0) {
      return puVar5[0xf];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlExceptionHelper_ThrowXmlException__
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
    *plVar4 = lVar3;
    break;
  case 0xf:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x10] != 0) {
      return puVar5[0x10];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlExceptionHelper_ThrowXmlException__
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
    *plVar4 = lVar3;
    break;
  case 0x10:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x11] != 0) {
      return puVar5[0x11];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_HandleUnexpectedItemInCollection__
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
    *plVar4 = lVar3;
    break;
  case 0x11:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x12] != 0) {
      return puVar5[0x12];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_ReadValue__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
    *plVar4 = lVar3;
    break;
  case 0x12:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x13] != 0) {
      return puVar5[0x13];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlFormatWriterInterpreter_<WriteCollection>b__24_0__
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
    *plVar4 = lVar3;
    break;
  case 0x13:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x14] != 0) {
      return puVar5[0x14];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlFormatWriterInterpreter_WriteCollection__,0
                );
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
    *plVar4 = lVar3;
    break;
  case 0x14:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x15] != 0) {
      return puVar5[0x15];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<bool>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
    *plVar4 = lVar3;
    break;
  case 0x15:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x16] != 0) {
      return puVar5[0x16];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<byte>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
    *plVar4 = lVar3;
    break;
  case 0x16:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x17] != 0) {
      return puVar5[0x17];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<DateTime>__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
    *plVar4 = lVar3;
    break;
  default:
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[1] != 0) {
      return puVar5[1];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063198f8);
    FUN_049c2a40(lVar3,uVar6,*(undefined8 *)Method_System_Xml_XmlEntity_CloneNode__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar3;
  }
  thunk_FUN_02bb0e9c(plVar4,lVar3);
  return lVar3;
}


