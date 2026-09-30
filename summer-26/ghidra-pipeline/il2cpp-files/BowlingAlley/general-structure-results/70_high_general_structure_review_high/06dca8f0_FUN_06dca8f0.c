/*
FUNCTION_NAME: FUN_06dca8f0
ENTRY_POINT: 06dca8f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_file_logging_hits_8;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06dca8f0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateMultidimensionalArray__;
  puVar3 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateList__;
  puVar2 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__;
  puVar4 = Method_System_IO_FileStream_EndWrite__;
  if ((DAT_076e9feb & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateObject__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateMultidimensionalArray__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateList__
                      );
    thunk_FUN_032e1da0(Method_System_Data_DataColumn__ctor__);
    thunk_FUN_032e1da0(Method_System_Data_DataRow_CheckColumn__);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataPropertiesToken__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727fa28);
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ResolvePropertyAndCreatorValues__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727cba0);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ResolveTypeName__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_SetExtensionData__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ThrowUnexpectedEndException__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CalculatePropertyValues__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CheckForCircularReference__
                      );
    DAT_076e9feb = 1;
  }
  uVar13 = *(undefined8 *)puVar2;
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_050723a4(lVar7,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076ea0fe == '\0') {
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    DAT_076ea0fe = '\x01';
  }
  puVar5 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CalculatePropertyValues__;
  puVar3 = PTR_DAT_0727fa28;
  puVar2 = PTR_DAT_0727cba0;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar4;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_057aaeec(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar3);
  }
  uVar9 = FUN_058b0a00(uVar14,uVar9,0);
  puVar3 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateObject__;
  if (lVar7 == 0) goto LAB_06dcaea8;
  FUN_05072d78(lVar7,10,uVar9,
               *(undefined8 *)
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateObject__);
  if (DAT_076ea0fe == '\0') {
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    DAT_076ea0fe = '\x01';
  }
  puVar5 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_SetExtensionData__;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar4;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_057aaeec(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2,0);
  uVar9 = FUN_058b0a00(uVar14,uVar9,0);
  FUN_05072d78(lVar7,0x16,uVar9,*(undefined8 *)puVar3);
  if (DAT_076ea0fe == '\0') {
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    DAT_076ea0fe = '\x01';
  }
  puVar5 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ResolvePropertyAndCreatorValues__
  ;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar4;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_057aaeec(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2,0);
  uVar9 = FUN_058b0a00(uVar14,uVar9,0);
  FUN_05072d78(lVar7,0x28,uVar9,*(undefined8 *)puVar3);
  if (DAT_076ea0fe == '\0') {
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    DAT_076ea0fe = '\x01';
  }
  puVar5 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ThrowUnexpectedEndException__;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar4;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_057aaeec(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2,0);
  uVar9 = FUN_058b0a00(uVar14,uVar9,0);
  FUN_05072d78(lVar7,0x29,uVar9,*(undefined8 *)puVar3);
  if (DAT_076ea0fe == '\0') {
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    DAT_076ea0fe = '\x01';
  }
  puVar5 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ResolveTypeName__;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar4;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_057aaeec(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2,0);
  uVar9 = FUN_058b0a00(uVar14,uVar9,0);
  FUN_05072d78(lVar7,0x17,uVar9,*(undefined8 *)puVar3);
  if (DAT_076ea0fe == '\0') {
    thunk_FUN_032e1da0(Method_System_IO_FileStream_EndWrite__);
    DAT_076ea0fe = '\x01';
  }
  puVar5 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CheckForCircularReference__;
  puVar3 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar4;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar13 = FUN_057aaeec(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2,0);
  uVar13 = FUN_058b0a00(uVar9,uVar13,0);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar8);
    lVar8 = *(long *)puVar3;
  }
  puVar4 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar12 == 0) goto LAB_06dcaea8;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar6 = (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
  uVar9 = FUN_05072cd8(lVar7,uVar6,*(undefined8 *)puVar4);
  puVar4 = Method_System_Data_DataColumn__ctor__;
  if (lVar8 == 0) goto LAB_06dcaea8;
  plVar10 = (long *)(**(code **)(lVar8 + 0x18))
                              (*(undefined8 *)(lVar8 + 0x40),uVar9,*(undefined8 *)(lVar8 + 0x28));
  if (plVar10 == (long *)0x0) {
LAB_06dcadc0:
    plVar10 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)puVar4;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06dcadc0;
    if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      plVar10 = (long *)0x0;
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_06dcaea8;
  plVar11 = (long *)(**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),uVar13,*(undefined8 *)(lVar7 + 0x28));
  if (plVar11 == (long *)0x0) {
LAB_06dcae1c:
    plVar11 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)puVar4;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06dcae1c;
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      plVar11 = (long *)0x0;
    }
  }
  lVar7 = FUN_06dca7ac();
  puVar4 = 
  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataPropertiesToken__;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
    FUN_041e29fc(*(long *)(lVar7 + 0x30),0,plVar10,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataPropertiesToken__
                );
    lVar7 = FUN_06dca7ac();
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 0x30);
      lVar7 = FUN_06dca7ac();
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) && (lVar8 != 0)) {
        FUN_041e29fc(lVar8,*(int *)(*(long *)(lVar7 + 0x30) + 0x18) + -1,plVar11,
                     *(undefined8 *)puVar4);
        return;
      }
    }
  }
LAB_06dcaea8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


