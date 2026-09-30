/*
FUNCTION_NAME: FUN_06f83b84
ENTRY_POINT: 06f83b84
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_06f83b84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_075d63b8;
  if ((DAT_07a59a84 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d63b8);
    FUN_031f20f4(PTR_DAT_075d6bd8);
    FUN_031f20f4(Unity_Properties_IMemberInfo_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_IMemoable_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_UIR_IMeshGenerator_TypeInfo);
    FUN_031f20f4(UnityEngine_UI_IMeshModifier_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_Messaging_IMessage_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_Messaging_IMessageSink_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_Messaging_IMethodMessage_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_Messaging_IMethodReturnMessage_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRCustomReticleProvider_TypeInfo
                );
    FUN_031f20f4(Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo);
    FUN_031f20f4(Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_IMouseEvent_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Security_ParameterUtilities_TypeInfo);
    FUN_031f20f4(System_ParameterizedStrings_TypeInfo);
    FUN_031f20f4(System_Threading_ParameterizedThreadStart_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithID_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithIV_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithRandom_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithSBox_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithSalt_TypeInfo
                );
    FUN_031f20f4(System_ParamsArray_TypeInfo);
    FUN_031f20f4(System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo);
    FUN_031f20f4(System_Runtime_Serialization_Formatters_Binary_ParseRecord_TypeInfo);
    FUN_031f20f4(System_Security_Util_Parser_TypeInfo);
    FUN_031f20f4(System_Reflection_ParameterInfo_TypeInfo);
    DAT_07a59a84 = 1;
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
    lVar5 = *(long *)(PTR_DAT_0759b388 + 0x38);
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
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Runtime_Remoting_Messaging_IMethodReturnMessage_TypeInfo);
      FUN_051bfbd0(lVar9,uVar10,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Security_ParameterUtilities_TypeInfo,0
                  );
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
      *plVar8 = lVar9;
      thunk_FUN_0329bf60(plVar8,lVar9);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x38);
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
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                    System_Runtime_Remoting_Messaging_IMethodMessage_TypeInfo);
        FUN_051c012c(lVar9,uVar10,
                     *(undefined8 *)
                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithID_TypeInfo
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
        *plVar8 = lVar9;
        thunk_FUN_0329bf60(plVar8,lVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x38);
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
        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
          lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                      Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo
                                    );
          FUN_051bfd58(lVar9,uVar10,
                       *(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithIV_TypeInfo
                       ,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
          *plVar8 = lVar9;
          thunk_FUN_0329bf60(plVar8,lVar9);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x38);
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
          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
            lVar9 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UI_IMeshModifier_TypeInfo);
            FUN_051bfee0(lVar9,uVar10,
                         *(undefined8 *)
                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithRandom_TypeInfo
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
            *plVar8 = lVar9;
            thunk_FUN_0329bf60(plVar8,lVar9);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x38);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
            uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
              lVar5 = *(long *)puVar4;
            }
            lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar10 = **(undefined8 **)(lVar5 + 0xb8);
              lVar9 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IMouseEvent_TypeInfo)
              ;
              FUN_051bffa4(lVar9,uVar10,
                           *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithSBox_TypeInfo
                           ,0);
              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
              *plVar8 = lVar9;
              thunk_FUN_0329bf60(plVar8,lVar9);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x38);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
              uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x18) + 0x20,0)
              ;
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                lVar5 = *(long *)puVar4;
              }
              lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                            System_Runtime_Remoting_Messaging_IMessage_TypeInfo);
                FUN_051bfc94(lVar9,uVar10,
                             *(undefined8 *)
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ParametersWithSalt_TypeInfo
                             ,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                *plVar8 = lVar9;
                thunk_FUN_0329bf60(plVar8,lVar9);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x38);
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
                lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_IMemoable_TypeInfo
                                            );
                  FUN_051c02b4(lVar9,uVar10,*(undefined8 *)System_ParamsArray_TypeInfo,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
                  *plVar8 = lVar9;
                  thunk_FUN_0329bf60(plVar8,lVar9);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x38);
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
                  lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo
                                              );
                    FUN_051c0378(lVar9,uVar10,
                                 *(undefined8 *)
                                  System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo,0);
                    plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
                    *plVar8 = lVar9;
                    thunk_FUN_0329bf60(plVar8,lVar9);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x38);
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
                    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                  UnityEngine_UIElements_UIR_IMeshGenerator_TypeInfo
                                                );
                      FUN_051c043c(lVar9,uVar10,
                                   *(undefined8 *)
                                    System_Runtime_Serialization_Formatters_Binary_ParseRecord_TypeInfo
                                   ,0);
                      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
                      *plVar8 = lVar9;
                      thunk_FUN_0329bf60(plVar8,lVar9);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    }
                    FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x38);
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
                      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                        
                                                  System_Runtime_Remoting_Messaging_IMessageSink_TypeInfo
                                                  );
                        FUN_051c01f0(lVar9,uVar10,
                                     *(undefined8 *)System_Security_Util_Parser_TypeInfo,0);
                        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
                        *plVar8 = lVar9;
                        thunk_FUN_0329bf60(plVar8,lVar9);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x38);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        }
                        uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
                        uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                          (*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                      (lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                      Unity_Properties_IMemberInfo_TypeInfo);
                          FUN_051bfe1c(lVar9,uVar10,
                                       *(undefined8 *)System_ParameterizedStrings_TypeInfo,0);
                          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
                          *plVar8 = lVar9;
                          thunk_FUN_0329bf60(plVar8,lVar9);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        }
                        FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
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
                                            (*(long *)(puVar1 + 0x38) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                      (lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                        (lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRCustomReticleProvider_TypeInfo
                                                  );
                            FUN_051c3020(lVar9,uVar10,
                                         *(undefined8 *)
                                          System_Threading_ParameterizedThreadStart_TypeInfo,0);
                            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
                            *plVar8 = lVar9;
                            thunk_FUN_0329bf60(plVar8,lVar9);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                          }
                          FUN_06f825d8(&local_48,uVar6,uVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


