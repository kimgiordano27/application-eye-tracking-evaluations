/*
FUNCTION_NAME: System.Environment$$GetFolderPath
ENTRY_POINT: 02819170
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_1
*/


void System_Environment__GetFolderPath(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  void *pvVar5;
  long lVar6;
  Il2CppObject *pIVar7;
  Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588 *pDVar8;
  Dictionary_2_t4A66E55DEE67263E1D7B09B4693FD0F41C204B21 *pDVar9;
  undefined1 auVar10 [16];
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined4 in_stack_000001fc;
  undefined8 in_stack_00000200;
  undefined4 in_stack_0000020c;
  undefined8 in_stack_00000210;
  undefined4 in_stack_0000021c;
  undefined8 in_stack_00000220;
  undefined4 in_stack_0000022c;
  undefined8 in_stack_00000230;
  undefined4 in_stack_0000023c;
  undefined8 in_stack_00000240;
  undefined4 in_stack_0000024c;
  undefined8 in_stack_00000250;
  undefined4 in_stack_0000025c;
  undefined8 in_stack_00000260;
  undefined4 in_stack_0000026c;
  undefined8 in_stack_00000270;
  undefined4 in_stack_0000027c;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000328;
  undefined4 in_stack_00000334;
  undefined8 in_stack_00000338;
  undefined4 in_stack_00000344;
  undefined8 in_stack_00000348;
  undefined4 in_stack_00000354;
  undefined8 in_stack_00000358;
  undefined4 in_stack_00000364;
  undefined8 in_stack_00000368;
  undefined4 in_stack_00000374;
  undefined8 in_stack_00000378;
  undefined4 in_stack_00000384;
  undefined8 in_stack_00000388;
  undefined4 in_stack_00000394;
  undefined8 in_stack_00000398;
  undefined4 in_stack_000003a4;
  undefined8 in_stack_000003a8;
  undefined4 in_stack_000003b4;
  undefined8 in_stack_000003b8;
  undefined4 in_stack_000003c4;
  undefined8 in_stack_000003c8;
  undefined4 in_stack_000003d4;
  undefined8 in_stack_000003d8;
  undefined4 in_stack_000003e4;
  undefined8 in_stack_000003e8;
  undefined4 in_stack_000003f4;
  undefined8 in_stack_000003f8;
  undefined4 in_stack_00000404;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000418;
  undefined4 in_stack_00000424;
  undefined8 in_stack_00000428;
  undefined4 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined4 in_stack_00000444;
  undefined8 in_stack_00000448;
  undefined4 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined4 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined4 in_stack_00000470;
  undefined4 in_stack_00000474;
  undefined8 in_stack_00000478;
  undefined4 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined4 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined4 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined4 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined4 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined4 in_stack_000004d4;
  undefined8 in_stack_000004d8;
  undefined4 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined4 in_stack_000004f8;
  undefined4 in_stack_000004fc;
  undefined8 in_stack_00000500;
  undefined4 in_stack_00000508;
  undefined4 in_stack_0000050c;
  undefined8 in_stack_00000510;
  undefined4 in_stack_00000518;
  undefined4 in_stack_0000051c;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000590;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005c0;
  undefined4 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined4 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f8;
  MethodInfo *in_stack_00000610;
  undefined8 *in_stack_00000628;
  undefined8 *in_stack_00000630;
  undefined8 *in_stack_00000638;
  undefined8 *in_stack_00000640;
  undefined8 *in_stack_00000648;
  undefined8 *in_stack_00000650;
  undefined8 *in_stack_00000658;
  undefined8 *in_stack_00000660;
  undefined8 *in_stack_00000668;
  undefined8 *in_stack_00000670;
  undefined8 *in_stack_00000678;
  undefined8 *in_stack_00000680;
  undefined8 *in_stack_00000688;
  undefined8 *in_stack_00000690;
  undefined8 *in_stack_00000698;
  undefined8 *in_stack_000006a0;
  undefined8 *in_stack_000006a8;
  undefined8 *in_stack_000006b0;
  undefined8 *in_stack_000006b8;
  undefined8 *in_stack_000006c0;
  undefined8 *in_stack_000006c8;
  undefined8 *in_stack_000006d0;
  undefined8 *in_stack_000006d8;
  undefined8 *in_stack_000006e0;
  undefined8 *in_stack_000006e8;
  undefined8 *in_stack_000006f0;
  undefined8 *in_stack_000006f8;
  undefined8 *in_stack_00000700;
  undefined8 *in_stack_00000708;
  undefined8 *in_stack_00000710;
  undefined8 *in_stack_00000718;
  undefined8 *in_stack_00000720;
  undefined8 *in_stack_00000728;
  undefined8 *in_stack_00000730;
  undefined8 *in_stack_00000738;
  undefined8 *in_stack_00000740;
  undefined8 *in_stack_00000748;
  undefined8 *in_stack_00000750;
  undefined8 *in_stack_00000758;
  undefined8 *in_stack_00000760;
  undefined8 *in_stack_00000768;
  undefined8 *in_stack_00000770;
  undefined8 *in_stack_00000778;
  undefined8 *in_stack_00000780;
  undefined8 *in_stack_00000788;
  undefined8 *in_stack_00000790;
  undefined8 *in_stack_00000798;
  undefined8 *in_stack_000007a0;
  undefined8 *in_stack_000007a8;
  undefined8 *in_stack_000007b0;
  undefined8 *in_stack_000007b8;
  undefined8 *in_stack_000007c0;
  undefined8 *in_stack_000007c8;
  undefined8 *in_stack_000007d0;
  undefined8 *in_stack_000007d8;
  undefined8 *in_stack_000007e0;
  undefined8 *in_stack_000007e8;
  undefined8 *in_stack_000007f0;
  undefined8 *in_stack_000007f8;
  undefined8 *in_stack_00000800;
  undefined8 *in_stack_00000808;
  undefined8 *in_stack_00000810;
  undefined8 *in_stack_00000818;
  undefined8 *in_stack_00000820;
  undefined8 *in_stack_00000828;
  undefined8 *in_stack_00000830;
  undefined8 *in_stack_00000838;
  undefined8 *in_stack_00000840;
  undefined8 *in_stack_00000848;
  undefined8 *in_stack_00000850;
  undefined8 *in_stack_00000858;
  undefined8 *in_stack_00000860;
  undefined8 *in_stack_00000868;
  undefined8 *in_stack_00000870;
  undefined8 *in_stack_00000878;
  undefined8 *in_stack_00000880;
  undefined8 *in_stack_00000888;
  undefined8 *in_stack_00000890;
  undefined8 *in_stack_00000898;
  undefined8 *in_stack_000008a0;
  undefined8 *in_stack_000008a8;
  undefined8 in_stack_00004430;
  undefined8 in_stack_00004438;
  void *in_stack_00004448;
  
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (param_1,0x109,in_stack_00004430,in_stack_00004438);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DataMemberAttribute>__
                       ,in_stack_00000430,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x10a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileUnaryExpression__
                       ,in_stack_00000430,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x10b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_UnityEngine_InputSystem_Keyboard_get_Item__,
                       in_stack_00000444,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x10c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Linq_Expressions_LambdaExpression_GetParameter__
                       ,in_stack_00000444,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x10d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
                       ,in_stack_00000450,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x10e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonSerializer_set_ReferenceLoopHandling__,
                       in_stack_00000450,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x10f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__,
                       in_stack_00000460,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x110,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamLength__,
                       in_stack_00000460,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x111,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<DateTimeParse_MatchNumberDelegate>__
                       ,in_stack_00000470,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x112,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Oculus_Interaction_Samples_LocomotionTutorialProgressTracker_LocomotionEventHandled__
                       ,in_stack_00000470,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x113,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CheckForCircularReference__
                       ,in_stack_00000480,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x114,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                       ,in_stack_00000480,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x115,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<JsonExtensionDataAttribute>__
                       ,in_stack_00000490,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x116,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_Experimental_GlobalIllumination_LinearColor_set_red__,
                       in_stack_00000490,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x117,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_SecureStringToBSTR__,
                       in_stack_000004a0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x118,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_MarshalByRefObject_get_ObjectIdentity__,
                       in_stack_000004a0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x119,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Oculus_Interaction_ListLayoutEase_HandleElementRemoved__,0x551,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x11a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_UnityEngine_JsonUtility_FromJson<MensajeUnetChute>__,
                       in_stack_000003e4,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x11b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_UI_LazyFollow_UpdateRotation__,
                       in_stack_000003e4,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x11c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000870,in_stack_000003e4,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x11d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateJToken__
                       ,0x556a,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x11e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000690,0x556a,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x11f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_JsonUtility_FromJson<MensajeUnetDummyLanzador>__,
                       in_stack_000003e4,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x120,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileBinaryExpression__
                       ,in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x121,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LabelInfo_FirstDefinition__,
                       in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x122,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_set_FloatFormatHandling__,
                       in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x123,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Virtence_OpenTypeCS_Kern_ParseWindowsKernTable__,
                       in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x124,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ParseUnquotedProperty__,
                       in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x125,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Collections_ListDictionaryInternal_Remove__,
                       in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x126,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000006a8,in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x127,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                       ,in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x128,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__,
                       in_stack_0000050c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x129,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__,
                       in_stack_00000424,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x12a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnKeyDown__,
                       in_stack_00000430,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,299,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_Serialize__
                       ,in_stack_00000444,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,300,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_UnityEngine_UIElements_ListViewController_BindItem__,
                       in_stack_00000450,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x12d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_LocalDataStore_SetData__,in_stack_000004a0,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x12e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Text_RegularExpressions_MatchCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Match>_Add__
                       ,in_stack_000004b0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x12f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonTextReader_ReadUnquotedPropertyReportIfDone__,
                       in_stack_00000424,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x130,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__,
                       in_stack_00000430,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x131,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Linq_Expressions_Interpreter_LightLambda_Run__,
                       in_stack_00000444,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x132,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonTextReader_ParseNumberNegativeInfinity__,
                       in_stack_00000450,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x133,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextWriter_set_Indentation__,
                       in_stack_000004a0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x134,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJsonNameAndDescriptorOnly>__
                       ,in_stack_000004b0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x135,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_Clear__
                       ,in_stack_00000490,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x136,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000798,10000,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x137,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                       ,in_stack_000004fc,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x138,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_SecureStringGlobalAllocator__,
                       0x4e8c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x139,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__,
                       0x4e8c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x13a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_set_ArrayPool__,
                       in_stack_000000e0._4_4_,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x13b,auVar10._0_8_,auVar10._8_8_);
  uStack0000000000000034 = 0x4e8b;
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Runtime_Serialization_LongList_EnlargeArray__,
                       0x4e8b,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x13c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_WriteValue__,
                       in_stack_000004fc,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x13d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__,
                       in_stack_000004fc,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x13e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_WriteConstructorDate__,
                       in_stack_000004fc,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x13f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonValidatingReader_ValidateCurrentToken__,
                       uStack0000000000000034,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x140,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ConvertUnicode__,
                       in_stack_00000180._4_4_,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x141,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_LocalDataStore_PopulateElement__,
                       in_stack_000005e0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x142,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<X509CertificateCollection>__
                       ,in_stack_000005e0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x143,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LeftShiftInstruction_Create__,
                       in_stack_000005c8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x144,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__,
                       0xfffffde9,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x145,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ParseProperty__,
                       in_stack_000005c8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x146,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationSubmitEvent>__
                       ,0xfffffde9,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x147,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonValidatingReader_ValidateArray__,
                       0x4b1,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x148,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_JsonUtility_FromJson<InputDeviceDescription_DeviceDescriptionJson>__
                       ,in_stack_00000334,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x149,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000007d8,in_stack_00000334,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x14a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000006d8,in_stack_000005e0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x14b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_Experimental_GlobalIllumination_LinearColor_Convert__,
                       0x4b1,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x14c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_MarshalByRefObject_CreateObjRef__,
                       in_stack_000005e0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x14d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000850,12000,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x14e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Loom_RunAction__,0x2ee1,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x14f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_GetCustomMarshalerInstance__,
                       12000,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x150,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000730,in_stack_000005c8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x151,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000007f8,0xfffffde9,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x152,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_UIElements_ListViewDragger_ApplyDragAndDropUI__,
                       in_stack_00000490,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x153,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<Task_ContingentProperties>__
                       ,0x4e2,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x154,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_UnsafeAddrOfPinnedArrayElement<byte>__
                       ,0x4e3,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x155,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LightLambda_RunVoid0__,0x4e4,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x156,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileAssignBinaryExpression__
                       ,0x4e5,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x157,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer__
                       ,0x4e6,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x158,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000710,0x4e7,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x159,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000748,in_stack_00000474,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x15a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000740,0x4e9,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x15b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000650,0x4ea,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x15c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000007d0,in_stack_00000180._4_4_,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x15d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Text_RegularExpressions_MatchCollection__ctor__,
                       0x4e4,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x15e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_SetWriteState__,20000,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x15f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Data_LookupNode_Eval__,0x4e22,in_stack_00000610)
  ;
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x160,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ResolveTypeName__
                       ,0x4e2,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x161,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_UI_LazyFollow_UpdatePosition__,
                       0x4e3,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x162,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_Read__,0x4e21,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x163,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LightCompiler_GetMemberType__,
                       0x4e23,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x164,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_UI_LayoutRebuilder_ReapplyDrivenProperties__,0x4e24,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x165,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_DoReadAsync__,0x4e25,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x166,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_UnityEngine_JsonUtility_FromJson<InputActionMap_BindingOverrideListJson>__
                       ,0x4f25,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x167,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate__
                       ,0x4f2d,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x168,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_WriteValueAsync__,0x51c8,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x169,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                       ,0x51d5,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x16a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_TypeNameHandling__,
                       uStack0000000000000020,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x16b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<Socket_AwaitableSocketAsyncEventArgs>__
                       ,0x5161,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x16c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                       ,in_stack_000004f8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x16d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__,
                       uStack0000000000000024,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x16e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__,
                       in_stack_000004f8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x16f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Mono_Globalization_Unicode_MSCompatUnicodeTable_GetResource__,0x7149,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x170,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__,
                       uStack0000000000000028,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x171,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextWriter_set_ArrayPool__,
                       uStack000000000000002c,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x172,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_WebSocketSharp_Logger_defaultOutput__,0x4e8c,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x173,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Unity_Services_Core_Internal_LockedComponentRegistry_ResetProvidedComponents__
                       ,uStack0000000000000034,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x174,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000006f0,0xffffdeae,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x175,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000668,0xffffdeab,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x176,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000750,0xffffdeaa,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x177,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000658,0xffffdeb2,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x178,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000006c0,0xffffdeb0,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x179,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000858,0xffffdeb1,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x17a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000790,0xffffdeaf,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x17b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000828,0xffffdeb3,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x17c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_000007b8,0xffffdeac,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x17d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000800,0xffffdead,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x17e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_InternalWriteWhitespace__,
                       0x2714,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x17f,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_WriteValue__,0x272d,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x180,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextWriter_DoWriteEndAsync__,0x2718
                       ,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x181,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Collections_ListDictionaryInternal_Add__,0x2712,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x182,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureArrayContract__
                       ,0x2762,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x183,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_SetExtensionData__
                       ,0x2717,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x184,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__
                       ,0x2716,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x185,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<SemaphoreSlim>__,
                       0x2715,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x186,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*in_stack_00000758,0x275f,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x187,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_LazyHelper_CreateViaDefaultConstructor__,0x2711,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x188,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Collections_Specialized_ListDictionary_Remove__,
                       0x2713,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x189,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<Encoding>__,0x271a
                       ,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x18a,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ReadStringValue__,0x2725
                       ,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x18b,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Collections_Specialized_ListDictionary_CopyTo__,
                       0x2761,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x18c,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_UnityEngine_LayerMask_GetMask__,0x2721,
                       in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x18d,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_System_Collections_Specialized_ListDictionary_Add__,
                       in_stack_000004fc,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x18e,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__,
                       in_stack_000004fc,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,399,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateFinish__,
                       in_stack_000005c8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,400,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Text_RegularExpressions_MatchCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Match>_RemoveAt__
                       ,0xfffffde9,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x191,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<bool>__,
                       in_stack_000005c8,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x192,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_UpdateCurrentState__,
                       0xfffffde9,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x193,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_ENC_m11645D8B62D904482EA1728A35EFF6E59C2F7EE2
                      (*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<OSSpecificSynchronizationContext_InvocationEntryDelegate>__
                       ,in_stack_000001b8._4_4_,in_stack_00000610);
  NullCheck(in_stack_00004448);
  InternalEncodingDataItemU5BU5D_t49FE80FF7C98C9D6DA8B7F41AF7F053B2B4B387E::SetAt
            (in_stack_00004448,0x194,auVar10._0_8_,auVar10._8_8_);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  *puVar3 = in_stack_00004448;
  ppvVar4 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  Il2CppCodeGenWriteBarrier(ppvVar4,in_stack_00004448);
  pvVar5 = (void *)SZArrayNew(*(Il2CppClass **)Method_Newtonsoft_Json_JsonSerializer_set_MaxDepth__,
                              0x62);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000040._4_4_,0x4e4,*in_stack_000007c0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000048,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000050._4_4_,0x4e4,*in_stack_00000728,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000058,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000060._4_4_,0x4e4,*in_stack_00000818,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000068,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000070._4_4_,in_stack_00000474,*in_stack_00000640,0x202,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000078,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000080._4_4_,0x4e5,*in_stack_00000760,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000088,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000090._4_4_,0x4e9,*in_stack_000007e8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000098,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000000a0._4_4_,0x4e4,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetCachedAttribute<JsonContainerAttribute>__
                       ,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000000a8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000000b0._4_4_,0x4e2,
                       *(undefined8 *)Method_Newtonsoft_Json_JsonWriter_set_DateTimeZoneHandling__,
                       0x202,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000000b8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000000c0._4_4_,0x4e4,*in_stack_00000808,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000000c8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000000d0._4_4_,0x4e6,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<IgnoreDataMemberAttribute>__
                       ,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000000d8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000000e0._4_4_,0x4e4,*in_stack_00000878,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000000e8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000000f0._4_4_,0x4e4,*in_stack_00000840,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000000f8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000100._4_4_,0x4e4,
                       *(undefined8 *)Method_Newtonsoft_Json_JsonWriter_set_StringEscapeHandling__,0
                       ,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000108,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000110._4_4_,0x4e7,*in_stack_000007a8,0x202,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000118,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000120._4_4_,0x4e4,*in_stack_00000868,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000128,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000130._4_4_,in_stack_00000474,*in_stack_00000670,0,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000138,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000140._4_4_,0x4e4,*in_stack_00000888,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000148,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000150._4_4_,0x4e3,*in_stack_00000720,0x202,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000158,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000160._4_4_,0x4e5,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataPropertiesToken__
                       ,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000168,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000170._4_4_,0x4e2,*in_stack_00000738,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000178,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000180._4_4_,in_stack_00000180._4_4_,*in_stack_000007d0,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000188,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000190._4_4_,0x4e5,*in_stack_000007a0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000198,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004fc,in_stack_000004fc,
                       *(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001a0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000051c,in_stack_0000051c,
                       *(undefined8 *)
                        Method_Mono_Security_Cryptography_KeyPairPersistence_get_UserPath__,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001a8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000050c,in_stack_0000050c,*in_stack_000006a8,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001b0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000001b8._4_4_,in_stack_000001b8._4_4_,
                       *(undefined8 *)Method_UnityEngine_JsonUtility_FromJson__,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001c0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000001c8._4_4_,0x4e6,*in_stack_00000780,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001d0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000001d8._4_4_,0x4e4,*in_stack_00000630,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001e0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000001e8._4_4_,0x4e4,*in_stack_00000678,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000001f0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000001fc,0x4e4,*in_stack_00000778,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000200,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000020c,0x4e4,*in_stack_00000638,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000210,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000021c,0x4e4,*in_stack_000007f0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000220,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000022c,0x4e4,*in_stack_00000820,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000230,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000023c,0x4e4,*in_stack_000006c8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000240,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000024c,0x4e4,*in_stack_000006f8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000250,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000025c,0x4e4,*in_stack_000007c8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000260,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000026c,0x4e4,*in_stack_00000788,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000270,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_0000027c,0x4e4,*in_stack_00000890,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000280,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000005e0,in_stack_000005e0,*in_stack_000006d8,0x200,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000288,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4b1,in_stack_000005e0,
                       *(undefined8 *)Method_WebSocketSharp_Net_ListenerAsyncResult_invokeCallback__
                       ,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000298,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e2,0x4e2,
                       *(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__,
                       0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002a0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e3,0x4e3,
                       *(undefined8 *)
                        Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_RemoveAt__
                       ,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002a8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e4,0x4e4,
                       *(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002b0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e5,0x4e5,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ResolvePropertyAndCreatorValues__
                       ,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002b8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e6,0x4e6,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Body_Samples_LockedBodyPose_UpdateLockedBodyPose__
                       ,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002c0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e7,0x4e7,*in_stack_00000710,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002c8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000474,in_stack_00000474,*in_stack_00000748,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002d0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4e9,0x4e9,*in_stack_00000740,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002d8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x4ea,0x4ea,*in_stack_00000650,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002e8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (10000,0x4e4,*in_stack_00000798,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000002f8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x275f,0x4e4,*in_stack_00000758,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000308,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (12000,in_stack_000005e0,*in_stack_00000850,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000318,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x2ee1,in_stack_000005e0,
                       *(undefined8 *)
                        Method_System_Threading_LazyInitializer_EnsureInitialized<DateTimeFormatInfo>__
                       ,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000328,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000334,0x4e4,*in_stack_000007d8,0x101,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000338,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000344,0x4e4,*in_stack_000006d0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000348,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000354,0x4e4,*in_stack_00000860,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000358,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000364,0x4e4,*in_stack_000006e0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000368,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000374,0x4e4,*in_stack_000007e0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000378,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000384,0x4e4,*in_stack_000006b8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000388,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000394,0x4e4,*in_stack_00000700,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000398,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000003a4,in_stack_000004fc,*in_stack_00000698,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000003a8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000003b4,0x4e4,*in_stack_000006b0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000003b8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000003c4,in_stack_00000474,*in_stack_000006e8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000003c8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000003d4,0x4e7,*in_stack_00000770,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000003d8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000003e4,0x4e3,*in_stack_00000870,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000003e8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000003f4,0x4e4,*in_stack_00000680,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000003f8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000404,0x4e3,*in_stack_00000768,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000408,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0x556a,0x4e3,*in_stack_00000690,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000418,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000424,0x4e4,*in_stack_000008a0,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000428,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000430,0x4e2,*in_stack_00000810,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000438,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000444,0x4e6,*in_stack_000007b0,0x101,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000448,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000450,0x4e9,*in_stack_00000830,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000458,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000460,0x4e3,*in_stack_00000848,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000468,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000470,in_stack_00000474,*in_stack_00000648,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000478,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000480,0x4e5,*in_stack_00000688,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000488,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000490,0x4e7,*in_stack_00000838,0x202,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000498,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004a0,0x4e6,*in_stack_00000708,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000004a8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004b0,0x4e4,*in_stack_000008a8,0x301,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000004b8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004c0,0x4e7,*in_stack_00000718,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000004c8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004d4,in_stack_000004fc,*in_stack_00000898,0x101,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000004d8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004e0,in_stack_000004fc,
                       *(undefined8 *)
                        Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_Remove__
                       ,0x301,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000004e8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffc42e,in_stack_000004fc,*in_stack_00000898,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000004f0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000004f8,in_stack_000004fc,*in_stack_000006a0,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000500,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000508,in_stack_0000050c,*in_stack_00000880,0x101,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000510,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_00000518,in_stack_0000051c,*in_stack_00000660,0x303,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000520,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeaa,0xffffdeaa,*in_stack_00000750,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000530,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeab,0xffffdeab,*in_stack_00000668,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000540,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeac,0xffffdeac,*in_stack_000007b8,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000550,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdead,0xffffdead,*in_stack_00000800,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000560,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeae,0xffffdeae,*in_stack_000006f0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000570,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeaf,0xffffdeaf,*in_stack_00000790,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000580,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeb0,0xffffdeb0,*in_stack_000006c0,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_00000590,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeb1,0xffffdeb1,*in_stack_00000858,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000005a0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeb2,0xffffdeb2,*in_stack_00000658,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000005b0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xffffdeb3,0xffffdeb3,*in_stack_00000828,0,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000005c0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (in_stack_000005c8,in_stack_000005e0,*in_stack_00000730,0x101,
                       in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000005d0,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0xfffffde9,in_stack_000005e0,*in_stack_000007f8,0x303,in_stack_00000610);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000005e8,auVar10._0_8_,auVar10._8_8_);
  auVar10 = EncodingTable_MapCodePageDataItem_m7D8F376F9B79D824AE03082F1030E47D3167EBF0
                      (0,0,in_stack_00000610,0);
  NullCheck(pvVar5);
  InternalCodePageDataItemU5BU5D_t33622E365514085FB25BF5886B358FC250BFD1B4::SetAt
            (pvVar5,in_stack_000005f8,auVar10._0_8_,auVar10._8_8_);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  *(void **)(lVar6 + 8) = pvVar5;
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),pvVar5);
  iVar1 = EncodingTable_GetNumEncodingItems_m1A544889D719E2510FD05F3A7DFF133B75385ED6
                    (in_stack_00000610);
  uVar2 = il2cpp_codegen_subtract<int,int>(iVar1,1);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  *(undefined4 *)(lVar6 + 0x10) = uVar2;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_TryGetValue__
            );
  pIVar7 = (Il2CppObject *)
           StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline
                     (in_stack_00000610);
  pDVar8 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588 *)
           il2cpp_codegen_object_new(*(Il2CppClass **)Method_System_Linq_Enumerable_Count<int>__);
  Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D
            (pDVar8,pIVar7,*(MethodInfo **)Method_Newtonsoft_Json_JsonSerializer_set_Binder__);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  *(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588 **)(lVar6 + 0x18) = pDVar8;
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x18),pDVar8);
  pDVar9 = (Dictionary_2_t4A66E55DEE67263E1D7B09B4693FD0F41C204B21 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__);
  Dictionary_2__ctor_mB8B5CB80154290CA11D9F5DAD373E5265F9A0399
            (pDVar9,*(MethodInfo **)Method_Newtonsoft_Json_JsonSerializer_set_ConstructorHandling__)
  ;
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  *(Dictionary_2_t4A66E55DEE67263E1D7B09B4693FD0F41C204B21 **)(lVar6 + 0x20) = pDVar9;
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000628);
  Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x20),pDVar9);
  return;
}


