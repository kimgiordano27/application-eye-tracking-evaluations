/*
FUNCTION_NAME: FUN_03842d1c
ENTRY_POINT: 03842d1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


long FUN_03842d1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubAckPacket__;
  puVar1 = Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePacket__;
  puVar3 = Method_MQTTnet_Diagnostics_MqttNetSourceLoggerExtensions_Warning<string>__;
  if ((DAT_04539287 & 1) == 0) {
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubCompPacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubAckPacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubRecPacket__);
    FUN_01c5d288(Method_MQTTnet_Diagnostics_MqttNetSourceLoggerExtensions_Warning<string>__);
    FUN_01c5d288(UnityEngine_ResourceManagement_IUpdateReceiver_TypeInfo);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubRelPacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePublishPacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeSubAckPacket__);
    FUN_01c5d288(Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsSubmitHandler>__
                );
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeSubscribePacket__);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLeaderboardsListener_TypeInfo
                );
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeUnsubAckPacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeUnsubscribePacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_ThrowIfBodyIsEmpty__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_ValidateConnectPacket__);
    FUN_01c5d288(PTR_DAT_042341b8);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Expression>__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_ValidatePublishPacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketDecoder_Decode__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketDecoder_DecodeConnectPacket__);
    FUN_01c5d288(System_Func<Scale,_Scale,_bool>_TypeInfo);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketDecoder_ThrowIfBodyIsEmpty__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder__ctor__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_Encode__);
    FUN_01c5d288(PTR_DAT_042341c8);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodeConnectPacket__);
    FUN_01c5d288(PTR_DAT_04231c30);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodePacket__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodePubAckPacket__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<ReportSection>__);
    FUN_01c5d288(Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodePublishPacket__);
    DAT_04539287 = 1;
  }
  puVar5 = Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubRecPacket__;
  lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_0290befc(lVar9,0x24,*(undefined8 *)puVar2);
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar10 = *(long *)puVar3;
  }
  uVar11 = **(undefined8 **)(lVar10 + 0xb8);
  lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
  FUN_03313b6c(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  *(undefined8 *)(lVar10 + 0x20) = uVar11;
  puVar8 = Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodePacket__;
  puVar7 = Method_MQTTnet_Formatter_V5_MqttV5PacketDecoder_ThrowIfBodyIsEmpty__;
  puVar6 = Method_MQTTnet_Formatter_V5_MqttV5PacketDecoder_Decode__;
  puVar4 = Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubCompPacket__;
  puVar2 = UnityEngine_ResourceManagement_IUpdateReceiver_TypeInfo;
  puVar1 = PTR_DAT_04231c30;
  if (lVar9 != 0) {
    FUN_0290c838(lVar9,*(undefined8 *)Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_Encode__,
                 lVar10,*(undefined8 *)
                         Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubCompPacket__);
    uVar12 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b92538;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)puVar6,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91438;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)puVar1,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b92b50;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)puVar7,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91258;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)puVar8,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91d70;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)puVar2,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b918d0;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo,lVar10,
                 *(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91fb8;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLeaderboardsListener_TypeInfo
                 ,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b926e8;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined4 *)(lVar10 + 0x18) = 100;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_ValidateConnectPacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91b18;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined4 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePublishPacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91ef8;
    *(undefined4 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodePublishPacket__,lVar10
                 ,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91680;
    *(undefined4 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodeConnectPacket__,lVar10
                 ,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b918d8;
    *(undefined4 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_ValidatePublishPacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91dc8;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined4 *)(lVar10 + 0x18) = 3;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V5_MqttV5PacketDecoder_DecodeConnectPacket__,lVar10
                 ,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b92a88;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder__ctor__,lVar10
                 ,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b928d8;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeSubAckPacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91dd0;
    *(undefined4 *)(lVar10 + 0x18) = 3;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeUnsubAckPacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91b20;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)Method_System_Linq_Enumerable_ToArray<ReportSection>__,lVar10,
                 *(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b927f8;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeUnsubscribePacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91aa0;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)PTR_DAT_042341c8,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b92bc8;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)PTR_DAT_042341b8,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b92420;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsSubmitHandler>__
                 ,lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b91480;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Expression>__,lVar10,
                 *(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b925f0;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodePubRelPacket__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b92010;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V5_MqttV5PacketEncoder_EncodePubAckPacket__,lVar10,
                 *(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b928e0;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_ThrowIfBodyIsEmpty__,
                 lVar10,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar10,0);
    uVar11 = DAT_00b928e8;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_0290c838(lVar9,*(undefined8 *)
                        Method_MQTTnet_Formatter_V3_MqttV3PacketFormatter_EncodeSubscribePacket__,
                 lVar10,*(undefined8 *)puVar4);
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


