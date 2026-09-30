/*
FUNCTION_NAME: FUN_03e25028
ENTRY_POINT: 03e25028
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_03e25028(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_48;
  
  puVar1 = System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo;
  if ((DAT_04542831 & 1) == 0) {
    FUN_01c5d288(MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo);
    FUN_01c5d288(StringLiteral_9398);
    FUN_01c5d288(PTR_DAT_0422fad8);
    FUN_01c5d288(StringLiteral_9533);
    FUN_01c5d288(StringLiteral_9534);
    FUN_01c5d288(StringLiteral_9535);
    FUN_01c5d288(StringLiteral_9536);
    FUN_01c5d288(StringLiteral_9537);
    FUN_01c5d288(StringLiteral_9538);
    FUN_01c5d288(StringLiteral_9539);
    FUN_01c5d288(System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo);
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(MQTTnet_Packets_MqttDisconnectPacket_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(MQTTnet_MqttFactory_TypeInfo);
    FUN_01c5d288(OVRFaceExpressions_TypeInfo);
    FUN_01c5d288(MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(MQTTnet_Formatter_MqttDisconnectPacketFactory_TypeInfo);
    FUN_01c5d288(PTR_DAT_04232b38);
    FUN_01c5d288(MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
    FUN_01c5d288(PTR_DAT_04232b40);
    FUN_01c5d288(System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo);
    FUN_01c5d288(MQTTnet_Formatter_MqttPacketBuffer_TypeInfo);
    FUN_01c5d288(StringLiteral_9540);
    FUN_01c5d288(StringLiteral_9541);
    DAT_04542831 = 1;
  }
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  puVar7 = StringLiteral_9540;
  puVar6 = MQTTnet_Formatter_MqttPacketBuffer_TypeInfo;
  puVar5 = MQTTnet_Implementations_CrossPlatformSocket_TypeInfo;
  puVar4 = System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo;
  puVar3 = PTR_DAT_04232b40;
  puVar2 = PTR_DAT_04232b38;
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar9 = *(long *)puVar1;
  }
  *(float *)(param_1 + 0x434) = (float)*(int *)(*(long *)(lVar9 + 0xb8) + 0x18);
  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
  FUN_03313b6c(uVar10,0);
  *(undefined8 *)(param_1 + 0x460) = uVar10;
  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d26600(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x468) = uVar10;
  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d26600(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x470) = uVar10;
  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_02d4f880(uVar10,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x478) = uVar10;
  FUN_03e0f924(param_1,0);
  FUN_03f17740(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),0);
  FUN_03e2451c(param_1,1);
  lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
  FUN_03ea4da8(lVar9,0);
  *(long *)(param_1 + 0x440) = lVar9;
  if (lVar9 != 0) {
    FUN_03f17740(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68),0);
    puVar1 = StringLiteral_9539;
    if (*(long *)(param_1 + 0x440) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x440) + 0x428);
      uVar10 = thunk_FUN_01c496e0(*(undefined8 *)MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo);
      FUN_0285e7cc(uVar10,param_1,*(undefined8 *)puVar1,0);
      puVar2 = StringLiteral_9538;
      puVar1 = MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo;
      if (lVar9 != 0) {
        FUN_03ea9808(lVar9,uVar10,0);
        lVar9 = *(long *)(param_1 + 0x440);
        uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_02b1ee9c(uVar10,param_1,*(undefined8 *)puVar2,0);
        puVar3 = StringLiteral_9534;
        puVar2 = MQTTnet_Formatter_MqttDisconnectPacketFactory_TypeInfo;
        puVar1 = MQTTnet_Packets_MqttDisconnectPacket_TypeInfo;
        if (lVar9 != 0) {
          FUN_02305eac(lVar9,uVar10,0,*(undefined8 *)MQTTnet_MqttFactory_TypeInfo);
          uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
          FUN_02b1ee9c(uVar10,param_1,*(undefined8 *)puVar3,0);
          FUN_02305eac(param_1,uVar10,0,*(undefined8 *)puVar1);
          puVar2 = StringLiteral_9533;
          puVar1 = OVRFaceExpressions_TypeInfo;
          plVar11 = *(long **)(param_1 + 0x440);
          if (plVar11 != (long *)0x0) {
            lVar9 = (**(code **)(*plVar11 + 0x768))(plVar11,*(undefined8 *)(*plVar11 + 0x770));
            uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
            FUN_02b1ee9c(uVar10,param_1,*(undefined8 *)puVar2,0);
            if (lVar9 != 0) {
              FUN_02305eac(lVar9,uVar10,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
              puVar2 = StringLiteral_9535;
              puVar1 = OVRGLTFAccessor_TypeInfo;
              plVar11 = *(long **)(param_1 + 0x440);
              if (plVar11 != (long *)0x0) {
                lVar9 = (**(code **)(*plVar11 + 0x768))(plVar11,*(undefined8 *)(*plVar11 + 0x770));
                uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                FUN_02b1ee9c(uVar10,param_1,*(undefined8 *)puVar2,0);
                if (lVar9 != 0) {
                  FUN_02305eac(lVar9,uVar10,0,*(undefined8 *)OVREyeGaze_TypeInfo);
                  local_48 = *(undefined8 *)(param_1 + 0x378);
                  FUN_03f1e3ec(&local_48,*(undefined8 *)(param_1 + 0x440),0);
                  plVar11 = *(long **)(param_1 + 0x440);
                  if (plVar11 != (long *)0x0) {
                    lVar9 = (**(code **)(*plVar11 + 0x768))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x770));
                    if (lVar9 != 0) {
                      *(undefined1 *)(lVar9 + 0x20) = 1;
                      plVar11 = *(long **)(param_1 + 0x440);
                      if (plVar11 != (long *)0x0) {
                        lVar9 = (**(code **)(*plVar11 + 0x768))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x770));
                        if (lVar9 != 0) {
                          uVar8 = FUN_03f11ba4(lVar9,0);
                          FUN_03f11bcc(lVar9,uVar8 & 0xfffffffd,0);
                          if (*(long *)(param_1 + 0x440) != 0) {
                            FUN_03f1145c(*(long *)(param_1 + 0x440),
                                         *(undefined8 *)StringLiteral_9541,0);
                            if ((*(long *)(param_1 + 0x440) != 0) &&
                               (lVar9 = *(long *)(*(long *)(param_1 + 0x440) + 0x428), lVar9 != 0))
                            {
                              FUN_03f1145c(lVar9,0,0);
                              puVar4 = StringLiteral_9537;
                              puVar3 = StringLiteral_9536;
                              puVar2 = StringLiteral_9398;
                              puVar1 = PTR_DAT_0422fad8;
                              if ((*(long *)(param_1 + 0x440) != 0) &&
                                 (lVar9 = *(long *)(*(long *)(param_1 + 0x440) + 0x420), lVar9 != 0)
                                 ) {
                                FUN_03f1145c(lVar9,0,0);
                                *(undefined1 *)(param_1 + 0x20) = 1;
                                VoxelBusters_EssentialKit_WebView__get_Progress(param_1,1,0);
                                FUN_03ed4838(param_1,1,0);
                                uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                FUN_028636c0(uVar10,param_1,*(undefined8 *)puVar3,0);
                                *(undefined8 *)(param_1 + 0x490) = uVar10;
                                uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                FUN_03245f44(uVar10,param_1,*(undefined8 *)puVar4,0);
                                *(undefined8 *)(param_1 + 0x498) = uVar10;
                                FUN_03e24f0c(param_1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


