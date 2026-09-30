/*
FUNCTION_NAME: Oculus.Interaction.OVR.Input.OVRButtonActiveState$$.ctor
ENTRY_POINT: 02a55b88
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_8;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


undefined8
Oculus_Interaction_OVR_Input_OVRButtonActiveState___ctor(Il2CppObject *param_1,Type_t *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  Type_t *pTVar11;
  undefined8 uStack_8;
  
  puVar5 = Method_System_Security_Cryptography_X509Certificates_X509Certificate2_set_PrivateKey__;
  puVar4 = Method_WebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_Close__;
  puVar3 = Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__;
  puVar2 = Method_Unity_Collections_NativeArray<Vector3>_get_IsCreated__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
  if ((DefaultContractResolver_CreateContract_m856C42DFFC8BC7407B4C9D2F8CC8F8D165CE8678::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_WebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_Close__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Data_XDRSchema_IsTextOnlyContent__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Voice_Dictation_AppDictationExperience_OnFullTranscription__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Linq_Enumerable_OrderBy<MarkToMarkAdjustmentRecord,_uint>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Data_XDRSchema_ParseDataType__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Xml_Linq_XDeclaration__ctor__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Xml_Linq_XDocument_GetFirstNode<XElement>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<WitResponseNode>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    DefaultContractResolver_CreateContract_m856C42DFFC8BC7407B4C9D2F8CC8F8D165CE8678::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar7 = ReflectionUtils_EnsureNotByRefType_m3B51B685934BE45B98A96C9AF84E0FB56506123F(param_2,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  bVar6 = DefaultContractResolver_IsJsonPrimitiveType_m1FCBA966577856D7FC5CEF79B7B9E0B3F7747694
                    (uVar7,0);
  if ((bVar6 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pIVar8 = (Il2CppObject *)
             ReflectionUtils_EnsureNotNullableType_mF2B1550F38848A01AAAFDAD0755C37ACA6530ED6
                       (uVar7,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    pIVar9 = (Il2CppObject *)
             JsonTypeReflector_GetCachedAttribute_TisJsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7_m6040405C1A64C0E8D0CF522C2E6F7EE47C8FC031
                       (pIVar8,*(MethodInfo **)
                                Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<WitResponseNode>__
                       );
    lVar10 = IsInstSealed(pIVar9,*(Il2CppClass **)
                                  Method_System_Xml_Linq_XDocument_GetFirstNode<XElement>__);
    if (lVar10 == 0) {
      lVar10 = IsInstSealed(pIVar9,*(Il2CppClass **)Method_System_Data_XDRSchema_ParseDataType__);
      if (lVar10 == 0) {
        lVar10 = IsInstSealed(pIVar9,*(Il2CppClass **)Method_System_Xml_Linq_XDeclaration__ctor__);
        if (lVar10 == 0) {
          uVar7 = *(undefined8 *)puVar5;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          uVar7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar7);
          bVar6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(pIVar8,uVar7,0);
          if ((bVar6 & 1) == 0) {
            uVar7 = *(undefined8 *)puVar5;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
            pTVar11 = (Type_t *)
                      Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar7,0);
            NullCheck(pIVar8);
            bVar6 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x17,pIVar8,pTVar11);
            if ((bVar6 & 1) == 0) {
              bVar6 = CollectionUtils_IsDictionaryType_m6E8536FFCDA481FB20EC0C4B8746028004A1BC6E
                                (pIVar8,0);
              if ((bVar6 & 1) != 0) {
                uVar7 = VirtualFuncInvoker1<JsonDictionaryContract_t49C7DBCBDE647BADAD67E786D9EB328F52FF97F1*,Type_t*>
                        ::Invoke(0xb,param_1,param_2);
                return uVar7;
              }
              uVar7 = *(undefined8 *)
                       Method_Oculus_Voice_Dictation_AppDictationExperience_OnFullTranscription__;
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
              pIVar9 = (Il2CppObject *)
                       Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar7,0);
              NullCheck(pIVar9);
              bVar6 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,pIVar9,(Type_t *)pIVar8);
              if ((bVar6 & 1) != 0) {
                uVar7 = VirtualFuncInvoker1<JsonArrayContract_tC43D0F0F57E8E29E041F9679010D7824E2C3AF90*,Type_t*>
                        ::Invoke(0xc,param_1,param_2);
                return uVar7;
              }
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
              bVar6 = DefaultContractResolver_CanConvertToString_mD9989BD88FFA5A954234A17DEEADB8455BC823ED
                                (pIVar8,0);
              if ((bVar6 & 1) != 0) {
                uVar7 = VirtualFuncInvoker1<JsonStringContract_tE5349A44AFD07A3EB6D05DC6F623AEFBA1A37268*,Type_t*>
                        ::Invoke(0x11,param_1,param_2);
                return uVar7;
              }
              bVar6 = DefaultContractResolver_get_IgnoreSerializableInterface_m5B7D581C6BB2FE170BC492F9C66B304AF8093F4B_inline
                                ((DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD
                                  *)param_1,(MethodInfo *)0x0);
              if ((bVar6 & 1) == 0) {
                uVar7 = *(undefined8 *)
                         Method_System_Linq_Enumerable_OrderBy<MarkToMarkAdjustmentRecord,_uint>__;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
                pIVar9 = (Il2CppObject *)
                         Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar7,0);
                NullCheck(pIVar9);
                bVar6 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,pIVar9,(Type_t *)pIVar8);
                if ((bVar6 & 1) != 0) {
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                  bVar6 = JsonTypeReflector_IsSerializable_mFAC5555198A47264BEBA2B23BBA153A5C15AA80C
                                    (pIVar8,0);
                  if ((bVar6 & 1) != 0) {
                    uVar7 = VirtualFuncInvoker1<JsonISerializableContract_tF211386C51292464AAB5B3F0B452C58B91CFE247*,Type_t*>
                            ::Invoke(0xf,param_1,param_2);
                    return uVar7;
                  }
                }
              }
              uVar7 = *(undefined8 *)Method_System_Data_XDRSchema_IsTextOnlyContent__;
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
              pIVar9 = (Il2CppObject *)
                       Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar7,0);
              NullCheck(pIVar9);
              bVar6 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,pIVar9,(Type_t *)pIVar8);
              if ((bVar6 & 1) == 0) {
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
                bVar6 = DefaultContractResolver_IsIConvertible_mAD611B13EC99D605790E7175312BC468E87497C0
                                  (pIVar8,0);
                if ((bVar6 & 1) == 0) {
                  uVar7 = VirtualFuncInvoker1<JsonObjectContract_tFB5A615E22891D84348260AE06D7B31D9A4F62D3*,Type_t*>
                          ::Invoke(7,param_1,param_2);
                  return uVar7;
                }
                uVar7 = VirtualFuncInvoker1<JsonPrimitiveContract_tB6193D2574BA2547AF433EC7DBA5F1B0D5BBC27E*,Type_t*>
                        ::Invoke(0xd,param_1,(Type_t *)pIVar8);
                return uVar7;
              }
              uVar7 = VirtualFuncInvoker1<JsonDynamicContract_tBC6579B25A72AA016EAB86A685912C5684C99344*,Type_t*>
                      ::Invoke(0x10,param_1,param_2);
              return uVar7;
            }
          }
          uStack_8 = VirtualFuncInvoker1<JsonLinqContract_tC18AAA44BFBAFF49E6AEAF55A246EF98E767C7C8*,Type_t*>
                     ::Invoke(0xe,param_1,param_2);
        }
        else {
          uStack_8 = VirtualFuncInvoker1<JsonDictionaryContract_t49C7DBCBDE647BADAD67E786D9EB328F52FF97F1*,Type_t*>
                     ::Invoke(0xb,param_1,param_2);
        }
      }
      else {
        uStack_8 = VirtualFuncInvoker1<JsonArrayContract_tC43D0F0F57E8E29E041F9679010D7824E2C3AF90*,Type_t*>
                   ::Invoke(0xc,param_1,param_2);
      }
    }
    else {
      uStack_8 = VirtualFuncInvoker1<JsonObjectContract_tFB5A615E22891D84348260AE06D7B31D9A4F62D3*,Type_t*>
                 ::Invoke(7,param_1,param_2);
    }
  }
  else {
    uStack_8 = VirtualFuncInvoker1<JsonPrimitiveContract_tB6193D2574BA2547AF433EC7DBA5F1B0D5BBC27E*,Type_t*>
               ::Invoke(0xd,param_1,param_2);
  }
  return uStack_8;
}


