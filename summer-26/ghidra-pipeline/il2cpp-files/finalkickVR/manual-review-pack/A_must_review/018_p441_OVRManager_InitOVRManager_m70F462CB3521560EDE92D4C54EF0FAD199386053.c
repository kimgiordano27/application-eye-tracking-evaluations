/*
FUNCTION_NAME: OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053
ENTRY_POINT: 02d84968
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 256
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_9;strong_file_logging_hits_4;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_9;functionality_data_collection_or_telemetry_hits_14
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053
               (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *param_1,undefined8 param_2)

{
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 OVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *pFVar14;
  byte bVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  __0 *extraout_x1;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined4 local_5f0;
  byte local_5e9;
  byte local_5e8;
  byte local_5e7;
  byte local_5e6;
  byte local_5e5;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  void *local_5d8;
  byte local_5c9;
  void *local_5c8;
  byte local_5b9;
  void *local_5b8;
  undefined4 local_5ac;
  void *local_5a8;
  void *local_5a0;
  undefined8 local_598;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_590;
  byte local_581;
  undefined8 local_580;
  byte local_571;
  void *local_570;
  byte local_561;
  Il2CppObject *local_560;
  undefined8 local_558;
  Il2CppObject *local_550;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *local_548;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *local_540;
  Il2CppObject *local_538;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *local_530;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *local_528;
  Il2CppObject *local_520;
  void *local_518;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *local_510;
  Il2CppObject *local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  void *local_4f8;
  Il2CppArray *local_4f0;
  Il2CppArray *local_4e8;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined4 local_49c;
  undefined1 local_498 [63];
  byte local_459;
  int local_458;
  int local_454;
  int local_450;
  int local_44c;
  int local_448;
  int local_444;
  undefined8 local_440;
  byte local_431;
  Il2CppObject *local_430;
  undefined8 local_428;
  undefined8 local_420;
  Il2CppArray *local_418;
  Il2CppObject *local_410;
  undefined8 local_408;
  undefined8 local_400;
  Il2CppArray *local_3f8;
  Il2CppArray *local_3f0;
  int local_3e4;
  Il2CppObject *local_3e0;
  Il2CppFakeBox<int> aIStack_3d8 [28];
  int local_3bc;
  Il2CppArray *local_3b8;
  Il2CppObject *local_3b0;
  Il2CppFakeBox<int> aIStack_3a8 [28];
  int local_38c;
  Il2CppArray *local_388;
  Il2CppArray *local_380;
  undefined8 local_378;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_370;
  String_t *local_368;
  Il2CppObject *local_360;
  Il2CppObject *local_358;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_350;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_348;
  String_t *local_340;
  Il2CppObject *local_338;
  Il2CppObject *local_330;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_328;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_320;
  String_t *local_318;
  Il2CppObject *local_310;
  Il2CppObject *local_308;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_300;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_2f8;
  String_t *local_2f0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_2e8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_2e0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_2d8;
  OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1 *local_2d0;
  undefined1 local_2c8 [63];
  byte local_289;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 *local_208;
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
  aFStack_200 [16];
  undefined8 local_1f0;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *local_1e8;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *local_1e0;
  int local_1d4;
  undefined8 local_1d0;
  Il2CppObject *local_1c8;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *local_1c0;
  undefined8 local_1b8;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *local_1b0;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *local_1a8;
  int local_19c;
  undefined8 local_198;
  Il2CppObject *local_190;
  Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *local_188;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_180;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_178;
  int local_16c;
  String_t *local_168;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_160;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_140;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_138;
  int local_12c;
  Il2CppObject *local_128;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_120;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_118;
  int local_10c;
  String_t *local_108;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_100;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_e0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_d8;
  int local_cc;
  Il2CppObject *local_c8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_c0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_b8;
  int local_ac;
  String_t *local_a8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_a0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_80;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_78;
  int local_6c;
  Il2CppObject *local_68;
  void *local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *local_28;
  
  puVar13 = Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_get_Item__;
  puVar12 = Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_RemoveAt__;
  puVar11 = Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_Insert__;
  puVar10 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_5__;
  puVar9 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar8 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar7 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TryGetValue__;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_Add__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar11);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Serialization_XmlReflectionImporter_<>c_<ImportClassMapping>b__28_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_CopyTo__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Entry__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar12);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar9);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Key__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar10);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_FixupMembers__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_ReadObject__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteEnum__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteObject__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Xml_XmlSqlBinaryReader_QName_CheckPrefixNS__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_Compare__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar13);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Xml_XmlUrlResolver_<GetEntityAsync>d__15_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_XmlWellFormedWriter_NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope__
              );
    OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::s_Il2CppMethodInitialized =
         1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_60 = (void *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_6c = 0;
  local_78 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_80 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_88 = 0;
  local_8c = 0;
  local_98 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_a0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_a8 = (String_t *)0x0;
  local_ac = 0;
  local_b8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_c0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_c8 = (Il2CppObject *)0x0;
  local_cc = 0;
  local_d8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_e0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_100 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_108 = (String_t *)0x0;
  local_10c = 0;
  local_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_120 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_128 = (Il2CppObject *)0x0;
  local_12c = 0;
  local_138 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_140 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_148 = 0;
  local_14c = 0;
  local_158 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_160 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_168 = (String_t *)0x0;
  local_16c = 0;
  local_178 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_180 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_188 = (Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)0x0;
  local_190 = (Il2CppObject *)0x0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)0x0;
  local_1b0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)0x0;
  local_1b8 = 0;
  local_1c0 = (Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)0x0;
  local_1c8 = (Il2CppObject *)0x0;
  local_1d0 = 0;
  local_1d4 = 0;
  local_1e0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)0x0;
  local_1e8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)0x0;
  local_1f0 = 0;
  OVRTelemetryMarker__ctor_m3F9D39EA2E9D1958E052DE3CB6856E4BCE6BF454
            (&local_48,0x9b83dd9,0,0xffffffffffffffff,0);
  local_208 = &local_48;
  il2cpp::utils::Finally<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0>
            ((utils *)&local_208,extraout_x1);
  uStack_218 = uStack_40;
  local_220 = local_48;
  local_210 = local_38;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
            );
  uStack_278 = uStack_218;
  local_280 = local_220;
  local_270 = local_210;
  OVRTelemetry_AddSDKVersionAnnotation_m23002870270198A4E6D69F42AD048B1FAC6B94D1
            (&local_268,&local_280,0);
  uStack_248 = uStack_260;
  local_250 = local_268;
  local_240 = local_258;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
  local_288 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                        ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  bVar15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_288,0);
  local_289 = bVar15 & 1;
  if ((bVar15 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
    OVRManager_set_instance_m268BE0B7206FEB81BA8B8EB5221AB2BA10E91E0E_inline
              (local_28,(MethodInfo *)0x0);
    local_2d0 = (OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1 *)
                OVRRuntimeSettings_GetRuntimeSettings_m357C35DCF6941F52EDB4FD95F9FEBC78DDFE62AB(0);
    OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline
              (local_2d0,(MethodInfo *)0x0);
    local_2e0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
                SZArrayNew(*(Il2CppClass **)
                            Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                           ,9);
    local_2d8 = local_2e0;
    NullCheck(local_2e0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_2e0,0,
               *(String_t **)
                Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
              );
    local_2e8 = local_2e0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
    local_2f0 = (String_t *)
                Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(0);
    NullCheck(local_2e8);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_2e8,1,local_2f0);
    local_2f8 = local_2e8;
    NullCheck(local_2e8);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_2f8,2,
               *(String_t **)Method_System_Xml_XmlUrlResolver_<GetEntityAsync>d__15_MoveNext__);
    local_300 = local_2f8;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
    puVar17 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar9);
    local_310 = (Il2CppObject *)*puVar17;
    local_308 = local_310;
    if (local_310 == (Il2CppObject *)0x0) {
      local_8c = 3;
      local_98 = local_300;
      local_a0 = local_300;
      local_a8 = (String_t *)0x0;
      local_ac = 3;
      local_b8 = local_300;
      local_c0 = local_300;
      local_88 = 0;
    }
    else {
      local_6c = 3;
      local_78 = local_300;
      local_80 = local_300;
      local_68 = local_310;
      NullCheck(local_310);
      local_318 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,local_68);
      local_ac = local_6c;
      local_b8 = local_78;
      local_c0 = local_80;
      local_a8 = local_318;
    }
    NullCheck(local_b8);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_b8,(long)local_ac,local_a8);
    local_320 = local_c0;
    NullCheck(local_c0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_320,4,
               *(String_t **)
                Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_FixupMembers__
              );
    local_328 = local_320;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
    local_338 = (Il2CppObject *)OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
    local_330 = local_338;
    if (local_338 == (Il2CppObject *)0x0) {
      local_ec = 5;
      local_f8 = local_328;
      local_100 = local_328;
      local_108 = (String_t *)0x0;
      local_10c = 5;
      local_118 = local_328;
      local_120 = local_328;
      local_e8 = 0;
    }
    else {
      local_cc = 5;
      local_d8 = local_328;
      local_e0 = local_328;
      local_c8 = local_338;
      NullCheck(local_338);
      local_340 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,local_c8);
      local_10c = local_cc;
      local_118 = local_d8;
      local_120 = local_e0;
      local_108 = local_340;
    }
    NullCheck(local_118);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_118,(long)local_10c,local_108);
    local_348 = local_120;
    NullCheck(local_120);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_348,6,
               *(String_t **)
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteEnum__
              );
    local_350 = local_348;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
    local_360 = (Il2CppObject *)
                OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63(0);
    local_358 = local_360;
    if (local_360 == (Il2CppObject *)0x0) {
      local_14c = 7;
      local_158 = local_350;
      local_160 = local_350;
      local_168 = (String_t *)0x0;
      local_16c = 7;
      local_178 = local_350;
      local_180 = local_350;
      local_148 = 0;
    }
    else {
      local_12c = 7;
      local_138 = local_350;
      local_140 = local_350;
      local_128 = local_360;
      NullCheck(local_360);
      local_368 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,local_128);
      local_16c = local_12c;
      local_178 = local_138;
      local_180 = local_140;
      local_168 = local_368;
    }
    NullCheck(local_178);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_178,(long)local_16c,local_168);
    local_370 = local_180;
    NullCheck(local_180);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_370,8,
               *(String_t **)
                Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__);
    local_378 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(local_370,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(local_378,0);
    local_388 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar8,2);
    local_380 = local_388;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
    local_38c = OVRManager_get_systemHeadsetType_mCF5CFA237F93EC8DE90C8F9241846C505C7388B1(0);
    local_54 = local_38c;
    Il2CppFakeBox<int>::Il2CppFakeBox
              (aIStack_3a8,
               *(Il2CppClass **)
                Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Key__,
               &local_54);
    local_3b0 = (Il2CppObject *)
                Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_3a8,0);
    NullCheck(local_388);
    ArrayElementTypeCheck(local_388,local_3b0);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_388,0,local_3b0);
    local_3b8 = local_388;
    local_3bc = OVRManager_get_xrApi_m727D2444A42B1D7E2D1EF3C3ECC493FDDA647712(local_28,0);
    local_58 = local_3bc;
    Il2CppFakeBox<int>::Il2CppFakeBox
              (aIStack_3d8,
               *(Il2CppClass **)
                Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__,&local_58)
    ;
    local_3e0 = (Il2CppObject *)
                Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_3d8,0);
    NullCheck(local_3b8);
    ArrayElementTypeCheck(local_3b8,local_3e0);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_3b8,1,local_3e0);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_QName_CheckPrefixNS__,local_3b8,0
              );
    local_3e4 = OVRManager_get_xrApi_m727D2444A42B1D7E2D1EF3C3ECC493FDDA647712(local_28,0);
    if (local_3e4 == 3) {
      local_3f8 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar8,2);
      local_3f0 = local_3f8;
      local_408 = OVRManager_get_xrInstance_m337F7A5B861DC2EA9D7FCB585ED53B1BE4D21547(local_28,0);
      local_400 = local_408;
      local_410 = (Il2CppObject *)Box(*(Il2CppClass **)puVar6,&local_408);
      NullCheck(local_3f8);
      ArrayElementTypeCheck(local_3f8,local_410);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_3f8,0,local_410);
      local_418 = local_3f8;
      local_428 = OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679(local_28,0);
      local_420 = local_428;
      local_430 = (Il2CppObject *)Box(*(Il2CppClass **)puVar6,&local_428);
      NullCheck(local_418);
      ArrayElementTypeCheck(local_418,local_430);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_418,1,local_430);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)
                  Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_ReadObject__
                 ,local_418,0);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
    bVar15 = OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0(0);
    local_431 = bVar15 & 1;
    if ((bVar15 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
      lVar18 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
      local_440 = *(undefined8 *)(lVar18 + 0x178);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(local_440,0);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
    local_448 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    local_444 = local_448;
    local_4c = local_448;
    if ((((local_448 == 0xb) || (local_44c = local_448, local_448 == 0)) ||
        (local_450 = local_448, local_448 == 1)) ||
       ((local_454 = local_448, local_448 == 7 || (local_458 = local_448, local_448 == 2)))) {
      OVRManager_set_isSupportedPlatform_mE8A33FC72544A424CC63ACAF84F71CEC1EC9CE6F_inline
                (local_28,true,(MethodInfo *)0x0);
    }
    else {
      OVRManager_set_isSupportedPlatform_mE8A33FC72544A424CC63ACAF84F71CEC1EC9CE6F_inline
                (local_28,false,(MethodInfo *)0x0);
    }
    bVar15 = OVRManager_get_isSupportedPlatform_m6AE0B37666BB1660CCFC7F9EAD30E550C5D7FBFA_inline
                       (local_28,(MethodInfo *)0x0);
    local_459 = bVar15 & 1;
    if ((bVar15 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteObject__
                 ,0);
      OVRTelemetryMarker_SetResult_mC26EF54EA58688FAD90DCC02BDF51171CC14A5E3
                (local_498,&local_48,3,0);
    }
    else {
      OVRManager_set_chromatic_mC1109A775529EF48476D51176DEC780678AAE0EF(local_28,0,0);
      local_28[0x69] = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4)0x0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
      OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533
                (local_28,0);
      OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821(local_28,0);
      OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5(local_28,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar12);
      lVar18 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar12);
      local_4dc = *(undefined4 *)(lVar18 + 4);
      local_49c = local_4dc;
      OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
                (&local_4d8,&local_48,local_4dc,0);
      uStack_4b8 = uStack_4d0;
      local_4c0 = local_4d8;
      local_4b0 = local_4c8;
      local_4f0 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar8,2);
      local_4e8 = local_4f0;
      local_4f8 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                    ((MethodInfo *)0x0);
      NullCheck(local_4f8);
      local_500 = OVRDisplay_get_displayFrequency_mEBAAEE931893607AEA59FEF00916CCEC79C8DF6B
                            (local_4f8,0);
      local_4fc = local_500;
      local_508 = (Il2CppObject *)
                  Box(*(Il2CppClass **)
                       Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                      ,&local_500);
      NullCheck(local_4f0);
      ArrayElementTypeCheck(local_4f0,local_508);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_4f0,0,local_508);
      local_510 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_4f0;
      local_518 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                    ((MethodInfo *)0x0);
      NullCheck(local_518);
      local_520 = (Il2CppObject *)
                  OVRDisplay_get_displayFrequenciesAvailable_mB0AD342C0A7F312A4F7215CA5DC4D8244CF9F9AE
                            (local_518,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar10);
      lVar18 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar10);
      local_530 = *(Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 **)(lVar18 + 8);
      local_528 = local_530;
      if (local_530 == (Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)0x0) {
        local_1c8 = local_520;
        local_1d0 = *(undefined8 *)puVar4;
        local_1d4 = 1;
        local_1e0 = local_510;
        local_1e8 = local_510;
        local_1f0 = *(undefined8 *)puVar13;
        local_1c0 = local_530;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar10);
        puVar17 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar10);
        local_538 = (Il2CppObject *)*puVar17;
        local_540 = (Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)
                    il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_CopyTo__
                              );
        Func_2__ctor_mE82649E276996E9D5EACA7C8F5B15E20B28BE28D
                  (local_540,local_538,
                   *(long *)
                    Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__
                   ,(MethodInfo *)0x0);
        pFVar14 = local_540;
        local_548 = local_540;
        lVar18 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar10);
        *(Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 **)(lVar18 + 8) = pFVar14;
        lVar18 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar10);
        Il2CppCodeGenWriteBarrier((void **)(lVar18 + 8),local_548);
        local_188 = local_548;
        local_190 = local_1c8;
        local_198 = local_1d0;
        local_19c = local_1d4;
        local_1a8 = local_1e0;
        local_1b0 = local_1e8;
        local_1b8 = local_1f0;
      }
      else {
        local_190 = local_520;
        local_198 = *(undefined8 *)puVar4;
        local_19c = 1;
        local_1a8 = local_510;
        local_1b0 = local_510;
        local_1b8 = *(undefined8 *)puVar13;
        local_188 = local_530;
      }
      local_550 = (Il2CppObject *)
                  Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisString_t_m3D07AA7226DDD2E4D23FF4442D7A928D78DA1B17
                            (local_190,local_188,
                             *(MethodInfo **)
                              Method_System_Xml_Serialization_XmlReflectionImporter_<>c_<ImportClassMapping>b__28_0__
                            );
      local_558 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194
                            (local_550,
                             *(MethodInfo **)
                              Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
      local_560 = (Il2CppObject *)
                  String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(local_198,local_558,0);
      NullCheck(local_1a8);
      ArrayElementTypeCheck((Il2CppArray *)local_1a8,local_560);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                (local_1a8,(long)local_19c,local_560);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(local_1b8,local_1b0,0);
      local_561 = (byte)local_28[0x10f] & 1;
      if (local_561 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
        local_570 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                      ((MethodInfo *)0x0);
        NullCheck(local_570);
        OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(local_570,0);
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar15 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(0);
      local_571 = bVar15 & 1;
      if ((bVar15 & 1) != 0) {
        local_580 = Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                              ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)local_28,
                               *(MethodInfo **)puVar11);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        bVar15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_580,0);
        local_581 = bVar15 & 1;
        if ((bVar15 & 1) != 0) {
          local_590 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                      Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_28,0)
          ;
          NullCheck(local_590);
          local_598 = GameObject_AddComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_m9801277350485D9C445EC7E0035EFCF0579BC30E
                                (local_590,
                                 *(MethodInfo **)
                                  Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Entry__
                                );
        }
        local_5a8 = (void *)Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                                      ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                                       local_28,*(MethodInfo **)puVar11);
        local_5ac = *(undefined4 *)(local_28 + 100);
        local_5a0 = local_5a8;
        local_60 = local_5a8;
        NullCheck(local_5a8);
        *(undefined4 *)((long)local_5a8 + 0x28) = local_5ac;
        local_5b8 = local_60;
        NullCheck(local_60);
        bVar15 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(local_5b8,0);
        local_5b9 = bVar15 & 1;
        if ((bVar15 & 1) == 0) {
          local_5c8 = local_60;
          NullCheck(local_60);
          Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(local_5c8,1,0);
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
        local_5c9 = OVRPlugin_SetDeveloperMode_m666BA62AB965FE5E7E2857C29F619EE186CC8155(1,0);
        local_5c9 = local_5c9 & 1;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
      local_5d8 = (void *)OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A_inline
                                    ((MethodInfo *)0x0);
      NullCheck(local_5d8);
      local_5e0 = *(undefined4 *)((long)local_5d8 + 0x18);
      local_5dc = local_5e0;
      local_50 = local_5e0;
      OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F(local_28,local_5e0,0);
      local_5e4 = *(undefined4 *)(local_28 + 0x30);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
      local_5e5 = OVRPlugin_SetEyeBufferSharpenType_mF9C093758526297D065147C475D3FC473E3CECF5
                            (local_5e4,0);
      local_5e5 = local_5e5 & 1;
      local_5e6 = (byte)local_28[0x100] & 1;
      if (local_5e6 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
        bVar15 = OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A
                           (1,0);
        local_5e7 = bVar15 & 1;
        if ((bVar15 & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                    (*(undefined8 *)
                      Method_System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_Compare__
                     ,0);
        }
      }
      local_5e8 = (byte)local_28[0x101] & 1;
      if (local_5e8 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
        local_5e9 = OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E
                              (0);
        local_5e9 = local_5e9 & 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar12);
        puVar19 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar12);
        local_5f0 = *puVar19;
        OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
                  (&local_628,&local_48,local_5f0,0);
        uStack_608 = uStack_620;
        local_610 = local_628;
        local_600 = local_618;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
      uVar16 = OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
      if ((uVar16 & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_System_Xml_XmlWellFormedWriter_NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope__
                   ,0);
        local_28[0x106] = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4)0x0;
      }
      else {
        OVar1 = local_28[0x106];
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar9);
        OVRPlugin_set_localDimming_mB802F316C5988ACA499BA45E7B9D6590570025AB((byte)OVar1 & 1,0);
      }
      if (((byte)local_28[0x38] & 1) != 0) {
        XRSettings_set_eyeTextureResolutionScale_m92F1029D68F387D9B0C2DB35DFAB2FD82C64A30B
                  (*(undefined4 *)(local_28 + 0x40),0);
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
      lVar18 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
      *(undefined1 *)(lVar18 + 0x180) = 1;
    }
  }
  else {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(local_28,0,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(local_28,0);
    OVRTelemetryMarker_SetResult_mC26EF54EA58688FAD90DCC02BDF51171CC14A5E3(local_2c8,&local_48,3,0);
  }
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper(aFStack_200);
  return;
}


