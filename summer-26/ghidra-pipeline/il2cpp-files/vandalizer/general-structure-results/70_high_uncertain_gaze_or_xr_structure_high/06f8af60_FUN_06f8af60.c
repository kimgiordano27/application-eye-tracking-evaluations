/*
FUNCTION_NAME: FUN_06f8af60
ENTRY_POINT: 06f8af60
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06f8af60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_075d63b8;
  if ((DAT_07a59a8c & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d63b8);
    FUN_031f20f4(PTR_DAT_075d6bd8);
    FUN_031f20f4(System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    FUN_031f20f4(Mono_ISystemCertificateProvider_TypeInfo);
    FUN_031f20f4(Mono_ISystemDependencyProvider_TypeInfo);
    FUN_031f20f4(Best_HTTP_Shared_PlatformSupport_Network_Tcp_ITCPStreamerContentConsumer_TypeInfo);
    FUN_031f20f4(System_Threading_Tasks_ITaskCompletionAction_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_ITeleportationVolumeAnchorFilter_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_IX509Extension_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_ITextEdition_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_TypeInfo);
    FUN_031f20f4(UnityEngine_InputSystem_LowLevel_ITextInputReceiver_TypeInfo);
    FUN_031f20f4(TMPro_ITextPreprocessor_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_ITextSelection_TypeInfo);
    FUN_031f20f4(System_Threading_IThreadPoolWorkItem_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_PingMono_TypeInfo);
    FUN_031f20f4(Photon_Realtime_PingMono_TypeInfo);
    FUN_031f20f4(System_IO_PinnedBufferMemoryStream_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs10CertificationRequest_TypeInfo)
    ;
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_Pkcs12ParametersGenerator_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Pkcs_Pkcs12PbeParams_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs12Store_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Encodings_Pkcs1Encoding_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_Pkcs5S1ParametersGenerator_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_Pkcs5S2ParametersGenerator_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Paddings_Pkcs7Padding_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs8EncryptedPrivateKeyInfo_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs8EncryptedPrivateKeyInfoBuilder_TypeInfo
                );
    FUN_031f20f4(System_Reflection_ParameterInfo_TypeInfo);
    DAT_07a59a8c = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = System_Reflection_ParameterInfo_TypeInfo;
  puVar1 = PTR_DAT_0759b388;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_0759b388 + 0x80);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_075d6bd8;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x378);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                  Best_HTTP_Shared_PlatformSupport_Network_Tcp_ITCPStreamerContentConsumer_TypeInfo
                                );
      FUN_051bf1dc(lVar8,uVar9,*(undefined8 *)Fusion_Photon_Realtime_PingMono_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x378) = lVar8;
      thunk_FUN_0329bf60(lVar5 + 0x378,lVar8);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x80);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
      uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
        lVar5 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x380);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_0322f148(*(undefined8 *)Mono_ISystemDependencyProvider_TypeInfo);
        FUN_051bf738(lVar8,uVar9,
                     *(undefined8 *)
                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_Pkcs12ParametersGenerator_TypeInfo
                     ,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x380) = lVar8;
        thunk_FUN_0329bf60(lVar5 + 0x380,lVar8);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
        uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
          lVar5 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x388);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_ITeleportationVolumeAnchorFilter_TypeInfo
                                    );
          FUN_051bf364(lVar8,uVar9,
                       *(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Pkcs_Pkcs12PbeParams_TypeInfo
                       ,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x388) = lVar8;
          thunk_FUN_0329bf60(lVar5 + 0x388,lVar8);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x80);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
          uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x38) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
            lVar5 = *(long *)puVar4;
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x390);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                        System_Threading_Tasks_ITaskCompletionAction_TypeInfo);
            FUN_051bf428(lVar8,uVar9,
                         *(undefined8 *)
                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs12Store_TypeInfo,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x390) = lVar8;
            thunk_FUN_0329bf60(lVar5 + 0x390,lVar8);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x80);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
            uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
              lVar5 = *(long *)puVar4;
            }
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x398);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                          System_ComponentModel_ISynchronizeInvoke_TypeInfo);
              FUN_051bf4ec(lVar8,uVar9,
                           *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Encodings_Pkcs1Encoding_TypeInfo
                           ,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x398) = lVar8;
              thunk_FUN_0329bf60(lVar5 + 0x398,lVar8);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x80);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
              uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x68) + 0x20,0)
              ;
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                lVar5 = *(long *)puVar4;
              }
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3a0);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_0322f148(*(undefined8 *)Mono_ISystemCertificateProvider_TypeInfo);
                FUN_051bf5b0(lVar8,uVar9,
                             *(undefined8 *)
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_Pkcs5S1ParametersGenerator_TypeInfo
                             ,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x3a0) = lVar8;
                thunk_FUN_0329bf60(lVar5 + 0x3a0,lVar8);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x80);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                  (*(long *)(puVar1 + 0x18) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3a8);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                              System_Threading_IThreadPoolWorkItem_TypeInfo);
                  UnityEngine_UIElements_StyleValuePropertyBag_ValueProperty<StyleBackgroundPosition,_BackgroundPosition>___ctor
                            (lVar8,uVar9,
                             *(undefined8 *)
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_Pkcs5S2ParametersGenerator_TypeInfo
                             ,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x3a8) = lVar8;
                  thunk_FUN_0329bf60(lVar5 + 0x3a8,lVar8);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x80);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                  uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                    (*(long *)(puVar1 + 0x40) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3b0);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_0322f148(*(undefined8 *)TMPro_ITextPreprocessor_TypeInfo);
                    FUN_051bf8c0(lVar8,uVar9,
                                 *(undefined8 *)
                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Paddings_Pkcs7Padding_TypeInfo
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x3b0) = lVar8;
                    thunk_FUN_0329bf60(lVar5 + 0x3b0,lVar8);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x80);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    }
                    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                      (*(long *)(puVar1 + 0x50) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3b8);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                                  UnityEngine_InputSystem_LowLevel_ITextInputReceiver_TypeInfo
                                                );
                      FUN_051bf984(lVar8,uVar9,
                                   *(undefined8 *)
                                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs8EncryptedPrivateKeyInfo_TypeInfo
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x3b8) = lVar8;
                      thunk_FUN_0329bf60(lVar5 + 0x3b8,lVar8);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    }
                    FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x80);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                      uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                        (*(long *)(puVar1 + 0x70) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3c0);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                                    UnityEngine_UIElements_ITextEdition_TypeInfo);
                        FUN_051bfa48(lVar8,uVar9,
                                     *(undefined8 *)
                                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs8EncryptedPrivateKeyInfoBuilder_TypeInfo
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x3c0) = lVar8;
                        thunk_FUN_0329bf60(lVar5 + 0x3c0,lVar8);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x80);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        }
                        uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                        uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                          (*(long *)(puVar1 + 0x78) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3c8);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                      (lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                                      UnityEngine_UIElements_ITextSelection_TypeInfo
                                                    );
                          FUN_051bf7fc(lVar8,uVar9,*(undefined8 *)Photon_Realtime_PingMono_TypeInfo,
                                       0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x3c8) = lVar8;
                          thunk_FUN_0329bf60(lVar5 + 0x3c8,lVar8);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        }
                        FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x80);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                          }
                          uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                          uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                            (*(long *)(puVar1 + 0x90) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                      (lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3d0);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                        (lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_IX509Extension_TypeInfo
                                                  );
                            UnityEngine_UIElements_StyleValuePropertyBag_ValueProperty<StyleFloat,_float>__get_IsReadOnly
                                      (lVar8,uVar9,
                                       *(undefined8 *)System_IO_PinnedBufferMemoryStream_TypeInfo,0)
                            ;
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x3d0) = lVar8;
                            thunk_FUN_0329bf60(lVar5 + 0x3d0,lVar8);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                          }
                          FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
                          lVar5 = *(long *)puVar2;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                            lVar5 = *(long *)puVar2;
                          }
                          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                          if (lVar5 != 0) {
                            local_48 = *(undefined8 *)(lVar5 + 0x28);
                            lVar5 = *(long *)(puVar1 + 0x90);
                            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                            }
                            uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                            uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                              (*(long *)(puVar1 + 0x80) + 0x20,0);
                            lVar5 = *(long *)puVar4;
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                        (lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3d8);
                            if (lVar8 == 0) {
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                          (lVar5);
                                lVar5 = *(long *)puVar4;
                              }
                              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                              lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_TypeInfo
                                                  );
                              FUN_051c2e98(lVar8,uVar9,
                                           *(undefined8 *)
                                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs10CertificationRequest_TypeInfo
                                           ,0);
                              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                              *(long *)(lVar5 + 0x3d8) = lVar8;
                              thunk_FUN_0329bf60(lVar5 + 0x3d8,lVar8);
                            }
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                            }
                            FUN_06f825d8(&local_48,uVar6,uVar7,lVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


