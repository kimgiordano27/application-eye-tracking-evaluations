/*
FUNCTION_NAME: Message_ParseMessageHandle_m8C9DDBCCEA540158645117EE6CCB38F36A526C6A
ENTRY_POINT: 02cdce2c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


long Message_ParseMessageHandle_m8C9DDBCCEA540158645117EE6CCB38F36A526C6A
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint local_740;
  uint local_73c;
  long local_738;
  long local_730;
  uint local_724;
  undefined8 local_720;
  long local_718;
  undefined8 local_710;
  long local_708;
  undefined8 local_700;
  long local_6f8;
  undefined8 local_6f0;
  long local_6e8;
  undefined8 local_6e0;
  long local_6d8;
  undefined8 local_6d0;
  long local_6c8;
  undefined8 local_6c0;
  long local_6b8;
  undefined8 local_6b0;
  long local_6a8;
  undefined8 local_6a0;
  long local_698;
  undefined8 local_690;
  long local_688;
  undefined8 local_680;
  long local_678;
  undefined8 local_670;
  long local_668;
  undefined8 local_660;
  long local_658;
  undefined8 local_650;
  long local_648;
  undefined8 local_640;
  long local_638;
  undefined8 local_630;
  long local_628;
  undefined8 local_620;
  long local_618;
  undefined8 local_610;
  long local_608;
  undefined8 local_600;
  long local_5f8;
  undefined8 local_5f0;
  long local_5e8;
  undefined8 local_5e0;
  long local_5d8;
  undefined8 local_5d0;
  long local_5c8;
  undefined8 local_5c0;
  long local_5b8;
  undefined8 local_5b0;
  long local_5a8;
  undefined8 local_5a0;
  long local_598;
  undefined8 local_590;
  long local_588;
  undefined8 local_580;
  long local_578;
  undefined8 local_570;
  long local_568;
  undefined8 local_560;
  long local_558;
  undefined8 local_550;
  long local_548;
  undefined8 local_540;
  long local_538;
  undefined8 local_530;
  long local_528;
  undefined8 local_520;
  long local_518;
  undefined8 local_510;
  long local_508;
  undefined8 local_500;
  long local_4f8;
  undefined8 local_4f0;
  long local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  undefined8 local_4d0;
  long local_4c8;
  undefined8 local_4c0;
  long local_4b8;
  undefined8 local_4b0;
  long local_4a8;
  undefined8 local_4a0;
  long local_498;
  undefined8 local_490;
  long local_488;
  undefined8 local_480;
  long local_478;
  undefined8 local_470;
  long local_468;
  undefined8 local_460;
  long local_458;
  undefined8 local_450;
  long local_448;
  undefined8 local_440;
  long local_438;
  undefined8 local_430;
  long local_428;
  undefined8 local_420;
  long local_418;
  undefined8 local_410;
  long local_408;
  undefined8 local_400;
  long local_3f8;
  undefined8 local_3f0;
  long local_3e8;
  undefined8 local_3e0;
  long local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  undefined8 local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  long local_3a8;
  undefined8 local_3a0;
  long local_398;
  undefined8 local_390;
  long local_388;
  undefined8 local_380;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2f4;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  long local_50;
  uint local_44;
  long local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  puVar1 = Method_Newtonsoft_Json_Linq_JToken_<Annotations>d__186_MoveNext__;
  local_38 = param_2;
  local_30[0] = param_1;
  if ((Message_ParseMessageHandle_m8C9DDBCCEA540158645117EE6CCB38F36A526C6A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Linq_JToken_<Annotations>d__186_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Linq_JToken_<GetAncestors>d__48_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Linq_JToken_<ReadFromAsync>d__3_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_HandGrab_Visuals_JointCollection_<>c__DisplayClass2_0_<_ctor>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_<Awake>b__32_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_JointVelocityActiveState_<>c_<Awake>b__41_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_<CreateSerializationCallback>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0_<CreateSerializationErrorCallback>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeEnum>b__14_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_Equals__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Schema_JsonSchemaBuilder_<>c__DisplayClass23_0_<MapType>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_<GenerateInternal>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Schema_JsonSchemaWriter_<>c_<WriteType>b__7_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_<set_ReferenceResolver>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBooleanAsync>d__40_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBytesAsync>d__42_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<HandleNullAsync>d__35_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<MatchAndSetAsync>d__21_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ParsePropertyAsync>d__31_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonTextReader_<ParseUnquotedPropertyAsync>d__33_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ReadFinishedAsync>d__36_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonTextReader_<ReadIntoWrappedTypeObjectAsync>d__43_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ReadNumberValueAsync>d__38_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonTextReader_<ReadStringIntoBufferAsync>d__9_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ReadStringValueAsync>d__37_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_<GetCreator>b__22_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c__DisplayClass22_0_<GetCreator>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_2__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonValidatingReader_SchemaScope_GetRequiredProperties__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonWriter_<WriteConstructorDateAsync>d__32_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_JsonWriter_<WriteTokenAsync>d__30_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_JsonWriter_<WriteTokenSyncReadingAsync>d__31_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__);
    Message_ParseMessageHandle_m8C9DDBCCEA540158645117EE6CCB38F36A526C6A::s_Il2CppMethodInitialized
         = 1;
  }
  local_40 = 0;
  local_44 = 0;
  local_50 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032(local_30,0);
  if (local_50 == 0) {
    return 0;
  }
  local_40 = 0;
  local_58 = local_30[0];
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  local_724 = CAPI_ovr_Message_GetType_m423043F7F22673776E081CE00F34D7E17BB1CFF5(local_58,0);
  local_60 = local_724;
  local_5c = local_724;
  local_44 = local_724;
  if (local_724 < 0x3aaf591e) {
    local_64 = local_724;
    if (local_724 < 0x1bd94ab0) {
      local_68 = local_724;
      if (local_724 < 0xeb4040e) {
        local_6c = local_724;
        if (local_724 < 0x5f1e154) {
          local_70 = local_724;
          if (local_724 < 0x3e76232) {
            local_74 = local_724;
            if (local_724 < 0x2d32f61) {
              local_78 = local_724;
              if (local_724 == 0xe38aef) {
                local_660 = local_30[0];
                local_668 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_0__
                                      );
                MessageWithShareMediaResult__ctor_mEBFE031EC66500EE0B2490FC155912768EEA4755
                          (local_668,local_660,0);
                return local_668;
              }
              local_7c = local_724;
              if (local_724 == 0x2d32f60) {
                local_7c = 0x2d32f60;
                local_78 = 0x2d32f60;
                local_74 = 0x2d32f60;
                local_70 = 0x2d32f60;
                local_6c = 0x2d32f60;
                local_68 = 0x2d32f60;
                goto LAB_02cdecf0;
              }
            }
            else {
              if (local_724 == 0x3d3458d) {
                local_80 = 0x3d3458d;
                local_74 = 0x3d3458d;
                local_70 = 0x3d3458d;
                local_6c = 0x3d3458d;
                local_68 = 0x3d3458d;
LAB_02cdeb68:
                local_380 = local_30[0];
                local_388 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
                                      );
                OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer(local_388,local_380,0);
                return local_388;
              }
              local_84 = local_724;
              local_80 = local_724;
              if (local_724 == 0x3e76231) {
                local_84 = 0x3e76231;
                local_80 = 0x3e76231;
                local_74 = 0x3e76231;
                local_70 = 0x3e76231;
                local_6c = 0x3e76231;
                goto LAB_02cdebd8;
              }
            }
          }
          else {
            local_88 = local_724;
            if (local_724 < 0x4e5cf63) {
              if (local_724 == 0x4b34ca3) {
                local_8c = 0x4b34ca3;
                local_88 = 0x4b34ca3;
                local_70 = 0x4b34ca3;
                goto LAB_02cdf5b0;
              }
              local_90 = local_724;
              local_8c = local_724;
              if (local_724 == 0x4e5cf62) {
                local_5f0 = local_30[0];
                local_5f8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ReadNumberValueAsync>d__38_MoveNext__
                                      );
                MessageWithPidList__ctor_m9765F6D0CE56B7811D54B96031573A4FA8C8F092
                          (local_5f8,local_5f0,0);
                return local_5f8;
              }
            }
            else {
              if (local_724 == 0x4f8c0f2) {
                local_94 = 0x4f8c0f2;
                local_88 = 0x4f8c0f2;
                local_70 = 0x4f8c0f2;
LAB_02cdec80:
                local_3d0 = local_30[0];
                local_3d8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Oculus_Interaction_PoseDetection_JointVelocityActiveState_<>c_<Awake>b__41_0__
                                      );
                MessageWithApplicationInviteList__ctor_mFF2B922F7B2FFC5A777B26897EE03D058483B7AD
                          (local_3d8,local_3d0,0);
                return local_3d8;
              }
              local_98 = local_724;
              local_94 = local_724;
              if (local_724 == 0x5f1e153) {
                local_450 = local_30[0];
                local_458 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Schema_JsonSchemaBuilder_<>c__DisplayClass23_0_<MapType>b__0__
                                      );
                MessageWithAvatarEditorResult__ctor_m77337C986137AC90A97A454838ACD988550899F8
                          (local_458,local_450,0);
                return local_458;
              }
            }
          }
        }
        else {
          local_9c = local_724;
          if (local_724 < 0x8260ab2) {
            local_a0 = local_724;
            if (local_724 < 0x73484cb) {
              if (local_724 == 0x6a85abe) {
                local_a4 = 0x6a85abe;
                local_a0 = 0x6a85abe;
                local_9c = 0x6a85abe;
                goto LAB_02cdf5b0;
              }
              local_a8 = local_724;
              local_a4 = local_724;
              if (local_724 == 0x73484ca) {
                local_5a0 = local_30[0];
                local_5a8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ParseUnquotedPropertyAsync>d__33_MoveNext__
                                      );
                MessageWithNetSyncConnection__ctor_mB80EE97D0AD3D32FD288FB8ECD2F0E2152FC51CC
                          (local_5a8,local_5a0,0);
                return local_5a8;
              }
            }
            else {
              if (local_724 == 0x80ad3c7) {
                local_ac = 0x80ad3c7;
                local_a0 = 0x80ad3c7;
                local_9c = 0x80ad3c7;
                local_6c = 0x80ad3c7;
                local_68 = 0x80ad3c7;
                local_64 = 0x80ad3c7;
                goto LAB_02cded98;
              }
              local_b0 = local_724;
              local_ac = local_724;
              if (local_724 == 0x8260ab1) {
                local_b0 = 0x8260ab1;
                local_ac = 0x8260ab1;
                local_a0 = 0x8260ab1;
                local_9c = 0x8260ab1;
                goto LAB_02cdec80;
              }
            }
          }
          else {
            local_b4 = local_724;
            if (local_724 < 0x904b599) {
              if (local_724 == 0x8891a7f) {
                local_b8 = 0x8891a7f;
                local_b4 = 0x8891a7f;
                local_9c = 0x8891a7f;
                local_6c = 0x8891a7f;
                goto LAB_02cdef20;
              }
              local_bc = local_724;
              local_b8 = local_724;
              if (local_724 == 0x904b598) {
                local_520 = local_30[0];
                local_528 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBooleanAsync>d__40_MoveNext__
                                      );
                MessageWithLaunchFriendRequestFlowResult__ctor_mA5A0ADFF3D47527DFE4DE78CF131342CFD274189
                          (local_528,local_520,0);
                return local_528;
              }
            }
            else {
              local_c0 = local_724;
              if (local_724 == 0xdcbd364) {
                local_650 = local_30[0];
                local_658 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_2__
                                      );
                MessageWithSendInvitesResult__ctor_m3DBBFDDED3E0D94E629D6E0D821684FD85E678DC
                          (local_658,local_650,0);
                return local_658;
              }
              local_c4 = local_724;
              if (local_724 == 0xeb4040d) {
                local_c4 = 0xeb4040d;
                local_c0 = 0xeb4040d;
                local_b4 = 0xeb4040d;
                local_9c = 0xeb4040d;
                local_6c = 0xeb4040d;
                local_68 = 0xeb4040d;
                local_64 = 0xeb4040d;
                goto FUN_02cdeee8;
              }
            }
          }
        }
      }
      else {
        local_c8 = local_724;
        if (local_724 < 0x14aa212a) {
          local_cc = local_724;
          if (local_724 < 0x117fc8ff) {
            local_d0 = local_724;
            if (local_724 < 0x11449fc6) {
              local_d4 = local_724;
              if (local_724 == 0xf9ecf9f) {
                local_500 = local_30[0];
                local_508 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                                      );
                MessageWithInvitePanelResultInfo__ctor_m927C9D955E90ED77A77DFAB4AAD92EB119428321
                          (local_508,local_500,0);
                return local_508;
              }
              local_d8 = local_724;
              if (local_724 == 0x11449fc5) {
                local_d8 = 0x11449fc5;
                local_d4 = 0x11449fc5;
                local_d0 = 0x11449fc5;
                local_cc = 0x11449fc5;
                local_c8 = 0x11449fc5;
                local_68 = 0x11449fc5;
                goto LAB_02cdedd0;
              }
            }
            else {
              if (local_724 == 0x1175be60) {
                local_dc = 0x1175be60;
                local_d0 = 0x1175be60;
                local_cc = 0x1175be60;
                local_c8 = 0x1175be60;
                local_68 = 0x1175be60;
                goto LAB_02cdeeb0;
              }
              local_e0 = local_724;
              local_dc = local_724;
              if (local_724 == 0x117fc8fe) {
                local_e0 = 0x117fc8fe;
                local_dc = 0x117fc8fe;
                local_d0 = 0x117fc8fe;
                local_cc = 0x117fc8fe;
                local_c8 = 0x117fc8fe;
                local_68 = 0x117fc8fe;
                local_64 = 0x117fc8fe;
                goto LAB_02cdf230;
              }
            }
          }
          else {
            local_e4 = local_724;
            if (local_724 < 0x14806b86) {
              if (local_724 == 0x121ab45f) {
                local_e8 = 0x121ab45f;
                local_e4 = 0x121ab45f;
                local_cc = 0x121ab45f;
                local_c8 = 0x121ab45f;
                goto LAB_02cdef20;
              }
              local_ec = local_724;
              local_e8 = local_724;
              if (local_724 == 0x14806b85) {
                local_ec = 0x14806b85;
                local_e8 = 0x14806b85;
                local_e4 = 0x14806b85;
                local_cc = 0x14806b85;
                local_c8 = 0x14806b85;
                local_68 = 0x14806b85;
                local_64 = 0x14806b85;
                goto LAB_02cdec48;
              }
            }
            else {
              local_f0 = local_724;
              if (local_724 == 0x14a22a97) {
                local_540 = local_30[0];
                local_548 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<HandleNullAsync>d__35_MoveNext__
                                      );
                MessageWithLaunchUnblockFlowResult__ctor_m5E09CF0C5450D4723D5683C8B45E9490CE2121BC
                          (local_548,local_540,0);
                return local_548;
              }
              local_f4 = local_724;
              if (local_724 == 0x14aa2129) {
                local_f4 = 0x14aa2129;
                local_f0 = 0x14aa2129;
                local_e4 = 0x14aa2129;
                local_cc = 0x14aa2129;
                local_c8 = 0x14aa2129;
LAB_02cdebd8:
                local_3a0 = local_30[0];
                local_3a8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Linq_JToken_<ReadFromAsync>d__3_MoveNext__
                                      );
                MessageWithAchievementUpdate__ctor_mF4C0776A915C7035A9F20B5D090745292CA5FEF5
                          (local_3a8,local_3a0,0);
                return local_3a8;
              }
            }
          }
        }
        else {
          local_f8 = local_724;
          if (local_724 < 0x18378bf0) {
            local_fc = local_724;
            if (local_724 < 0x15770370) {
              if (local_724 == 0x152663b1) {
                local_100 = 0x152663b1;
                local_fc = 0x152663b1;
                local_f8 = 0x152663b1;
                local_c8 = 0x152663b1;
                local_68 = 0x152663b1;
LAB_02cdeba0:
                local_390 = local_30[0];
                local_398 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Linq_JToken_<GetAncestors>d__48_System_Collections_IEnumerator_Reset__
                                      );
                MessageWithAchievementProgressList__ctor_mE547DFCC9EEEBF3BA0F7B2AB2E644A8515CF1C7D
                          (local_398,local_390,0);
                return local_398;
              }
              local_104 = local_724;
              local_100 = local_724;
              if (local_724 == 0x1577036f) {
                local_630 = local_30[0];
                local_638 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_0__
                                      );
                MessageWithRejoinDialogResult__ctor_mF50058C8BC5B7E49B65691E8F32BF40365D2364A
                          (local_638,local_630,0);
                return local_638;
              }
            }
            else {
              if (local_724 == 0x167d4bc2) {
                local_108 = 0x167d4bc2;
                local_fc = 0x167d4bc2;
                goto LAB_02cdef90;
              }
              local_10c = local_724;
              local_108 = local_724;
              if (local_724 == 0x18378bef) {
                local_10c = 0x18378bef;
                local_108 = 0x18378bef;
                local_fc = 0x18378bef;
                local_f8 = 0x18378bef;
                local_c8 = 0x18378bef;
                local_68 = 0x18378bef;
                goto FUN_02cdf1f8;
              }
            }
          }
          else {
            local_110 = local_724;
            if (local_724 < 0x18f0b01c) {
              if (local_724 == 0x186b58b1) {
                local_114 = 0x186b58b1;
                local_110 = 0x186b58b1;
                local_f8 = 0x186b58b1;
                local_c8 = 0x186b58b1;
                local_68 = 0x186b58b1;
                goto LAB_02cdf000;
              }
              local_118 = local_724;
              local_114 = local_724;
              if (local_724 == 0x18f0b01b) {
                local_5c0 = local_30[0];
                local_5c8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ReadFinishedAsync>d__36_MoveNext__
                                      );
                MessageWithOrgScopedID__ctor_m389170D8644D01E443674D7744AEE9AA9370E84E
                          (local_5c8,local_5c0,0);
                return local_5c8;
              }
            }
            else {
              if (local_724 == 0x195c66c6) {
                local_11c = 0x195c66c6;
                local_110 = 0x195c66c6;
LAB_02cdef90:
                local_4b0 = local_30[0];
                local_4b8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Schema_JsonSchemaWriter_<>c_<WriteType>b__7_0__
                                      );
                MessageWithDataStoreUnderPublicUserDataStore__ctor_m3E1784A0D4D106381013617730FCBA33A52A70B2
                          (local_4b8,local_4b0,0);
                return local_4b8;
              }
              if (local_724 == 0x1ad307b4) {
                local_120 = 0x1ad307b4;
                local_11c = 0x1ad307b4;
                local_110 = 0x1ad307b4;
                local_f8 = 0x1ad307b4;
                local_c8 = 0x1ad307b4;
                local_68 = 0x1ad307b4;
                goto LAB_02cdf7d8;
              }
              local_124 = local_724;
              local_120 = local_724;
              local_11c = local_724;
              if (local_724 == 0x1bd94aaf) {
                local_124 = 0x1bd94aaf;
                local_120 = 0x1bd94aaf;
                local_11c = 0x1bd94aaf;
                local_110 = 0x1bd94aaf;
                local_f8 = 0x1bd94aaf;
                local_c8 = 0x1bd94aaf;
                local_68 = 0x1bd94aaf;
                local_64 = 0x1bd94aaf;
                goto FUN_02cdf428;
              }
            }
          }
        }
      }
    }
    else {
      local_128 = local_724;
      if (local_724 < 0x2a7dd256) {
        local_12c = local_724;
        if (local_724 < 0x2247596f) {
          local_130 = local_724;
          if (local_724 < 0x1f90f0d6) {
            local_134 = local_724;
            if (local_724 < 0x1d118ab3) {
              if (local_724 == 0x1c068319) {
                local_138 = 0x1c068319;
                local_134 = 0x1c068319;
                local_130 = 0x1c068319;
                local_12c = 0x1c068319;
                local_128 = 0x1c068319;
                local_64 = 0x1c068319;
LAB_02cdef58:
                local_4a0 = local_30[0];
                local_4a8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__1__
                                      );
                MessageWithDataStoreUnderPrivateUserDataStore__ctor_mBEBA644C5CEFBAD3274D11BEDBD89CFCEC6FE912
                          (local_4a8,local_4a0,0);
                return local_4a8;
              }
              local_13c = local_724;
              local_138 = local_724;
              if (local_724 == 0x1d118ab2) {
                local_5e0 = local_30[0];
                local_5e8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ReadIntoWrappedTypeObjectAsync>d__43_MoveNext__
                                      );
                MessageWithPartyUpdateNotification__ctor_m89F9F2DB564F45A7C219B724C45117D872090F37
                          (local_5e8,local_5e0,0);
                return local_5e8;
              }
            }
            else {
              if (local_724 == 0x1dd5e5fb) {
                local_140 = 0x1dd5e5fb;
                local_134 = 0x1dd5e5fb;
                local_130 = 0x1dd5e5fb;
                local_12c = 0x1dd5e5fb;
                goto LAB_02cdf6fc;
              }
              local_144 = local_724;
              local_140 = local_724;
              if (local_724 == 0x1f90f0d5) {
                local_144 = 0x1f90f0d5;
                local_140 = 0x1f90f0d5;
                local_134 = 0x1f90f0d5;
                local_130 = 0x1f90f0d5;
                local_12c = 0x1f90f0d5;
                local_128 = 0x1f90f0d5;
                goto LAB_02cdecf0;
              }
            }
          }
          else {
            local_148 = local_724;
            if (local_724 < 0x2124806a) {
              if (local_724 == 0x1fbb72d9) {
                local_14c = 0x1fbb72d9;
                local_148 = 0x1fbb72d9;
                local_130 = 0x1fbb72d9;
                goto LAB_02cdf000;
              }
              local_150 = local_724;
              local_14c = local_724;
              if (local_724 == 0x21248069) {
                local_150 = 0x21248069;
                local_14c = 0x21248069;
                local_148 = 0x21248069;
                local_130 = 0x21248069;
                goto LAB_02cdeeb0;
              }
            }
            else {
              local_154 = local_724;
              if (local_724 == 0x21cbe0c0) {
                local_6a0 = local_30[0];
                local_6a8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_2__
                                      );
                MessageWithUserAccountAgeCategory__ctor_mB461F9B47BF490767EF6C7BDCA8D5F25861388F5
                          (local_6a8,local_6a0,0);
                return local_6a8;
              }
              local_158 = local_724;
              if (local_724 == 0x2247596e) {
                local_580 = local_30[0];
                local_588 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4_MoveNext__
                                      );
                MessageWithLivestreamingStatus__ctor_m0D680D173CD10ACCEB24B011F78568F04D6632BB
                          (local_588,local_580,0);
                return local_588;
              }
            }
          }
        }
        else {
          local_15c = local_724;
          if (local_724 < 0x24472f6d) {
            local_160 = local_724;
            if (local_724 < 0x2309f39a) {
              local_164 = local_724;
              if (local_724 == 0x22810483) {
                local_6e0 = local_30[0];
                local_6e8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonWriter_<WriteTokenSyncReadingAsync>d__31_MoveNext__
                                      );
                MessageWithUserProof__ctor_mBD6ADA55A81EE174E872892B88682379129C6883
                          (local_6e8,local_6e0,0);
                return local_6e8;
              }
              local_168 = local_724;
              if (local_724 == 0x2309f399) {
                local_6c0 = local_30[0];
                local_6c8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_SchemaScope_GetRequiredProperties__
                                      );
                MessageWithUserCapabilityList__ctor_m68B5BF01D0327AC3E13FEEA1EC8FA5D9592E26F8
                          (local_6c8,local_6c0,0);
                return local_6c8;
              }
            }
            else {
              if (local_724 == 0x234bc3f1) {
                local_16c = 0x234bc3f1;
                local_160 = 0x234bc3f1;
LAB_02cdf68c:
                local_6b0 = local_30[0];
                local_6b8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonWriter_<WriteTokenAsync>d__30_MoveNext__
                                      );
                MessageWithUserList__ctor_mE78C4D5F31748BC143CAB01558634738FBDB5BF0
                          (local_6b8,local_6b0,0);
                return local_6b8;
              }
              local_170 = local_724;
              local_16c = local_724;
              if (local_724 == 0x24472f6c) {
                local_170 = 0x24472f6c;
                local_16c = 0x24472f6c;
                local_160 = 0x24472f6c;
                local_15c = 0x24472f6c;
                local_12c = 0x24472f6c;
                goto LAB_02cdf5b0;
              }
            }
          }
          else {
            local_174 = local_724;
            if (local_724 < 0x267cf744) {
              if (local_724 == 0x264885ca) {
                local_178 = 0x264885ca;
                goto LAB_02cdf000;
              }
              local_17c = local_724;
              local_178 = local_724;
              if (local_724 == 0x267cf743) {
                local_17c = 0x267cf743;
                local_178 = 0x267cf743;
                local_174 = 0x267cf743;
                goto LAB_02cdf68c;
              }
            }
            else {
              if (local_724 == 0x2955af24) {
                local_180 = 0x2955af24;
                goto LAB_02cdf000;
              }
              if (local_724 == 0x296116e5) {
                local_184 = 0x296116e5;
                local_180 = 0x296116e5;
                local_174 = 0x296116e5;
                local_15c = 0x296116e5;
                goto LAB_02cdeeb0;
              }
              local_188 = local_724;
              local_184 = local_724;
              local_180 = local_724;
              if (local_724 == 0x2a7dd255) {
                local_188 = 0x2a7dd255;
                local_184 = 0x2a7dd255;
                local_180 = 0x2a7dd255;
                local_174 = 0x2a7dd255;
                local_15c = 0x2a7dd255;
                local_12c = 0x2a7dd255;
                local_128 = 0x2a7dd255;
                goto LAB_02cdeb68;
              }
            }
          }
        }
      }
      else {
        local_18c = local_724;
        if (local_724 < 0x3271abdb) {
          local_190 = local_724;
          if (local_724 < 0x2f42e728) {
            local_194 = local_724;
            if (local_724 < 0x2d008993) {
              if (local_724 == 0x2a8f1055) {
                local_198 = 0x2a8f1055;
                goto LAB_02cdf000;
              }
              local_19c = local_724;
              local_198 = local_724;
              if (local_724 == 0x2d008992) {
                local_19c = 0x2d008992;
                local_198 = 0x2d008992;
                local_194 = 0x2d008992;
                local_190 = 0x2d008992;
                local_18c = 0x2d008992;
                local_128 = 0x2d008992;
                goto LAB_02cdedd0;
              }
            }
            else {
              if (local_724 == 0x2e4dd8d6) {
                local_1a0 = 0x2e4dd8d6;
                goto LAB_02cdf000;
              }
              local_1a4 = local_724;
              local_1a0 = local_724;
              if (local_724 == 0x2f42e727) {
                local_1a4 = 0x2f42e727;
                local_1a0 = 0x2f42e727;
                local_194 = 0x2f42e727;
                local_190 = 0x2f42e727;
                local_18c = 0x2f42e727;
                local_128 = 0x2f42e727;
                goto LAB_02cdeba0;
              }
            }
          }
          else {
            local_1a8 = local_724;
            if (local_724 < 0x314c84b9) {
              local_1ac = local_724;
              if (local_724 == 0x2fdd0ccd) {
                local_440 = local_30[0];
                local_448 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2_MoveNext__
                                      );
                MessageWithAssetFileDownloadUpdate__ctor_m1BA031B512670AA3490532626854FB8BADB3B67E
                          (local_448,local_440,0);
                return local_448;
              }
              local_1b0 = local_724;
              if (local_724 == 0x314c84b8) {
                local_1b0 = 0x314c84b8;
                local_1ac = 0x314c84b8;
                local_1a8 = 0x314c84b8;
                goto LAB_02cdf000;
              }
            }
            else {
              if (local_724 == 0x316509dc) {
                local_1b4 = 0x316509dc;
                local_1a8 = 0x316509dc;
                local_190 = 0x316509dc;
                local_18c = 0x316509dc;
                local_128 = 0x316509dc;
                goto LAB_02cdef20;
              }
              local_1b8 = local_724;
              local_1b4 = local_724;
              if (local_724 == 0x3271abda) {
                local_1b8 = 0x3271abda;
                local_1b4 = 0x3271abda;
                local_1a8 = 0x3271abda;
                local_190 = 0x3271abda;
                goto LAB_02cdf5b0;
              }
            }
          }
        }
        else {
          local_1bc = local_724;
          if (local_724 < 0x35f6769c) {
            local_1c0 = local_724;
            if (local_724 < 0x35692f2c) {
              if (local_724 == 0x34364a0a) {
                local_1c4 = 0x34364a0a;
                local_1c0 = 0x34364a0a;
                local_1bc = 0x34364a0a;
                local_18c = 0x34364a0a;
LAB_02cdf6fc:
                local_6d0 = local_30[0];
                local_6d8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonWriter_<WriteConstructorDateAsync>d__32_MoveNext__
                                      );
                MessageWithUserDataStoreUpdateResponse__ctor_m5B0C948C140D76149C4117093B05452505859694
                          (local_6d8,local_6d0,0);
                return local_6d8;
              }
              local_1c8 = local_724;
              local_1c4 = local_724;
              if (local_724 == 0x35692f2b) {
                local_1c8 = 0x35692f2b;
                local_1c4 = 0x35692f2b;
                local_1c0 = 0x35692f2b;
                local_1bc = 0x35692f2b;
                local_18c = 0x35692f2b;
                local_128 = 0x35692f2b;
                goto LAB_02cdf7d8;
              }
            }
            else {
              if (local_724 == 0x35728882) {
                local_1cc = 0x35728882;
                local_1c0 = 0x35728882;
                local_1bc = 0x35728882;
                goto LAB_02cdf000;
              }
              local_1d0 = local_724;
              local_1cc = local_724;
              if (local_724 == 0x35f6769b) {
                local_1d0 = 0x35f6769b;
                local_1cc = 0x35f6769b;
                local_1c0 = 0x35f6769b;
                local_1bc = 0x35f6769b;
                local_18c = 0x35f6769b;
                local_128 = 0x35f6769b;
                local_64 = 0x35f6769b;
                goto LAB_02cdf1c0;
              }
            }
          }
          else {
            local_1d4 = local_724;
            if (local_724 < 0x387e7f37) {
              if (local_724 == 0x37f21084) {
                local_1d8 = 0x37f21084;
LAB_02cdf5b0:
                local_670 = local_30[0];
                local_678 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__
                                      );
                MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50
                          (local_678,local_670,0);
                return local_678;
              }
              local_1dc = local_724;
              local_1d8 = local_724;
              if (local_724 == 0x387e7f36) {
                local_5b0 = local_30[0];
                local_5b8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__
                                      );
                MessageWithNetSyncSessionsChangedNotification__ctor_m793CEDD38A05E5F0E296043AD03D1FAE0FDC3B9F
                          (local_5b8,local_5b0,0);
                return local_5b8;
              }
            }
            else {
              if (local_724 == 0x39607bfc) {
                local_1e0 = 0x39607bfc;
                local_1d4 = 0x39607bfc;
                local_1bc = 0x39607bfc;
                local_18c = 0x39607bfc;
                local_128 = 0x39607bfc;
                goto FUN_02cdf1f8;
              }
              if (local_724 == 0x3a0f8419) {
                local_1e4 = 0x3a0f8419;
                local_1e0 = 0x3a0f8419;
                local_1d4 = 0x3a0f8419;
                local_1bc = 0x3a0f8419;
                local_18c = 0x3a0f8419;
                local_128 = 0x3a0f8419;
                local_64 = 0x3a0f8419;
                goto LAB_02cdf498;
              }
              local_1e8 = local_724;
              local_1e4 = local_724;
              local_1e0 = local_724;
              if (local_724 == 0x3aaf591d) {
                local_1e8 = 0x3aaf591d;
                local_1e4 = 0x3aaf591d;
                local_1e0 = 0x3aaf591d;
                goto LAB_02cdf5b0;
              }
            }
          }
        }
      }
    }
  }
  else {
    local_1ec = local_724;
    if (local_724 < 0x5ae8cd53) {
      local_1f0 = local_724;
      if (local_724 < 0x4afc6f75) {
        local_1f4 = local_724;
        if (local_724 < 0x436f345e) {
          local_1f8 = local_724;
          if (local_724 < 0x41cfda51) {
            local_1fc = local_724;
            if (local_724 < 0x3e20cb58) {
              if (local_724 == 0x3c147509) {
                local_200 = 0x3c147509;
                local_1fc = 0x3c147509;
                local_1f8 = 0x3c147509;
                goto LAB_02cdf000;
              }
              local_204 = local_724;
              local_200 = local_724;
              if (local_724 == 0x3e20cb57) {
                local_204 = 0x3e20cb57;
                local_200 = 0x3e20cb57;
                local_1fc = 0x3e20cb57;
                local_1f8 = 0x3e20cb57;
                local_1f4 = 0x3e20cb57;
                goto LAB_02cdf5b0;
              }
            }
            else {
              local_208 = local_724;
              if (local_724 == 0x3f9b0d0d) {
                local_610 = local_30[0];
                local_618 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c__DisplayClass22_0_<GetCreator>b__0__
                                      );
                MessageWithPurchase__ctor_m037CDF852A598384888B143C531493B40C371548
                          (local_618,local_610,0);
                return local_618;
              }
              local_20c = local_724;
              if (local_724 == 0x41cfda50) {
                local_20c = 0x41cfda50;
                local_208 = 0x41cfda50;
                local_1fc = 0x41cfda50;
                local_1f8 = 0x41cfda50;
                local_1f4 = 0x41cfda50;
                local_1f0 = 0x41cfda50;
LAB_02cdecf0:
                local_3f0 = local_30[0];
                local_3f8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_0__
                                      );
                MessageWithAssetDetails__ctor_m24BFCFE510E189567F67D51916AA6BCD24455779
                          (local_3f8,local_3f0,0);
                return local_3f8;
              }
            }
          }
          else {
            local_210 = local_724;
            if (local_724 < 0x420ac1d0) {
              if (local_724 == 0x41d2828b) {
                local_214 = 0x41d2828b;
                local_210 = 0x41d2828b;
                local_1f8 = 0x41d2828b;
                local_1f4 = 0x41d2828b;
                local_1f0 = 0x41d2828b;
                goto LAB_02cdf6fc;
              }
              local_218 = local_724;
              local_214 = local_724;
              if (local_724 == 0x420ac1cf) {
                local_218 = 0x420ac1cf;
                local_214 = 0x420ac1cf;
                local_210 = 0x420ac1cf;
                local_1f8 = 0x420ac1cf;
                local_1f4 = 0x420ac1cf;
                goto LAB_02cded60;
              }
            }
            else {
              if (local_724 == 0x43264356) {
                local_21c = 0x43264356;
                local_210 = 0x43264356;
                local_1f8 = 0x43264356;
                local_1f4 = 0x43264356;
                local_1f0 = 0x43264356;
FUN_02cdeee8:
                local_480 = local_30[0];
                local_488 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                      );
                MessageWithChallengeList__ctor_m52B35FC654DBB6AA2193AED50814C4F323A4F77D
                          (local_488,local_480,0);
                return local_488;
              }
              local_220 = local_724;
              local_21c = local_724;
              if (local_724 == 0x436f345d) {
                local_220 = 0x436f345d;
                local_21c = 0x436f345d;
                local_210 = 0x436f345d;
                local_1f8 = 0x436f345d;
                local_1f4 = 0x436f345d;
                local_1f0 = 0x436f345d;
                goto LAB_02cdf61c;
              }
            }
          }
        }
        else {
          local_224 = local_724;
          if (local_724 < 0x4737ea1e) {
            local_228 = local_724;
            if (local_724 < 0x44fc006f) {
              if (local_724 == 0x446aecfa) {
                local_22c = 0x446aecfa;
                local_228 = 0x446aecfa;
                local_224 = 0x446aecfa;
                local_1f4 = 0x446aecfa;
LAB_02cded98:
                local_420 = local_30[0];
                local_428 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeEnum>b__14_0__
                                      );
                MessageWithAssetFileDownloadCancelResult__ctor_m39956DF547D0F94367D316B45E9D185D8621E2AD
                          (local_428,local_420,0);
                return local_428;
              }
              local_230 = local_724;
              local_22c = local_724;
              if (local_724 == 0x44fc006e) {
                local_230 = 0x44fc006e;
                local_22c = 0x44fc006e;
                local_228 = 0x44fc006e;
                local_224 = 0x44fc006e;
                local_1f4 = 0x44fc006e;
                local_1f0 = 0x44fc006e;
                goto LAB_02cdec48;
              }
            }
            else {
              local_234 = local_724;
              if (local_724 == 0x453fc9aa) {
                local_680 = local_30[0];
                local_688 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
                MessageWithSystemVoipState__ctor_m0C3EC0CE847837D8BEC905086E0869F60ECFD81B
                          (local_688,local_680,0);
                return local_688;
              }
              local_238 = local_724;
              if (local_724 == 0x4737ea1d) {
                local_4f0 = local_30[0];
                local_4f8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_0__
                                      );
                MessageWithGroupPresenceLeaveIntent__ctor_m8A022A95004362652CFBF0437D322DC8C3F2E033
                          (local_4f8,local_4f0,0);
                return local_4f8;
              }
            }
          }
          else {
            local_23c = local_724;
            if (local_724 < 0x47933761) {
              if (local_724 == 0x47570a95) {
                local_240 = 0x47570a95;
                local_23c = 0x47570a95;
                local_224 = 0x47570a95;
                local_1f4 = 0x47570a95;
                local_1f0 = 0x47570a95;
LAB_02cdf498:
                local_620 = local_30[0];
                local_628 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_<GetCreator>b__22_1__
                                      );
                MessageWithPurchaseList__ctor_mF165BF37BB45CC99A14AE4E8778C65B5136D71F9
                          (local_628,local_620,0);
                return local_628;
              }
              local_244 = local_724;
              local_240 = local_724;
              if (local_724 == 0x47933760) {
                local_5d0 = local_30[0];
                local_5d8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5_MoveNext__
                                      );
                MessageWithPartyUnderCurrentParty__ctor_mC826C6CD125895FEDF1B33F9F9D691445BA62936
                          (local_5d8,local_5d0,0);
                return local_5d8;
              }
            }
            else {
              if (local_724 == 0x48ff55be) {
                local_248 = 0x48ff55be;
                local_23c = 0x48ff55be;
                local_224 = 0x48ff55be;
                goto LAB_02cdf000;
              }
              if (local_724 == 0x4901dac0) {
                local_24c = 0x4901dac0;
                local_248 = 0x4901dac0;
                local_23c = 0x4901dac0;
                local_224 = 0x4901dac0;
                local_1f4 = 0x4901dac0;
                goto FUN_02cdf1f8;
              }
              local_250 = local_724;
              local_24c = local_724;
              local_248 = local_724;
              if (local_724 == 0x4afc6f74) {
                local_400 = local_30[0];
                local_408 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0_<CreateSerializationErrorCallback>b__0__
                                      );
                MessageWithAssetDetailsList__ctor_mC917393B5FA4E0F7CADA6F9B096920F3BED70AB3
                          (local_408,local_400,0);
                return local_408;
              }
            }
          }
        }
      }
      else {
        local_254 = local_724;
        if (local_724 < 0x521adf0e) {
          local_258 = local_724;
          if (local_724 < 0x4e207cda) {
            local_25c = local_724;
            if (local_724 < 0x4c5b268b) {
              local_260 = local_724;
              if (local_724 != 0x4b8efc86) {
                local_264 = local_724;
                if (local_724 != 0x4c5b268a) goto LAB_02cdf810;
                local_264 = 0x4c5b268a;
              }
            }
            else {
              if (local_724 != 0x4db6aff8) {
                local_26c = local_724;
                local_268 = local_724;
                if (local_724 == 0x4e207cd9) {
                  local_26c = 0x4e207cd9;
                  local_268 = 0x4e207cd9;
                  local_25c = 0x4e207cd9;
                  local_258 = 0x4e207cd9;
                  local_254 = 0x4e207cd9;
FUN_02cdf1f8:
                  local_560 = local_30[0];
                  local_568 = il2cpp_codegen_object_new
                                        (*(Il2CppClass **)
                                          Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__
                                        );
                  MessageWithLeaderboardEntryList__ctor_mEC5439E558640325310B923C22A77A92795B016B
                            (local_568,local_560,0);
                  return local_568;
                }
                goto LAB_02cdf810;
              }
              local_268 = 0x4db6aff8;
            }
LAB_02cdf000:
            local_4d0 = local_30[0];
            local_4d8 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
            Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(local_4d8,local_4d0,0);
            return local_4d8;
          }
          local_270 = local_724;
          if (local_724 < 0x51659515) {
            if (local_724 == 0x4f9fde1d) {
              local_274 = 0x4f9fde1d;
              local_270 = 0x4f9fde1d;
              local_258 = 0x4f9fde1d;
              local_254 = 0x4f9fde1d;
              local_1f0 = 0x4f9fde1d;
              local_1ec = 0x4f9fde1d;
              goto LAB_02cdeba0;
            }
            local_278 = local_724;
            local_274 = local_724;
            if (local_724 == 0x51659514) {
              local_278 = 0x51659514;
              local_274 = 0x51659514;
              local_270 = 0x51659514;
              local_258 = 0x51659514;
              local_254 = 0x51659514;
              goto LAB_02cded98;
            }
          }
          else {
            if (local_724 == 0x51f8ce0c) {
              local_27c = 0x51f8ce0c;
              local_270 = 0x51f8ce0c;
              local_258 = 0x51f8ce0c;
              local_254 = 0x51f8ce0c;
              local_1f0 = 0x51f8ce0c;
LAB_02cdf7d8:
              local_710 = local_30[0];
              local_718 = il2cpp_codegen_object_new
                                    (*(Il2CppClass **)
                                      Method_Newtonsoft_Json_JsonTextReader_<ReadStringIntoBufferAsync>d__9_MoveNext__
                                    );
              MessageWithPlatformInitialize__ctor_mFB1CC0B496E0E72A5B306AA5D28034327698862E
                        (local_718,local_710,0);
              return local_718;
            }
            local_280 = local_724;
            local_27c = local_724;
            if (local_724 == 0x521adf0d) {
              local_280 = 0x521adf0d;
              local_27c = 0x521adf0d;
              local_270 = 0x521adf0d;
              goto LAB_02cdf000;
            }
          }
        }
        else {
          local_284 = local_724;
          if (local_724 < 0x57b752b4) {
            local_288 = local_724;
            if (local_724 < 0x5534a925) {
              if (local_724 == 0x54e2d1f8) {
                local_28c = 0x54e2d1f8;
                local_288 = 0x54e2d1f8;
                local_284 = 0x54e2d1f8;
                local_254 = 0x54e2d1f8;
                goto LAB_02cdf5b0;
              }
              local_290 = local_724;
              local_28c = local_724;
              if (local_724 == 0x5534a924) {
                local_3b0 = local_30[0];
                local_3b8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Oculus_Interaction_HandGrab_Visuals_JointCollection_<>c__DisplayClass2_0_<_ctor>b__0__
                                      );
                MessageWithAppDownloadProgressResult__ctor_m4655E9C6CE9443FD1F035711DB0860F4E42F7F36
                          (local_3b8,local_3b0,0);
                return local_3b8;
              }
            }
            else {
              if (local_724 == 0x568e76c0) {
                local_294 = 0x568e76c0;
                local_288 = 0x568e76c0;
                local_284 = 0x568e76c0;
                local_254 = 0x568e76c0;
                local_1f0 = 0x568e76c0;
                goto LAB_02cdeeb0;
              }
              local_298 = local_724;
              local_294 = local_724;
              if (local_724 == 0x57b752b3) {
                local_298 = 0x57b752b3;
                local_294 = 0x57b752b3;
                local_288 = 0x57b752b3;
                local_284 = 0x57b752b3;
                goto LAB_02cdf000;
              }
            }
          }
          else {
            local_29c = local_724;
            if (local_724 < 0x587c2a8e) {
              if (local_724 == 0x586f2d14) {
                local_2a0 = 0x586f2d14;
                local_29c = 0x586f2d14;
                local_284 = 0x586f2d14;
                local_254 = 0x586f2d14;
                local_1f0 = 0x586f2d14;
                goto LAB_02cdefc8;
              }
              local_2a4 = local_724;
              local_2a0 = local_724;
              if (local_724 == 0x587c2a8d) {
                local_2a4 = 0x587c2a8d;
                local_2a0 = 0x587c2a8d;
                local_29c = 0x587c2a8d;
                local_284 = 0x587c2a8d;
                local_254 = 0x587c2a8d;
                local_1f0 = 0x587c2a8d;
                local_1ec = 0x587c2a8d;
                goto LAB_02cdf68c;
              }
            }
            else {
              local_2a8 = local_724;
              if (local_724 == 0x58d254a5) {
                local_6f0 = local_30[0];
                local_6f8 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
                MessageWithSystemVoipState__ctor_m0C3EC0CE847837D8BEC905086E0869F60ECFD81B
                          (local_6f8,local_6f0,0);
                return local_6f8;
              }
              if (local_724 == 0x593ccbdd) {
                local_2ac = 0x593ccbdd;
                local_2a8 = 0x593ccbdd;
                local_29c = 0x593ccbdd;
                local_284 = 0x593ccbdd;
                local_254 = 0x593ccbdd;
                local_1f0 = 0x593ccbdd;
                local_1ec = 0x593ccbdd;
                goto LAB_02cdebd8;
              }
              local_2b0 = local_724;
              local_2ac = local_724;
              if (local_724 == 0x5ae8cd52) {
                local_2b0 = 0x5ae8cd52;
                local_2ac = 0x5ae8cd52;
                local_2a8 = 0x5ae8cd52;
                local_29c = 0x5ae8cd52;
                local_284 = 0x5ae8cd52;
                local_254 = 0x5ae8cd52;
LAB_02cded60:
                local_410 = local_30[0];
                local_418 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_1__
                                      );
                MessageWithAssetFileDeleteResult__ctor_mD1DF1F17A175EFEF235BABD9018D8E8A6A6AE833
                          (local_418,local_410,0);
                return local_418;
              }
            }
          }
        }
      }
    }
    else {
      local_2b4 = local_724;
      if (local_724 < 0x6c8a8229) {
        local_2b8 = local_724;
        if (local_724 < 0x63599e2c) {
          local_2bc = local_724;
          if (local_724 < 0x5d955d39) {
            local_2c0 = local_724;
            if (local_724 < 0x5b7ca1b7) {
              if (local_724 == 0x5b4fbbe0) {
                local_2c4 = 0x5b4fbbe0;
                local_2c0 = 0x5b4fbbe0;
                goto LAB_02cdedd0;
              }
              local_2c8 = local_724;
              local_2c4 = local_724;
              if (local_724 == 0x5b7ca1b6) {
                local_2c8 = 0x5b7ca1b6;
                local_2c4 = 0x5b7ca1b6;
                local_2c0 = 0x5b7ca1b6;
                local_2bc = 0x5b7ca1b6;
                local_2b8 = 0x5b7ca1b6;
                local_2b4 = 0x5b7ca1b6;
                goto FUN_02cdeee8;
              }
            }
            else {
              if (local_724 == 0x5c896f3e) {
                local_2cc = 0x5c896f3e;
                local_2c0 = 0x5c896f3e;
                local_2bc = 0x5c896f3e;
                local_2b8 = 0x5c896f3e;
                local_2b4 = 0x5c896f3e;
                goto LAB_02cdf6fc;
              }
              local_2d0 = local_724;
              local_2cc = local_724;
              if (local_724 == 0x5d955d38) {
                local_2d0 = 0x5d955d38;
                local_2cc = 0x5d955d38;
                local_2c0 = 0x5d955d38;
                local_2bc = 0x5d955d38;
                local_2b8 = 0x5d955d38;
                local_2b4 = 0x5d955d38;
                goto LAB_02cdecf0;
              }
            }
          }
          else {
            local_2d4 = local_724;
            if (local_724 < 0x629101bd) {
              if (local_724 == 0x5db3474c) {
                local_2d8 = 0x5db3474c;
                local_2d4 = 0x5db3474c;
                local_2bc = 0x5db3474c;
                local_2b8 = 0x5db3474c;
                local_2b4 = 0x5db3474c;
                goto FUN_02cdf1f8;
              }
              local_2dc = local_724;
              local_2d8 = local_724;
              if (local_724 == 0x629101bc) {
                local_2dc = 0x629101bc;
                local_2d8 = 0x629101bc;
                local_2d4 = 0x629101bc;
                local_2bc = 0x629101bc;
                local_2b8 = 0x629101bc;
                local_2b4 = 0x629101bc;
                local_1ec = 0x629101bc;
                goto LAB_02cdeb68;
              }
            }
            else {
              if (local_724 == 0x6336cefa) {
                local_2e0 = 0x6336cefa;
                local_2d4 = 0x6336cefa;
LAB_02cdedd0:
                local_430 = local_30[0];
                local_438 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_Equals__
                                      );
                MessageWithAssetFileDownloadResult__ctor_m6182BB02044EFCD0699CCF88FD133CC4284D6D72
                          (local_438,local_430,0);
                return local_438;
              }
              local_2e4 = local_724;
              local_2e0 = local_724;
              if (local_724 == 0x63599e2b) {
                local_2e4 = 0x63599e2b;
                local_2e0 = 0x63599e2b;
                local_2d4 = 0x63599e2b;
                local_2bc = 0x63599e2b;
                local_2b8 = 0x63599e2b;
                local_2b4 = 0x63599e2b;
                goto LAB_02cdf498;
              }
            }
          }
        }
        else {
          local_2e8 = local_724;
          if (local_724 < 0x679a84b7) {
            local_2ec = local_724;
            if (local_724 < 0x67526a84) {
              if (local_724 == 0x67367f45) {
                local_2f0 = 0x67367f45;
                local_2ec = 0x67367f45;
                local_2e8 = 0x67367f45;
                local_2b8 = 0x67367f45;
                local_2b4 = 0x67367f45;
LAB_02cdefc8:
                local_4c0 = local_30[0];
                local_4c8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_0__
                                      );
                MessageWithDestinationList__ctor_m4AB7810BF2DE0E9AC5AE7E026FA7E61D4F2EE572
                          (local_4c8,local_4c0,0);
                return local_4c8;
              }
              local_2f4 = local_724;
              local_2f0 = local_724;
              if (local_724 == 0x67526a83) {
                local_640 = local_30[0];
                local_648 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_1__
                                      );
                MessageWithSdkAccountList__ctor_m7169E710AA1E928B9247F00556367246E98E1C3E
                          (local_648,local_640,0);
                return local_648;
              }
            }
            else {
              if (local_724 == 0x675f5c24) {
                local_2f8 = 0x675f5c24;
                local_2ec = 0x675f5c24;
                local_2e8 = 0x675f5c24;
                local_2b8 = 0x675f5c24;
                goto LAB_02cdf000;
              }
              local_2fc = local_724;
              local_2f8 = local_724;
              if (local_724 == 0x679a84b6) {
                local_530 = local_30[0];
                local_538 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBytesAsync>d__42_MoveNext__
                                      );
                MessageWithLaunchInvitePanelFlowResult__ctor_mA5394950D425A7250212D60F67F1193CB777B704
                          (local_538,local_530,0);
                return local_538;
              }
            }
          }
          else {
            local_300 = local_724;
            if (local_724 < 0x68670a0f) {
              if (local_724 == 0x6859d641) {
                local_304 = 0x6859d641;
                local_300 = 0x6859d641;
                local_2e8 = 0x6859d641;
                local_2b8 = 0x6859d641;
                goto LAB_02cdeeb0;
              }
              local_308 = local_724;
              local_304 = local_724;
              if (local_724 == 0x68670a0e) {
                local_3e0 = local_30[0];
                local_3e8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_<CreateSerializationCallback>b__0__
                                      );
                MessageWithApplicationVersion__ctor_mD0F44F02727F9E5A1C9809315A5985B38C312BC0
                          (local_3e8,local_3e0,0);
                return local_3e8;
              }
            }
            else {
              if (local_724 == 0x6ad44ef8) {
                local_30c = 0x6ad44ef8;
                local_300 = 0x6ad44ef8;
                local_2e8 = 0x6ad44ef8;
                local_2b8 = 0x6ad44ef8;
                local_2b4 = 0x6ad44ef8;
                local_1ec = 0x6ad44ef8;
LAB_02cdf1c0:
                local_550 = local_30[0];
                local_558 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25_MoveNext__
                                      );
                MessageWithLeaderboardList__ctor_mEEBF53FD0EAE33BAD4A63905BC2D2A9505630C03
                          (local_558,local_550,0);
                return local_558;
              }
              if (local_724 == 0x6bcf9e47) {
                local_310 = 0x6bcf9e47;
                local_30c = 0x6bcf9e47;
                local_300 = 0x6bcf9e47;
                local_2e8 = 0x6bcf9e47;
                local_2b8 = 0x6bcf9e47;
                local_2b4 = 0x6bcf9e47;
LAB_02cdf61c:
                local_690 = local_30[0];
                local_698 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
                MessageWithUser__ctor_mB03B2FC17D28C913511406D71F8CE7B57A0C667F
                          (local_698,local_690,0);
                return local_698;
              }
              local_314 = local_724;
              local_310 = local_724;
              local_30c = local_724;
              if (local_724 == 0x6c8a8228) {
                local_314 = 0x6c8a8228;
                local_310 = 0x6c8a8228;
                local_30c = 0x6c8a8228;
                local_300 = 0x6c8a8228;
                local_2e8 = 0x6c8a8228;
                local_2b8 = 0x6c8a8228;
                local_2b4 = 0x6c8a8228;
                local_1ec = 0x6c8a8228;
                goto LAB_02cdef58;
              }
            }
          }
        }
      }
      else {
        local_318 = local_724;
        if (local_724 < 0x744ce346) {
          local_31c = local_724;
          if (local_724 < 0x6ee4f33d) {
            local_320 = local_724;
            if (local_724 < 0x6da7ba90) {
              if (local_724 == 0x6d5d7886) {
                local_324 = 0x6d5d7886;
                local_320 = 0x6d5d7886;
                local_31c = 0x6d5d7886;
                local_318 = 0x6d5d7886;
                local_2b4 = 0x6d5d7886;
                goto LAB_02cded60;
              }
              local_328 = local_724;
              local_324 = local_724;
              if (local_724 == 0x6da7ba8f) {
                local_328 = 0x6da7ba8f;
                local_324 = 0x6da7ba8f;
                local_320 = 0x6da7ba8f;
                local_31c = 0x6da7ba8f;
                local_318 = 0x6da7ba8f;
                local_2b4 = 0x6da7ba8f;
                goto LAB_02cdf7d8;
              }
            }
            else {
              if (local_724 == 0x6daa9cc3) {
                local_32c = 0x6daa9cc3;
                local_320 = 0x6daa9cc3;
                goto LAB_02cdf000;
              }
              local_330 = local_724;
              local_32c = local_724;
              if (local_724 == 0x6ee4f33c) {
                local_330 = 0x6ee4f33c;
                local_32c = 0x6ee4f33c;
                local_320 = 0x6ee4f33c;
                local_31c = 0x6ee4f33c;
                local_318 = 0x6ee4f33c;
                local_2b4 = 0x6ee4f33c;
                goto LAB_02cdf5b0;
              }
            }
          }
          else {
            local_334 = local_724;
            if (local_724 < 0x717259e4) {
              local_338 = local_724;
              if (local_724 == 0x6fd62528) {
                local_510 = local_30[0];
                local_518 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_<set_ReferenceResolver>b__0__
                                      );
                MessageWithLaunchBlockFlowResult__ctor_m865455E6BFFCABDB103AD74C31D5482E8D25800E
                          (local_518,local_510,0);
                return local_518;
              }
              local_33c = local_724;
              if (local_724 == 0x717259e3) {
                local_33c = 0x717259e3;
                local_338 = 0x717259e3;
                local_334 = 0x717259e3;
                goto LAB_02cdf000;
              }
            }
            else {
              if (local_724 == 0x72c692fa) {
                local_340 = 0x72c692fa;
                local_334 = 0x72c692fa;
                local_31c = 0x72c692fa;
                local_318 = 0x72c692fa;
                local_2b4 = 0x72c692fa;
                local_1ec = 0x72c692fa;
LAB_02cdf230:
                local_570 = local_30[0];
                local_578 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<MatchAndSetAsync>d__21_MoveNext__
                                      );
                MessageWithLeaderboardDidUpdate__ctor_m01307625359BA0D58C9CDD2CA49D458403414538
                          (local_578,local_570,0);
                return local_578;
              }
              local_344 = local_724;
              local_340 = local_724;
              if (local_724 == 0x744ce345) {
                local_590 = local_30[0];
                local_598 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_JsonTextReader_<ParsePropertyAsync>d__31_MoveNext__
                                      );
                MessageWithMicrophoneAvailabilityState__ctor_mC5D55418A750416CE218DBEA2B7733A927A27ABB
                          (local_598,local_590,0);
                return local_598;
              }
            }
          }
        }
        else {
          local_348 = local_724;
          if (local_724 < 0x7c2060df) {
            local_34c = local_724;
            if (local_724 < 0x77584ef4) {
              local_350 = local_724;
              if (local_724 == 0x773889f6) {
                local_4e0 = local_30[0];
                local_4e8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_2__
                                      );
                MessageWithGroupPresenceJoinIntent__ctor_m4D876A9C8C4E31D3172E1F5B4074857362ECD777
                          (local_4e8,local_4e0,0);
                return local_4e8;
              }
              local_354 = local_724;
              if (local_724 == 0x77584ef3) {
                local_354 = 0x77584ef3;
                local_350 = 0x77584ef3;
                local_34c = 0x77584ef3;
                local_348 = 0x77584ef3;
                local_318 = 0x77584ef3;
LAB_02cdeeb0:
                local_470 = local_30[0];
                local_478 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
                                      );
                MessageWithChallenge__ctor_mF3DB35873189900D182C82271103685B7332DAC4
                          (local_478,local_470,0);
                return local_478;
              }
            }
            else {
              if (local_724 == 0x78c90470) {
                local_358 = 0x78c90470;
                local_34c = 0x78c90470;
LAB_02cdef20:
                local_490 = local_30[0];
                local_498 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_0__
                                      );
                MessageWithChallengeEntryList__ctor_mC6345CAC3FA8893420D34DC769115768BF4000BD
                          (local_498,local_490,0);
                return local_498;
              }
              local_35c = local_724;
              local_358 = local_724;
              if (local_724 == 0x7c2060de) {
                local_35c = 0x7c2060de;
                local_358 = 0x7c2060de;
                local_34c = 0x7c2060de;
                local_348 = 0x7c2060de;
                local_318 = 0x7c2060de;
                local_2b4 = 0x7c2060de;
LAB_02cdec48:
                local_3c0 = local_30[0];
                local_3c8 = il2cpp_codegen_object_new
                                      (*(Il2CppClass **)
                                        Method_Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_<Awake>b__32_0__
                                      );
                MessageWithAppDownloadResult__ctor_m9E91D2860A2BDE5C9759D8D1EEC3CC90EFBBB4B8
                          (local_3c8,local_3c0,0);
                return local_3c8;
              }
            }
          }
          else {
            local_360 = local_724;
            if (local_724 < 0x7d201557) {
              local_364 = local_724;
              if (local_724 != 0x7c2afdcb) {
                local_368 = local_724;
                if (local_724 != 0x7d201556) goto LAB_02cdf810;
                local_368 = 0x7d201556;
              }
              local_460 = local_30[0];
              local_468 = il2cpp_codegen_object_new
                                    (*(Il2CppClass **)
                                      Method_Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_<GenerateInternal>b__0__
                                    );
              MessageWithBlockedUserList__ctor_m19D5D3671BF8E61EA5F8659FE62D2466085B3E22
                        (local_468,local_460,0);
              return local_468;
            }
            local_36c = local_724;
            if (local_724 == 0x7dd46e2f) {
              local_700 = local_30[0];
              local_708 = il2cpp_codegen_object_new
                                    (*(Il2CppClass **)
                                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_1__
                                    );
              MessageWithHttpTransferUpdate__ctor_m50D0F032B3909EA4B8B9DAC90C778FD6D0F766FF
                        (local_708,local_700,0);
              return local_708;
            }
            if (local_724 == 0x7e9acaf5) {
              local_370 = 0x7e9acaf5;
              local_36c = 0x7e9acaf5;
              local_360 = 0x7e9acaf5;
              local_348 = 0x7e9acaf5;
              local_318 = 0x7e9acaf5;
              local_2b4 = 0x7e9acaf5;
              local_1ec = 0x7e9acaf5;
FUN_02cdf428:
              local_600 = local_30[0];
              local_608 = il2cpp_codegen_object_new
                                    (*(Il2CppClass **)
                                      Method_Newtonsoft_Json_JsonTextReader_<ReadStringValueAsync>d__37_MoveNext__
                                    );
              MessageWithProductList__ctor_mAB84EA1FD34EE164D80E3715D19987E90CF5B0EE
                        (local_608,local_600,0);
              return local_608;
            }
            local_374 = local_724;
            local_370 = local_724;
            if (local_724 == 0x7f4ca0c6) {
              local_374 = 0x7f4ca0c6;
              local_370 = 0x7f4ca0c6;
              local_36c = 0x7f4ca0c6;
              local_360 = 0x7f4ca0c6;
              goto LAB_02cdef20;
            }
          }
        }
      }
    }
  }
LAB_02cdf810:
  local_720 = local_30[0];
  local_738 = PlatformInternal_ParseMessageHandle_m5F7FF1235E90049C795C4B11965FD7383DBFB844
                        (local_30[0],local_724,0);
  local_40 = local_738;
  if (local_738 == 0) {
    local_73c = local_44;
    local_740 = local_44;
    local_730 = local_738;
    uVar2 = Box(*(Il2CppClass **)
                 Method_Newtonsoft_Json_Linq_JToken_<Annotations>d__186_System_Collections_IEnumerator_Reset__
                ,&local_740);
    uVar2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                      (*(undefined8 *)
                        Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__,uVar2)
    ;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar2,0);
  }
  return local_40;
}


