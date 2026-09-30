/*
FUNCTION_NAME: UnityEngine.UI.Slider$$OnInitializePotentialDrag
ENTRY_POINT: 0625ee0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_8;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_20;strong_file_logging_hits_8;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UI_Slider__OnInitializePotentialDrag(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02d6084c(Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__);
  FUN_02d6084c(System_Func<float,_float,_bool>_TypeInfo);
  FUN_02d6084c(Method_System_String_SplitInternal__);
  FUN_02d6084c(PTR_DAT_0677c890);
  FUN_02d6084c(Method_System_String_Join<HierarchySearchFilter>__);
  FUN_02d6084c(Method_System_String_Equals__);
  FUN_02d6084c(
              Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetSurrogatedType__
              );
  *(undefined1 *)(unaff_x20 + 0x8c6) = 1;
  lVar10 = thunk_FUN_02d9d534(*unaff_x21);
  System_Xml_ArrayHelper<object,_float>___ctor(lVar10,*unaff_x19);
  puVar7 = 
  Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_GetDataContract__;
  puVar6 = Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_InternalDeserialize__;
  puVar5 = Method_System_IO_Stream_set_ReadTimeout__;
  puVar4 = Method_Unity_VisualScripting_StaticInvokerBase__ctor__;
  puVar3 = Method_Unity_VisualScripting_StaticActionInvoker_Invoke__;
  puVar2 = Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__;
  puVar1 = System_Func<float,_float,_bool>_TypeInfo;
  if (lVar10 != 0) {
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>__
                 ,0x20000,*(undefined8 *)
                           Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_GetDataContract__
                );
    FUN_0488b854(lVar10,*(undefined8 *)puVar2,0x20001,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)puVar3,0x20002,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)puVar1,0x40000,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)puVar4,0x70000,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)puVar5,0x70001,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)puVar6,0x40001,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_IO_StreamWriter_WriteAsync__,0x70002,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Create<ValueTuple<byte[],_int,_int>>__,
                 0x70003,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                 ,0x70004,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Join<InputDevice>__,0x70005,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Join<string>__,0x70006,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Compare__,0x70007,*(undefined8 *)puVar7)
    ;
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Equals__,0x70008,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Format__,0x20003,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadUnknownXmlData__
                 ,0x40002,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_JoinCore__,0x70009,*(undefined8 *)puVar7
                );
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_LastIndexOf__,0x20004,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__,
                 0x40003,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_PadLeft__,0x7000a,*(undefined8 *)puVar7)
    ;
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Remove__,0x20005,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Replace__,0x7000b,*(undefined8 *)puVar7)
    ;
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_SplitInternal__,0x7000c,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_StartsWith__,0x7000d,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_Substring__,0x20006,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__,
                 0x40004,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0678afb8,0x20007,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__,0x10000
                 ,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676e5e8,0x30000,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_String_ToUpper__,0x20008,*(undefined8 *)puVar7)
    ;
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676d7a0,0x40005,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Text_StringBuilder_AppendSpanFormattable<byte>__,0x20009,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__,0x2000a,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder__ctor__,0x2000b,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,0x2000c,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,0x2000d,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,0x10001,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0678afb0,0x2000e,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_AppendFormat__,0x2000f,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0675e908,0x20010,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_CopyTo__,0x10002,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>__ctor__,0x40006
                 ,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_FormatError__,0x20011,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Insert__,0x20012,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__,0x20013,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Replace__,0x20014,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,0x20015,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676b588,0x20016,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ToString__,0x20017,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676b598,0x20018,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676dd78,0x7000e,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__,0x7000f,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Nullable<RaycastResult>_get_HasValue__,0x40007,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_set_Chars__,0x20019,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_StringComparer_Compare__,0x2001a,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_StringComparer_GetHashCode__,0x2001b,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Newtonsoft_Json_Converters_StringEnumConverter_ReadJson__,0x2001c,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676eb60,0x2001d,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0675e9b0,0x2001e,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Newtonsoft_Json_Converters_StringEnumConverter_WriteJson__,0x50000,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0677c890,0x50001,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_StringHelpers_CharacterSeparatedListsHaveAtLeastOneCommonElement__
                 ,0x30001,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_StringHelpers_GetPlural__,0x10003,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0677c630,0x2001f,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Globalization_StringInfo_ParseCombiningCharacters__,0x50002,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                 ,0x40008,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,0x60000,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,0x60001,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList_Add__,0x60002,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList_Clear__,0x60003,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                 0x50003,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList_GetRange__,0x30002,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__,
                 0x40009,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList_Insert__,0x10004,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList_LastIndexOf__,0x10005,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringList_RemoveRange__,0x10006,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_IO_StringReader_ReadAsync__,0x10007,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap__ctor__,0x30003,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_Add__,0x10008,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_ContainsKey__,0x30004,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_create_iterator_begin__,
                 0x30005,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_empty__,0x30006,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_getitem__,0x30007,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_size__,0x30008,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Newtonsoft_Json_Utilities_StringUtils_ForgivingCaseSensitiveFind<JsonProperty>__
                 ,0x10009,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__,0x1000a,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__,
                 0x4000a,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)Method_System_IO_StringWriter_Write__,0x1000b,
                 *(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Default<LayoutStyle>__
                 ,0x1000c,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<LayoutStyle>__
                 ,0x30009,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<TextStyle>__
                 ,0x1000d,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<ImageStyle>__
                 ,0x1000e,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)PTR_DAT_0676b5d8,0x20020,*(undefined8 *)puVar7);
    FUN_0488b854(lVar10,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<LayoutStyle>__
                 ,0x1000f,*(undefined8 *)puVar7);
    puVar1 = Method_System_Security_Cryptography_TripleDES_set_Key__;
    **(long **)(*(long *)Method_System_Security_Cryptography_TripleDES_set_Key__ + 0xb8) = lVar10;
    thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar10);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_ResolveType__
                               );
    System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>___ctor
              (lVar10,*(undefined8 *)
                       Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_ResolveSimpleAssemblyName__
              );
    puVar2 = 
    Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_InternalDeserializeInSharedTypeMode__
    ;
    puVar1 = PTR_DAT_067634b0;
    if (lVar10 != 0) {
      FUN_0482ec6c(lVar10,0x20000,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>__
                   ,*(undefined8 *)
                     Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_InternalDeserializeInSharedTypeMode__
                  );
      FUN_0482ec6c(lVar10,0x20001,
                   *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20002,
                   *(undefined8 *)Method_Unity_VisualScripting_StaticActionInvoker_Invoke__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40000,*(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70000,
                   *(undefined8 *)Method_Unity_VisualScripting_StaticInvokerBase__ctor__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70001,*(undefined8 *)Method_System_IO_Stream_set_ReadTimeout__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40001,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_InternalDeserialize__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70002,*(undefined8 *)Method_System_IO_StreamWriter_WriteAsync__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70003,
                   *(undefined8 *)Method_System_String_Create<ValueTuple<byte[],_int,_int>>__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70004,
                   *(undefined8 *)
                    Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70005,*(undefined8 *)Method_System_String_Join<InputDevice>__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70006,*(undefined8 *)Method_System_String_Join<string>__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70007,*(undefined8 *)Method_System_String_Compare__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70008,*(undefined8 *)Method_System_String_Equals__,*(undefined8 *)puVar2
                  );
      FUN_0482ec6c(lVar10,0x20003,*(undefined8 *)Method_System_String_Format__,*(undefined8 *)puVar2
                  );
      FUN_0482ec6c(lVar10,0x40002,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadUnknownXmlData__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x70009,*(undefined8 *)Method_System_String_JoinCore__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20004,*(undefined8 *)Method_System_String_LastIndexOf__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40003,
                   *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x7000a,*(undefined8 *)Method_System_String_PadLeft__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20005,*(undefined8 *)Method_System_String_Remove__,*(undefined8 *)puVar2
                  );
      FUN_0482ec6c(lVar10,0x7000b,*(undefined8 *)Method_System_String_Replace__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x7000c,*(undefined8 *)Method_System_String_SplitInternal__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x7000d,*(undefined8 *)Method_System_String_StartsWith__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20006,*(undefined8 *)Method_System_String_Substring__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40004,
                   *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20007,*(undefined8 *)PTR_DAT_0678afb8,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10000,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30000,*(undefined8 *)PTR_DAT_0676e5e8,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20008,*(undefined8 *)Method_System_String_ToUpper__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40005,*(undefined8 *)PTR_DAT_0676d7a0,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20009,
                   *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<byte>__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2000a,
                   *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2000b,*(undefined8 *)Method_System_Text_StringBuilder__ctor__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2000c,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2000d,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10001,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2000e,*(undefined8 *)PTR_DAT_0678afb0,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2000f,*(undefined8 *)Method_System_Text_StringBuilder_AppendFormat__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20010,*(undefined8 *)PTR_DAT_0675e908,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10002,*(undefined8 *)Method_System_Text_StringBuilder_CopyTo__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40006,
                   *(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>__ctor__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20011,*(undefined8 *)Method_System_Text_StringBuilder_FormatError__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20012,*(undefined8 *)Method_System_Text_StringBuilder_Insert__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20013,*(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20014,*(undefined8 *)Method_System_Text_StringBuilder_Replace__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20015,*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20016,*(undefined8 *)PTR_DAT_0676b588,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20017,*(undefined8 *)Method_System_Text_StringBuilder_ToString__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20018,*(undefined8 *)PTR_DAT_0676b598,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x7000e,*(undefined8 *)PTR_DAT_0676dd78,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x7000f,
                   *(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40007,
                   *(undefined8 *)Method_System_Nullable<RaycastResult>_get_HasValue__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20019,*(undefined8 *)Method_System_Text_StringBuilder_set_Chars__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2001a,*(undefined8 *)Method_System_StringComparer_Compare__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2001b,*(undefined8 *)Method_System_StringComparer_GetHashCode__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2001c,
                   *(undefined8 *)Method_Newtonsoft_Json_Converters_StringEnumConverter_ReadJson__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2001d,*(undefined8 *)PTR_DAT_0676eb60,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2001e,*(undefined8 *)PTR_DAT_0675e9b0,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x50000,
                   *(undefined8 *)Method_Newtonsoft_Json_Converters_StringEnumConverter_WriteJson__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x50001,*(undefined8 *)PTR_DAT_0677c890,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30001,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_StringHelpers_CharacterSeparatedListsHaveAtLeastOneCommonElement__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10003,
                   *(undefined8 *)Method_UnityEngine_InputSystem_Utilities_StringHelpers_GetPlural__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x2001f,*(undefined8 *)PTR_DAT_0677c630,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x50002,
                   *(undefined8 *)Method_System_Globalization_StringInfo_ParseCombiningCharacters__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40008,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x60000,*(undefined8 *)Method_Firebase_StringList__ctor__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x60001,*(undefined8 *)Method_Firebase_StringList__ctor__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x60002,*(undefined8 *)Method_Firebase_StringList_Add__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x60003,*(undefined8 *)Method_Firebase_StringList_Clear__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x50003,
                   *(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30002,*(undefined8 *)Method_Firebase_StringList_GetRange__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x40009,
                   *(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10004,*(undefined8 *)Method_Firebase_StringList_Insert__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10005,*(undefined8 *)Method_Firebase_StringList_LastIndexOf__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10006,*(undefined8 *)Method_Firebase_StringList_RemoveRange__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10007,*(undefined8 *)Method_System_IO_StringReader_ReadAsync__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30003,*(undefined8 *)Method_Firebase_StringStringMap__ctor__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10008,*(undefined8 *)Method_Firebase_StringStringMap_Add__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30004,*(undefined8 *)Method_Firebase_StringStringMap_ContainsKey__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30005,
                   *(undefined8 *)Method_Firebase_StringStringMap_create_iterator_begin__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30006,*(undefined8 *)Method_Firebase_StringStringMap_empty__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30007,*(undefined8 *)Method_Firebase_StringStringMap_getitem__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30008,*(undefined8 *)Method_Firebase_StringStringMap_size__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x10009,
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_StringUtils_ForgivingCaseSensitiveFind<JsonProperty>__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x1000a,*(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x4000a,
                   *(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x1000b,*(undefined8 *)Method_System_IO_StringWriter_Write__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x1000c,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Default<LayoutStyle>__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x30009,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<LayoutStyle>__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x1000d,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<TextStyle>__
                   ,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x1000e,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<ImageStyle>__,
                   *(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x20020,*(undefined8 *)PTR_DAT_0676b5d8,*(undefined8 *)puVar2);
      FUN_0482ec6c(lVar10,0x1000f,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<LayoutStyle>__
                   ,*(undefined8 *)puVar2);
      plVar11 = (long *)(*(long *)(*(long *)Method_System_Security_Cryptography_TripleDES_set_Key__
                                  + 0xb8) + 8);
      *plVar11 = lVar10;
      thunk_FUN_02dd37b4(plVar11,lVar10);
      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
      FUN_04894d4c(lVar10,*(undefined8 *)puVar1);
      puVar9 = 
      Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_CheckIfTypeSerializable__
      ;
      puVar8 = Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_bool>>__;
      puVar7 = Method_System_IO_StreamWriter_WriteSpan__;
      puVar6 = Method_System_IO_StreamWriter_WriteAsync__;
      puVar5 = Method_System_IO_Stream_get_WriteTimeout__;
      puVar4 = Method_Unity_VisualScripting_StaticActionInvoker_Invoke__;
      puVar3 = Method_Unity_VisualScripting_StaticActionInvoker_<CreateDelegate>b__7_0__;
      puVar2 = Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__;
      puVar1 = PTR_DAT_06763498;
      if (lVar10 != 0) {
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>__
                     ,*(undefined8 *)Method_Oculus_Platform_StandalonePlatform_InitializeInEditor__,
                     *(undefined8 *)PTR_DAT_06763498);
        FUN_048956f0(lVar10,*(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__
                     ,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Unity_VisualScripting_StaticActionInvoker_Invoke__
                     ,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,
                     *(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Unity_VisualScripting_StaticInvokerBase__ctor__,
                     *(undefined8 *)puVar4,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_Stream_set_ReadTimeout__,
                     *(undefined8 *)puVar5,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_InternalDeserialize__
                     ,*(undefined8 *)puVar9,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StreamWriter_WriteAsync__,
                     *(undefined8 *)puVar6,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_String_Create<ValueTuple<byte[],_int,_int>>__,
                     *(undefined8 *)puVar7,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                     ,*(undefined8 *)puVar8,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Join<InputDevice>__,
                     *(undefined8 *)Method_System_String_Join<HierarchySearchFilter>__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Join<string>__,
                     *(undefined8 *)Method_System_String_Join<KeyCode>__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Compare__,
                     *(undefined8 *)Method_System_String_Compare__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Equals__,
                     *(undefined8 *)Method_System_String_Equals__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Format__,
                     *(undefined8 *)Method_System_String_FillStringChecked__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadUnknownXmlData__
                     ,*(undefined8 *)
                       Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContract__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_JoinCore__,
                     *(undefined8 *)Method_System_String_Join__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_LastIndexOf__,
                     *(undefined8 *)Method_System_String_LastIndexOf__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContract__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_PadLeft__,
                     *(undefined8 *)Method_System_String_LastIndexOfAny__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Remove__,
                     *(undefined8 *)Method_System_String_PadRight__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Replace__,
                     *(undefined8 *)Method_System_String_Remove__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_SplitInternal__,
                     *(undefined8 *)Method_System_String_ReplaceHelper__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_StartsWith__,
                     *(undefined8 *)Method_System_String_SplitInternal__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Substring__,
                     *(undefined8 *)Method_System_String_StartsWith__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_WriteIXmlSerializable__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0678afb8,*(undefined8 *)PTR_DAT_0678afb8,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676e5e8,*(undefined8 *)PTR_DAT_0676e5e8,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_ToUpper__,
                     *(undefined8 *)Method_System_String_ToUpper__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676d7a0,*(undefined8 *)PTR_DAT_0676d7a0,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Text_StringBuilder_AppendSpanFormattable<byte>__,
                     *(undefined8 *)Method_System_String_wcslen__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__,
                     *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<int>__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder__ctor__,
                     *(undefined8 *)Method_System_Text_StringBuilder__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                     *(undefined8 *)Method_System_Text_StringBuilder__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                     *(undefined8 *)Method_System_Text_StringBuilder_Append__,*(undefined8 *)puVar1)
        ;
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                     *(undefined8 *)Method_System_Nullable<RenderMode>_GetValueOrDefault__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0678afb0,*(undefined8 *)PTR_DAT_0678afb0,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_AppendFormat__,
                     *(undefined8 *)Method_System_Text_StringBuilder_AppendCore__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0675e908,*(undefined8 *)PTR_DAT_0675e908,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_CopyTo__,
                     *(undefined8 *)Method_System_Text_StringBuilder_AppendFormatHelper__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>__ctor__,
                     *(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>__ctor__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_FormatError__,
                     *(undefined8 *)Method_System_Text_StringBuilder_ExpandByABlock__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Insert__,
                     *(undefined8 *)Method_System_Text_StringBuilder_Insert__,*(undefined8 *)puVar1)
        ;
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__,
                     *(undefined8 *)Method_System_Text_StringBuilder_Insert__,*(undefined8 *)puVar1)
        ;
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Replace__,
                     *(undefined8 *)Method_System_Text_StringBuilder_Remove__,*(undefined8 *)puVar1)
        ;
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,
                     *(undefined8 *)
                      Method_System_Text_StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676b588,
                     *(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ToString__,
                     *(undefined8 *)Method_System_Text_StringBuilder_ToString__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676b598,
                     *(undefined8 *)Method_System_Text_StringBuilder_get_Chars__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676dd78,*(undefined8 *)PTR_DAT_0676dd78,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__,
                     *(undefined8 *)
                      Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Nullable<RaycastResult>_get_HasValue__,
                     *(undefined8 *)Method_System_Nullable<RaycastResult>_get_HasValue__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_set_Chars__,
                     *(undefined8 *)Method_System_Text_StringBuilder_set_Capacity__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_StringComparer_Compare__,
                     *(undefined8 *)Method_System_Text_StringBuilder_set_Length__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_StringComparer_GetHashCode__,
                     *(undefined8 *)Method_System_StringComparer_Create__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Newtonsoft_Json_Converters_StringEnumConverter_ReadJson__,
                     *(undefined8 *)Method_System_Collections_Specialized_StringDictionary_Add__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676eb60,*(undefined8 *)PTR_DAT_0676eb60,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0675e9b0,*(undefined8 *)PTR_DAT_0675e9b0,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Newtonsoft_Json_Converters_StringEnumConverter_WriteJson__,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Converters_StringEnumConverter_WriteJson__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0677c890,*(undefined8 *)PTR_DAT_0677c890,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_StringHelpers_CharacterSeparatedListsHaveAtLeastOneCommonElement__
                     ,*(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_StringHelpers_GetPlural__,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_StringHelpers_ExpandTemplateString__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0677c630,*(undefined8 *)PTR_DAT_0677c630,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Globalization_StringInfo_ParseCombiningCharacters__,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_StringHelpers_WriteStringToBuffer__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                     ,*(undefined8 *)
                       Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,
                     *(undefined8 *)Method_Firebase_StringList__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,
                     *(undefined8 *)Method_Firebase_StringList__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_Add__,
                     *(undefined8 *)Method_Firebase_StringList__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_Clear__,
                     *(undefined8 *)Method_Firebase_StringList_AddRange__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                     *(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_GetRange__,
                     *(undefined8 *)Method_Firebase_StringList_CopyTo__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContractSkipValidation__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_Insert__,
                     *(undefined8 *)Method_Firebase_StringList_IndexOf__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_LastIndexOf__,
                     *(undefined8 *)Method_Firebase_StringList_InsertRange__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_RemoveRange__,
                     *(undefined8 *)Method_Firebase_StringList_RemoveAt__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StringReader_ReadAsync__,
                     *(undefined8 *)Method_System_IO_StringReader_Read__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap__ctor__,
                     *(undefined8 *)Method_System_Data_Common_StringStorage_Aggregate__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_Add__,
                     *(undefined8 *)Method_Firebase_StringStringMap__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_ContainsKey__,
                     *(undefined8 *)Method_Firebase_StringStringMap_Clear__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_create_iterator_begin__,
                     *(undefined8 *)Method_Firebase_StringStringMap_Remove__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_empty__,
                     *(undefined8 *)Method_Firebase_StringStringMap_destroy_iterator__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_getitem__,
                     *(undefined8 *)Method_Firebase_StringStringMap_get_next_key__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_size__,
                     *(undefined8 *)Method_Firebase_StringStringMap_setitem__,*(undefined8 *)puVar1)
        ;
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Newtonsoft_Json_Utilities_StringUtils_ForgivingCaseSensitiveFind<JsonProperty>__
                     ,*(undefined8 *)Method_Firebase_StringStringMap_swigRelease__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__,
                     *(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_IsWhiteSpace__,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetSurrogatedType__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StringWriter_Write__,
                     *(undefined8 *)Method_System_IO_StringWriter__ctor__,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Default<LayoutStyle>__
                     ,*(undefined8 *)
                       Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Default<ImageStyle>__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<LayoutStyle>__
                     ,*(undefined8 *)
                       Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<ImageStyle>__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<TextStyle>__
                     ,*(undefined8 *)
                       Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<TextStyle>__
                     ,*(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<ImageStyle>__
                     ,*(undefined8 *)System_Func<long,_short,_object>_TypeInfo,*(undefined8 *)puVar1
                    );
        FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676b5d8,*(undefined8 *)PTR_DAT_0676b5d8,
                     *(undefined8 *)puVar1);
        FUN_048956f0(lVar10,*(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<LayoutStyle>__
                     ,*(undefined8 *)Method_System_Reflection_Emit_PropertyBuilder_IsDefined__,
                     *(undefined8 *)puVar1);
        plVar11 = (long *)(*(long *)(*(long *)
                                      Method_System_Security_Cryptography_TripleDES_set_Key__ + 0xb8
                                    ) + 0x10);
        *plVar11 = lVar10;
        thunk_FUN_02dd37b4(plVar11,lVar10);
        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
        FUN_04894d4c(lVar10,*(undefined8 *)PTR_DAT_067634b0);
        puVar3 = 
        Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_WriteISerializable__;
        puVar2 = 
        Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_ThrowRequiredMemberMustBeEmitted__
        ;
        if (lVar10 != 0) {
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Oculus_Platform_StandalonePlatform_InitializeInEditor__,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__,
                       *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Unity_VisualScripting_StaticActionInvoker_<CreateDelegate>b__7_0__
                       ,*(undefined8 *)Method_Unity_VisualScripting_StaticActionInvoker_Invoke__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,
                       *(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,*(undefined8 *)puVar1
                      );
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Unity_VisualScripting_StaticActionInvoker_Invoke__,
                       *(undefined8 *)Method_Unity_VisualScripting_StaticInvokerBase__ctor__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_Stream_get_WriteTimeout__,
                       *(undefined8 *)Method_System_IO_Stream_set_ReadTimeout__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_CheckIfTypeSerializable__
                       ,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_InternalDeserialize__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StreamWriter_WriteAsync__,
                       *(undefined8 *)Method_System_IO_StreamWriter_WriteAsync__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StreamWriter_WriteSpan__,
                       *(undefined8 *)Method_System_String_Create<ValueTuple<byte[],_int,_int>>__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_bool>>__
                       ,*(undefined8 *)
                         Method_System_String_Create<ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Join<HierarchySearchFilter>__,
                       *(undefined8 *)Method_System_String_Join<InputDevice>__,*(undefined8 *)puVar1
                      );
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Join<KeyCode>__,
                       *(undefined8 *)Method_System_String_Join<string>__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Compare__,
                       *(undefined8 *)Method_System_String_Compare__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Equals__,
                       *(undefined8 *)Method_System_String_Equals__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_FillStringChecked__,
                       *(undefined8 *)Method_System_String_Format__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContract__
                       ,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadUnknownXmlData__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Join__,
                       *(undefined8 *)Method_System_String_JoinCore__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_LastIndexOf__,
                       *(undefined8 *)Method_System_String_LastIndexOf__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContract__
                       ,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ChangeType__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_LastIndexOfAny__,
                       *(undefined8 *)Method_System_String_PadLeft__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_PadRight__,
                       *(undefined8 *)Method_System_String_Remove__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_Remove__,
                       *(undefined8 *)Method_System_String_Replace__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_ReplaceHelper__,
                       *(undefined8 *)Method_System_String_SplitInternal__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_SplitInternal__,
                       *(undefined8 *)Method_System_String_StartsWith__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_StartsWith__,
                       *(undefined8 *)Method_System_String_Substring__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_WriteIXmlSerializable__
                       ,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToInt64__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0678afb8,*(undefined8 *)PTR_DAT_0678afb8,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676e5e8,*(undefined8 *)PTR_DAT_0676e5e8,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_ToUpper__,
                       *(undefined8 *)Method_System_String_ToUpper__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676d7a0,*(undefined8 *)PTR_DAT_0676d7a0,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_String_wcslen__,
                       *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<byte>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Text_StringBuilder_AppendSpanFormattable<int>__,
                       *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder__ctor__,
                       *(undefined8 *)Method_System_Text_StringBuilder__ctor__,*(undefined8 *)puVar1
                      );
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder__ctor__,
                       *(undefined8 *)Method_System_Text_StringBuilder_Append__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Append__,
                       *(undefined8 *)Method_System_Text_StringBuilder_Append__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Nullable<RenderMode>_GetValueOrDefault__,
                       *(undefined8 *)Method_System_Text_StringBuilder_Append__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0678afb0,*(undefined8 *)PTR_DAT_0678afb0,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_AppendCore__,
                       *(undefined8 *)Method_System_Text_StringBuilder_AppendFormat__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0675e908,*(undefined8 *)PTR_DAT_0675e908,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_AppendFormatHelper__,
                       *(undefined8 *)Method_System_Text_StringBuilder_CopyTo__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>__ctor__,
                       *(undefined8 *)Method_System_Nullable<ReferenceLoopHandling>__ctor__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ExpandByABlock__,
                       *(undefined8 *)Method_System_Text_StringBuilder_FormatError__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Insert__,
                       *(undefined8 *)Method_System_Text_StringBuilder_Insert__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Insert__,
                       *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_Remove__,
                       *(undefined8 *)Method_System_Text_StringBuilder_Replace__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Text_StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData__
                       ,*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,
                       *(undefined8 *)PTR_DAT_0676b588,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_ToString__,
                       *(undefined8 *)Method_System_Text_StringBuilder_ToString__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_get_Chars__,
                       *(undefined8 *)PTR_DAT_0676b598,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676dd78,*(undefined8 *)PTR_DAT_0676dd78,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__,
                       *(undefined8 *)
                        Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Nullable<RaycastResult>_get_HasValue__,
                       *(undefined8 *)Method_System_Nullable<RaycastResult>_get_HasValue__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_set_Capacity__,
                       *(undefined8 *)Method_System_Text_StringBuilder_set_Chars__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Text_StringBuilder_set_Length__,
                       *(undefined8 *)Method_System_StringComparer_Compare__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_StringComparer_Create__,
                       *(undefined8 *)Method_System_StringComparer_GetHashCode__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Collections_Specialized_StringDictionary_Add__,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Converters_StringEnumConverter_ReadJson__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676eb60,*(undefined8 *)PTR_DAT_0676eb60,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0675e9b0,*(undefined8 *)PTR_DAT_0675e9b0,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Newtonsoft_Json_Converters_StringEnumConverter_WriteJson__,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Converters_StringEnumConverter_WriteJson__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0677c890,*(undefined8 *)PTR_DAT_0677c890,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                       ,*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_StringHelpers_CharacterSeparatedListsHaveAtLeastOneCommonElement__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_StringHelpers_ExpandTemplateString__
                       ,*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_StringHelpers_GetPlural__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0677c630,*(undefined8 *)PTR_DAT_0677c630,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_StringHelpers_WriteStringToBuffer__
                       ,*(undefined8 *)
                         Method_System_Globalization_StringInfo_ParseCombiningCharacters__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                       ,*(undefined8 *)
                         Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,
                       *(undefined8 *)Method_Firebase_StringList__ctor__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,
                       *(undefined8 *)Method_Firebase_StringList__ctor__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList__ctor__,
                       *(undefined8 *)Method_Firebase_StringList_Add__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_AddRange__,
                       *(undefined8 *)Method_Firebase_StringList_Clear__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo
                       ,*(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_CopyTo__,
                       *(undefined8 *)Method_Firebase_StringList_GetRange__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContractSkipValidation__
                       ,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_IndexOf__,
                       *(undefined8 *)Method_Firebase_StringList_Insert__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_InsertRange__,
                       *(undefined8 *)Method_Firebase_StringList_LastIndexOf__,*(undefined8 *)puVar1
                      );
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringList_RemoveAt__,
                       *(undefined8 *)Method_Firebase_StringList_RemoveRange__,*(undefined8 *)puVar1
                      );
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StringReader_Read__,
                       *(undefined8 *)Method_System_IO_StringReader_ReadAsync__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_Data_Common_StringStorage_Aggregate__,
                       *(undefined8 *)Method_Firebase_StringStringMap__ctor__,*(undefined8 *)puVar1)
          ;
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap__ctor__,
                       *(undefined8 *)Method_Firebase_StringStringMap_Add__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_Clear__,
                       *(undefined8 *)Method_Firebase_StringStringMap_ContainsKey__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_Remove__,
                       *(undefined8 *)Method_Firebase_StringStringMap_create_iterator_begin__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_destroy_iterator__,
                       *(undefined8 *)Method_Firebase_StringStringMap_empty__,*(undefined8 *)puVar1)
          ;
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_get_next_key__,
                       *(undefined8 *)Method_Firebase_StringStringMap_getitem__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_setitem__,
                       *(undefined8 *)Method_Firebase_StringStringMap_size__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_Firebase_StringStringMap_swigRelease__,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Utilities_StringUtils_ForgivingCaseSensitiveFind<JsonProperty>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Newtonsoft_Json_Utilities_StringUtils_IsWhiteSpace__,
                       *(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetSurrogatedType__
                       ,*(undefined8 *)Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)Method_System_IO_StringWriter__ctor__,
                       *(undefined8 *)Method_System_IO_StringWriter_Write__,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Default<ImageStyle>__
                       ,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Default<LayoutStyle>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<ImageStyle>__
                       ,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<LayoutStyle>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<TextStyle>__
                       ,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<TextStyle>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)System_Func<long,_short,_object>_TypeInfo,
                       *(undefined8 *)
                        Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<ImageStyle>__
                       ,*(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)PTR_DAT_0676b5d8,*(undefined8 *)PTR_DAT_0676b5d8,
                       *(undefined8 *)puVar1);
          FUN_048956f0(lVar10,*(undefined8 *)
                               Method_System_Reflection_Emit_PropertyBuilder_IsDefined__,
                       *(undefined8 *)
                        Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<LayoutStyle>__
                       ,*(undefined8 *)puVar1);
          plVar11 = (long *)(*(long *)(*(long *)
                                        Method_System_Security_Cryptography_TripleDES_set_Key__ +
                                      0xb8) + 0x18);
          *plVar11 = lVar10;
          thunk_FUN_02dd37b4(plVar11,lVar10);
          lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
          FUN_0371ffe0(lVar10,*(undefined8 *)puVar2);
          puVar1 = 
          Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_SerializeAndVerifyType__
          ;
          if (lVar10 != 0) {
            FUN_037211cc(lVar10,0x20000,
                         *(undefined8 *)
                          Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_SerializeAndVerifyType__
                        );
            FUN_037211cc(lVar10,0x20001,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20002,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40000,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70000,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70001,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40001,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70002,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70003,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70004,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70005,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70006,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70007,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70008,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20003,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40002,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x70009,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20004,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40003,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x7000a,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20005,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x7000b,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x7000c,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x7000d,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20006,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40004,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20007,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10000,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20008,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40005,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20009,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2000a,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2000b,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2000c,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2000d,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10001,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2000e,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2000f,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20010,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10002,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40006,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20011,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20012,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20013,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20014,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20015,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20016,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20017,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20018,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x7000e,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x7000f,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40007,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20019,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2001a,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2001b,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2001c,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2001d,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2001e,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x50000,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x50001,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30001,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10003,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x2001f,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x50002,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x50003,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30002,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x40009,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10005,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10006,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10007,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30003,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10008,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30004,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30005,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30006,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30007,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30008,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x10009,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x4000a,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x1000b,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x1000c,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x30009,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x1000d,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x1000e,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x20020,*(undefined8 *)puVar1);
            FUN_037211cc(lVar10,0x1000f,*(undefined8 *)puVar1);
            plVar11 = (long *)(*(long *)(*(long *)
                                          Method_System_Security_Cryptography_TripleDES_set_Key__ +
                                        0xb8) + 0x20);
            *plVar11 = lVar10;
            thunk_FUN_02dd37b4(plVar11,lVar10);
            lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                         Method_System_Runtime_Serialization_XmlObjectSerializerWriteContext_OnHandleReference__
                                       );
            FUN_0482af68(lVar10,*(undefined8 *)
                                 Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_InternalDeserializeWithSurrogate__
                        );
            puVar1 = 
            Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_GetSurrogatedType__
            ;
            if (lVar10 != 0) {
              FUN_0482b920(lVar10,0x70000,8,
                           *(undefined8 *)
                            Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_GetSurrogatedType__
                          );
              FUN_0482b920(lVar10,0x70006,8,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x40002,8,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x70009,8,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x7000a,8,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x7000b,8,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x10000,8,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x50000,1,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x50001,1,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x50002,1,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x50003,1,*(undefined8 *)puVar1);
              FUN_0482b920(lVar10,0x30002,8,*(undefined8 *)puVar1);
              plVar11 = (long *)(*(long *)(*(long *)
                                            Method_System_Security_Cryptography_TripleDES_set_Key__
                                          + 0xb8) + 0x28);
              *plVar11 = lVar10;
              thunk_FUN_02dd37b4(plVar11,lVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


