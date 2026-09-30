/*
FUNCTION_NAME: FUN_07162400
ENTRY_POINT: 07162400
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void FUN_07162400(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar3 = System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo;
  if ((DAT_07a5b32a & 1) == 0) {
    FUN_031f20f4(System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo);
    FUN_031f20f4(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                );
    FUN_031f20f4(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
                );
    FUN_031f20f4(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                );
    FUN_031f20f4(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_031f20f4(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    FUN_031f20f4(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    FUN_031f20f4(System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo);
    FUN_031f20f4(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo);
    FUN_031f20f4(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    FUN_031f20f4(System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo);
    FUN_031f20f4(System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo);
    FUN_031f20f4(System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo);
    FUN_031f20f4(System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo);
    FUN_031f20f4(System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo);
    FUN_031f20f4(System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo);
    FUN_031f20f4(System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo);
    FUN_031f20f4(System_Xml_Serialization_XmlSerializationReader_Fixup_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b3b8);
    FUN_031f20f4(PTR_DAT_075b5578);
    FUN_031f20f4(System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo);
    FUN_031f20f4(
                System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeInfo
                );
    FUN_031f20f4(
                System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                );
    FUN_031f20f4(System_Xml_Serialization_XmlSerializationWriter_WriteCallbackInfo_TypeInfo);
    FUN_031f20f4(PTR_DAT_075df658);
    DAT_07a5b32a = 1;
  }
  puVar5 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo;
  puVar2 = PTR_DAT_0759b3b8;
  FUN_05e44034(param_1,0);
  puVar1 = PTR_DAT_0759b388;
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar8 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,4);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar5,0);
  if (plVar8 == (long *)0x0) goto LAB_07163190;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  puVar4 = System_Xml_Serialization_XmlSerializationReader_Fixup_TypeInfo;
  if ((int)plVar8[3] == 0) goto LAB_07163180;
  plVar8[4] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 4,lVar9);
  plVar11 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar4,0);
  if (plVar11 == (long *)0x0) goto LAB_07163190;
  lVar9 = (**(code **)(*plVar11 + 0x918))(plVar11,*(undefined8 *)(*plVar11 + 0x920));
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 2) goto LAB_07163180;
  plVar8[5] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 5,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 3) goto LAB_07163180;
  plVar8[6] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 6,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 4) goto LAB_07163180;
  plVar8[7] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 7,lVar9);
  puVar4 = PTR_DAT_075df658;
  if (lVar7 == 0) goto LAB_07163190;
  uVar13 = FUN_05e1bea4(lVar7,*(undefined8 *)PTR_DAT_075df658,plVar8,0);
  uVar12 = FUN_05d3a2f4(uVar13,0,0);
  if ((uVar12 & 1) != 0) {
    uVar14 = *(undefined8 *)System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar14 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar14,0);
    plVar8 = (long *)FUN_05e4b334(uVar14,uVar13,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      lVar7 = *(long *)System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo;
      if ((*plVar8 != lVar7) || (*(long **)(param_1 + 0x10) = plVar8, *plVar8 != lVar7))
      goto LAB_07163134;
    }
    thunk_FUN_0329bf60(param_1 + 0x10,plVar8);
  }
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar8 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,3);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar5,0);
  if (plVar8 == (long *)0x0) goto LAB_07163190;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if ((int)plVar8[3] == 0) goto LAB_07163180;
  plVar8[4] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 4,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 2) goto LAB_07163180;
  plVar8[5] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 5,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 3) goto LAB_07163180;
  plVar8[6] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 6,lVar9);
  if (lVar7 == 0) goto LAB_07163190;
  uVar13 = FUN_05e1bea4(lVar7,*(undefined8 *)
                               System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeInfo
                        ,plVar8,0);
  uVar12 = FUN_05d3a2f4(uVar13,0,0);
  if ((uVar12 & 1) != 0) {
    uVar14 = *(undefined8 *)System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar14 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar14,0);
    plVar8 = (long *)FUN_05e4b334(uVar14,uVar13,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      lVar7 = *(long *)System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo;
      if ((*plVar8 != lVar7) || (*(long **)(param_1 + 0x18) = plVar8, *plVar8 != lVar7))
      goto LAB_07163134;
    }
    thunk_FUN_0329bf60(param_1 + 0x18,plVar8);
  }
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar8 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,4);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar5,0);
  if (plVar8 == (long *)0x0) goto LAB_07163190;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  puVar3 = System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo;
  if ((int)plVar8[3] == 0) goto LAB_07163180;
  plVar8[4] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 4,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 2) goto LAB_07163180;
  plVar8[5] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 5,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 3) goto LAB_07163180;
  plVar8[6] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 6,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 4) goto LAB_07163180;
  plVar8[7] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 7,lVar9);
  if (lVar7 == 0) goto LAB_07163190;
  uVar13 = FUN_05e1bea4(lVar7,*(undefined8 *)
                               System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                        ,plVar8,0);
  uVar12 = FUN_05d3a2f4(uVar13,0,0);
  if ((uVar12 & 1) != 0) {
    uVar14 = *(undefined8 *)
              System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
    ;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar14 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar14,0);
    plVar8 = (long *)FUN_05e4b334(uVar14,uVar13,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar7 = *(long *)
               System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
      ;
      if ((*plVar8 != lVar7) || (*(long **)(param_1 + 0x20) = plVar8, *plVar8 != lVar7))
      goto LAB_07163134;
    }
    thunk_FUN_0329bf60(param_1 + 0x20,plVar8);
  }
  puVar6 = 
  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
  ;
  puVar3 = PTR_DAT_075b5578;
  uVar13 = *(undefined8 *)
            System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
  ;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar8 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,4);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
  if (plVar8 == (long *)0x0) {
LAB_07163190:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if ((int)plVar8[3] == 0) goto LAB_07163180;
  plVar8[4] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 4,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 2) goto LAB_07163180;
  plVar8[5] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 5,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 3) goto LAB_07163180;
  plVar8[6] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 6,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 4) goto LAB_07163180;
  plVar8[7] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 7,lVar9);
  if (lVar7 == 0) goto LAB_07163190;
  uVar13 = FUN_05e1bea4(lVar7,*(undefined8 *)puVar4,plVar8,0);
  uVar12 = FUN_05d3a2f4(uVar13,0,0);
  if ((uVar12 & 1) != 0) {
    uVar14 = *(undefined8 *)System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar14 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar14,0);
    plVar8 = (long *)FUN_05e4b334(uVar14,uVar13,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      lVar7 = *(long *)System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo;
      if ((*plVar8 != lVar7) || (*(long **)(param_1 + 0x28) = plVar8, *plVar8 != lVar7))
      goto LAB_07163134;
    }
    thunk_FUN_0329bf60(param_1 + 0x28,plVar8);
  }
  uVar13 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar8 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,3);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar5,0);
  if (plVar8 == (long *)0x0) goto LAB_07163190;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if ((int)plVar8[3] == 0) goto LAB_07163180;
  plVar8[4] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 4,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 2) goto LAB_07163180;
  plVar8[5] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 5,lVar9);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_07163184;
  if (*(uint *)(plVar8 + 3) < 3) goto LAB_07163180;
  plVar8[6] = lVar9;
  thunk_FUN_0329bf60(plVar8 + 6,lVar9);
  if (lVar7 == 0) goto LAB_07163190;
  uVar13 = FUN_05e1bea4(lVar7,*(undefined8 *)
                               System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo
                        ,plVar8,0);
  uVar12 = FUN_05d3a2f4(uVar13,0,0);
  if ((uVar12 & 1) != 0) {
    uVar14 = *(undefined8 *)
              System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar14 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar14,0);
    plVar8 = (long *)FUN_05e4b334(uVar14,uVar13,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar7 = *(long *)
               System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
      ;
      if ((*plVar8 != lVar7) || (*(long **)(param_1 + 0x30) = plVar8, *plVar8 != lVar7))
      goto LAB_07163134;
    }
    thunk_FUN_0329bf60(param_1 + 0x30,plVar8);
  }
  uVar13 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar8 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,4);
  lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar5,0);
  if (plVar8 == (long *)0x0) goto LAB_07163190;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_07163184:
    uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar13,0);
  }
  puVar3 = System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    thunk_FUN_0329bf60(plVar8 + 4,lVar9);
    lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07163184;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      thunk_FUN_0329bf60(plVar8 + 5,lVar9);
      lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_07163184;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        thunk_FUN_0329bf60(plVar8 + 6,lVar9);
        lVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_0322f04c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_07163184;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          thunk_FUN_0329bf60(plVar8 + 7,lVar9);
          if (lVar7 != 0) {
            uVar13 = FUN_05e1bea4(lVar7,*(undefined8 *)
                                         System_Xml_Serialization_XmlSerializationWriter_WriteCallbackInfo_TypeInfo
                                  ,plVar8,0);
            uVar12 = FUN_05d3a2f4(uVar13,0,0);
            if ((uVar12 & 1) == 0) {
              return;
            }
            uVar14 = *(undefined8 *)
                      System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
            ;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar14 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar14,0);
            plVar8 = (long *)FUN_05e4b334(uVar14,uVar13,0);
            if (plVar8 == (long *)0x0) {
              *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else {
              lVar7 = *(long *)
                       System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
              ;
              if ((*plVar8 != lVar7) || (*(long **)(param_1 + 0x38) = plVar8, *plVar8 != lVar7)) {
LAB_07163134:
                    /* WARNING: Subroutine does not return */
                FUN_031f2730(plVar8);
              }
            }
            thunk_FUN_0329bf60(param_1 + 0x38,plVar8);
            return;
          }
          goto LAB_07163190;
        }
      }
    }
  }
LAB_07163180:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


