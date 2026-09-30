/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaValidator$$ValidateAtomicValue
ENTRY_POINT: 053e1fbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


bool System_Xml_Schema_XmlSchemaValidator__ValidateAtomicValue(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x4e8));
  FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrUInt64_TypeInfo);
  FUN_02b3c81c(System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumerator_TypeInfo
              );
  FUN_02b3c81c(
              System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_TypeInfo
              );
  FUN_02b3c81c(Unity_XR_OpenXR_Features_PICOSupport_PICOScreenFade_<ScreenFade>d__17_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo);
  FUN_02b3c81c(Mono_Security_X509_PKCS12_DeriveBytes_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo);
  FUN_02b3c81c(OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo);
  FUN_02b3c81c(Mono_Security_PKCS7_ContentInfo_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo);
  FUN_02b3c81c(Mono_Security_PKCS7_EncryptedData_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo);
  FUN_02b3c81c(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
  FUN_02b3c81c(UnityEngine_InputSystem_LowLevel_GamepadButton_var);
  FUN_02b3c81c(OVRPlugin_OVRP_1_79_0_TypeInfo);
  FUN_02b3c81c(Mono_Security_PKCS7_SignedData_TypeInfo);
  FUN_02b3c81c(Mono_Security_PKCS7_SignerInfo_TypeInfo);
  FUN_02b3c81c(Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo);
  FUN_02b3c81c(Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo);
  FUN_02b3c81c(Unity_XR_PXR_PXR_MixedReality_<>c_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xa2f) = 1;
  *unaff_x19 = 0;
  thunk_FUN_02bb0e9c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
LAB_053e32fc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = thunk_FUN_04c08854();
  lVar1 = *unaff_x22;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) goto LAB_053e32fc;
    uVar2 = thunk_FUN_04c08854();
    lVar1 = *unaff_x22;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar1 = *unaff_x22;
      }
      if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) goto LAB_053e32fc;
      uVar2 = thunk_FUN_04c08854();
      if ((uVar2 & 1) == 0) {
        uVar2 = thunk_FUN_04c08854();
        if ((uVar2 & 1) == 0) goto LAB_053e313c;
        uVar2 = thunk_FUN_04c08854();
        if ((uVar2 & 1) == 0) {
          uVar2 = thunk_FUN_04c08854();
          if ((uVar2 & 1) == 0) goto LAB_053e313c;
          lVar1 = *(long *)(PTR_DAT_06312310 + 0xe0);
          puVar4 = (undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo;
        }
        else {
          lVar1 = *(long *)(PTR_DAT_06312310 + 0xe0);
          puVar4 = (undefined8 *)UnityEngine_InputSystem_LowLevel_GamepadButton_var;
        }
        uVar3 = *puVar4;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar3 = FUN_04d8a7b0(uVar3,0);
        lVar1 = thunk_FUN_02b79644(*(undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
        FUN_053fac18(lVar1,uVar3,0);
      }
      else {
        lVar1 = *unaff_x22;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar1 = *unaff_x22;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x68);
        if (lVar1 == 0) goto LAB_053e32fc;
        uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
        if ((uVar2 & 1) == 0) {
          lVar1 = *unaff_x22;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar1 = *unaff_x22;
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xf8);
          if (lVar1 == 0) goto LAB_053e32fc;
          uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
          if ((uVar2 & 1) == 0) goto LAB_053e313c;
          lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo);
          FUN_053f7cb8(lVar1,0);
        }
        else {
          lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo
                                    );
          FUN_053f49f8(lVar1,0);
        }
      }
    }
    else {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar1 = *unaff_x22;
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xf0);
      if (lVar1 == 0) goto LAB_053e32fc;
      uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
      if ((uVar2 & 1) == 0) {
        lVar1 = *unaff_x22;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar1 = *unaff_x22;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xf8);
        if (lVar1 == 0) goto LAB_053e32fc;
        uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
        if ((uVar2 & 1) == 0) {
          lVar1 = *unaff_x22;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar1 = *unaff_x22;
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x68);
          if (lVar1 == 0) goto LAB_053e32fc;
          uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
          if ((uVar2 & 1) == 0) {
            uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                        Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo);
            if ((uVar2 & 1) == 0) goto LAB_053e313c;
            lVar1 = *(long *)(PTR_DAT_06312310 + 0xa0);
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar3 = FUN_04d8a7b0(lVar1 + 0x20,0);
            lVar1 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_ColorLutHandler_TypeInfo);
            FUN_053d1970(lVar1,uVar3,0);
          }
          else {
            lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                        UnityEngine_Rendering_OcclusionCullingCommon_ShaderIDs_TypeInfo
                                      );
            FUN_053f47b0(lVar1,0);
          }
        }
        else {
          lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      Oculus_Interaction_Input_OneEuroFilter_LowPassFilter_TypeInfo)
          ;
          FUN_053f7a10(lVar1,0);
        }
      }
      else {
        lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                    UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo
                                  );
        FUN_053f7704(lVar1,0);
      }
    }
  }
  else {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar1 = *unaff_x22;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x70);
    if (lVar1 == 0) goto LAB_053e32fc;
    uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
    if ((uVar2 & 1) == 0) {
      lVar1 = *unaff_x22;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar1 = *unaff_x22;
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x78);
      if (lVar1 == 0) goto LAB_053e32fc;
      uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
      if ((uVar2 & 1) == 0) {
        lVar1 = *unaff_x22;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar1 = *unaff_x22;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x80);
        if (lVar1 == 0) goto LAB_053e32fc;
        uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
        if ((uVar2 & 1) == 0) {
          lVar1 = *unaff_x22;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar1 = *unaff_x22;
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x88);
          if (lVar1 == 0) goto LAB_053e32fc;
          uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
          if ((uVar2 & 1) == 0) {
            lVar1 = *unaff_x22;
            if (*(int *)(lVar1 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar1 = *unaff_x22;
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x90);
            if (lVar1 == 0) goto LAB_053e32fc;
            uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
            if ((uVar2 & 1) == 0) {
              lVar1 = *unaff_x22;
              if (*(int *)(lVar1 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar1 = *unaff_x22;
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x98);
              if (lVar1 == 0) goto LAB_053e32fc;
              uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
              if ((uVar2 & 1) == 0) {
                lVar1 = *unaff_x22;
                if (*(int *)(lVar1 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar1 = *unaff_x22;
                }
                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xa0);
                if (lVar1 == 0) goto LAB_053e32fc;
                uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                if ((uVar2 & 1) == 0) {
                  lVar1 = *unaff_x22;
                  if (*(int *)(lVar1 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar1 = *unaff_x22;
                  }
                  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xa8);
                  if (lVar1 == 0) goto LAB_053e32fc;
                  uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                  if ((uVar2 & 1) == 0) {
                    lVar1 = *unaff_x22;
                    if (*(int *)(lVar1 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar1 = *unaff_x22;
                    }
                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x158);
                    if (lVar1 == 0) goto LAB_053e32fc;
                    uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                    if ((uVar2 & 1) == 0) {
                      lVar1 = *unaff_x22;
                      if (*(int *)(lVar1 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar1 = *unaff_x22;
                      }
                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x160);
                      if (lVar1 == 0) goto LAB_053e32fc;
                      uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                      if ((uVar2 & 1) == 0) {
                        lVar1 = *unaff_x22;
                        if (*(int *)(lVar1 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          lVar1 = *unaff_x22;
                        }
                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x168);
                        if (lVar1 == 0) goto LAB_053e32fc;
                        uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                        if ((uVar2 & 1) == 0) {
                          lVar1 = *unaff_x22;
                          if (*(int *)(lVar1 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar1 = *unaff_x22;
                          }
                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x170);
                          if (lVar1 == 0) goto LAB_053e32fc;
                          uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                          if ((uVar2 & 1) == 0) {
                            lVar1 = *unaff_x22;
                            if (*(int *)(lVar1 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              lVar1 = *unaff_x22;
                            }
                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x178);
                            if (lVar1 == 0) goto LAB_053e32fc;
                            uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                            if ((uVar2 & 1) == 0) {
                              lVar1 = *unaff_x22;
                              if (*(int *)(lVar1 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                                lVar1 = *unaff_x22;
                              }
                              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xb0);
                              if (lVar1 == 0) goto LAB_053e32fc;
                              uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                              if ((uVar2 & 1) == 0) {
                                lVar1 = *unaff_x22;
                                if (*(int *)(lVar1 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                  lVar1 = *unaff_x22;
                                }
                                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xb8);
                                if (lVar1 == 0) goto LAB_053e32fc;
                                uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                                if ((uVar2 & 1) == 0) {
                                  lVar1 = *unaff_x22;
                                  if (*(int *)(lVar1 + 0xe4) == 0) {
                                    thunk_FUN_02b9ad44();
                                    lVar1 = *unaff_x22;
                                  }
                                  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xc0);
                                  if (lVar1 == 0) goto LAB_053e32fc;
                                  uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                                  if ((uVar2 & 1) == 0) {
                                    lVar1 = *unaff_x22;
                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                      thunk_FUN_02b9ad44();
                                      lVar1 = *unaff_x22;
                                    }
                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 200);
                                    if (lVar1 == 0) goto LAB_053e32fc;
                                    uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                                    if ((uVar2 & 1) == 0) {
                                      lVar1 = *unaff_x22;
                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                        thunk_FUN_02b9ad44();
                                        lVar1 = *unaff_x22;
                                      }
                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xd0);
                                      if (lVar1 == 0) goto LAB_053e32fc;
                                      uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                                      if ((uVar2 & 1) == 0) {
                                        lVar1 = *unaff_x22;
                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                          thunk_FUN_02b9ad44();
                                          lVar1 = *unaff_x22;
                                        }
                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xd8);
                                        if (lVar1 == 0) goto LAB_053e32fc;
                                        uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                                        if ((uVar2 & 1) == 0) {
                                          lVar1 = *unaff_x22;
                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                            thunk_FUN_02b9ad44();
                                            lVar1 = *unaff_x22;
                                          }
                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x118);
                                          if (lVar1 == 0) goto LAB_053e32fc;
                                          uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18));
                                          if ((uVar2 & 1) == 0) {
                                            lVar1 = *unaff_x22;
                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                              thunk_FUN_02b9ad44();
                                              lVar1 = *unaff_x22;
                                            }
                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x120);
                                            if (lVar1 == 0) goto LAB_053e32fc;
                                            uVar2 = thunk_FUN_04c08854(*(undefined8 *)(lVar1 + 0x18)
                                                                      );
                                            if ((uVar2 & 1) == 0) {
                                              lVar1 = *unaff_x22;
                                              if (*(int *)(lVar1 + 0xe4) == 0) {
                                                thunk_FUN_02b9ad44();
                                                lVar1 = *unaff_x22;
                                              }
                                              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x128);
                                              if (lVar1 == 0) goto LAB_053e32fc;
                                              uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                          (lVar1 + 0x18));
                                              if ((uVar2 & 1) == 0) {
                                                lVar1 = *unaff_x22;
                                                if (*(int *)(lVar1 + 0xe4) == 0) {
                                                  thunk_FUN_02b9ad44();
                                                  lVar1 = *unaff_x22;
                                                }
                                                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x130);
                                                if (lVar1 == 0) goto LAB_053e32fc;
                                                uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                            (lVar1 + 0x18));
                                                if ((uVar2 & 1) == 0) {
                                                  lVar1 = *unaff_x22;
                                                  if (*(int *)(lVar1 + 0xe4) == 0) {
                                                    thunk_FUN_02b9ad44();
                                                    lVar1 = *unaff_x22;
                                                  }
                                                  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x138)
                                                  ;
                                                  if (lVar1 == 0) goto LAB_053e32fc;
                                                  uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                              (lVar1 + 0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x22;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar1 = *unaff_x22;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                     0x140);
                                                    if (lVar1 == 0) goto LAB_053e32fc;
                                                    uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x22;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar1 = *unaff_x22;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0x148);
                                                      if (lVar1 == 0) goto LAB_053e32fc;
                                                      uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x22;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar1 = *unaff_x22;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0x150);
                                                        if (lVar1 == 0) goto LAB_053e32fc;
                                                        uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x22;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar1 = *unaff_x22;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x180);
                                                          if (lVar1 == 0) goto LAB_053e32fc;
                                                          uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x22;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar1 = *unaff_x22;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x188);
                                                            if (lVar1 == 0) goto LAB_053e32fc;
                                                            uVar2 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x22;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar1 = *unaff_x22;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 400)
                                                    ;
                                                    if (lVar1 == 0) goto LAB_053e32fc;
                                                    uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x22;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar1 = *unaff_x22;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0x198);
                                                      if (lVar1 == 0) goto LAB_053e32fc;
                                                      uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x22;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar1 = *unaff_x22;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0x1a0);
                                                        if (lVar1 == 0) goto LAB_053e32fc;
                                                        uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x22;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar1 = *unaff_x22;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x1a8);
                                                          if (lVar1 == 0) goto LAB_053e32fc;
                                                          uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x22;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar1 = *unaff_x22;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x1b0);
                                                            if (lVar1 == 0) goto LAB_053e32fc;
                                                            uVar2 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x22;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar1 = *unaff_x22;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                     0x1b8);
                                                    if (lVar1 == 0) goto LAB_053e32fc;
                                                    uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x22;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar1 = *unaff_x22;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0x1c0);
                                                      if (lVar1 == 0) goto LAB_053e32fc;
                                                      uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x22;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar1 = *unaff_x22;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0x1c8);
                                                        if (lVar1 == 0) goto LAB_053e32fc;
                                                        uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x22;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar1 = *unaff_x22;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x1d0);
                                                          if (lVar1 == 0) goto LAB_053e32fc;
                                                          uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x22;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar1 = *unaff_x22;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x1d8);
                                                            if (lVar1 == 0) goto LAB_053e32fc;
                                                            uVar2 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x22;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar1 = *unaff_x22;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xe0
                                                                     );
                                                    if (lVar1 == 0) goto LAB_053e32fc;
                                                    uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x22;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar1 = *unaff_x22;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0xe8);
                                                      if (lVar1 == 0) goto LAB_053e32fc;
                                                      uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x22;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar1 = *unaff_x22;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0xf0);
                                                        if (lVar1 == 0) goto LAB_053e32fc;
                                                        uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x22;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar1 = *unaff_x22;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x100);
                                                          if (lVar1 == 0) goto LAB_053e32fc;
                                                          uVar2 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x22;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar1 = *unaff_x22;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x108);
                                                            if (lVar1 == 0) goto LAB_053e32fc;
                                                            uVar2 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) goto LAB_053e313c;
                                                  lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo
                                                  );
                                                  FUN_053f7f4c(lVar1,0);
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo
                                                  );
                                                  FUN_053f7d1c(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Mono_Security_PKCS7_SignedData_TypeInfo);
                                                  FUN_053f79ac(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                                                  );
                                                  FUN_053f7370(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Rendering_OcclusionCullingCommon_<>c_TypeInfo
                                                  );
                                                  FUN_053f7144(lVar1,0);
                                                  }
                                                  goto LAB_053e312c;
                                                  }
                                                  }
                                                  lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrUInt16_TypeInfo
                                                  );
                                                  FUN_053f70e0(lVar1,0);
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo
                                                  );
                                                  FUN_053f707c(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo
                                                  );
                                                  FUN_053f7018(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo
                                                  );
                                                  FUN_053f6fb4(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo
                                                  );
                                                  FUN_053f6f50(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                                                  );
                                                  FUN_053f6eec(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo
                                                  );
                                                  FUN_053f6e88(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrUInt32_TypeInfo
                                                  );
                                                  FUN_053f6e24(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo
                                                  );
                                                  FUN_053f6dc0(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Mono_Security_PKCS7_EncryptedData_TypeInfo);
                                                  FUN_053f6d5c(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Unity_XR_OpenXR_Features_PICOSupport_PICOScreenFade_<ScreenFade>d__17_TypeInfo
                                                  );
                                                  FUN_053f6cf8(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                                  );
                                                  FUN_053f6c94(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                                                  );
                                                  FUN_053f6c30(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo)
                                                  ;
                                                  FUN_053f6bcc(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo
                                                  );
                                                  System_Xml_Schema_XmlListConverter___ctor(lVar1,0)
                                                  ;
                                                  }
                                                }
                                                else {
                                                  lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo
                                                  );
                                                  FUN_053f6b04(lVar1,0);
                                                }
                                              }
                                              else {
                                                lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo
                                                  );
                                                FUN_053f6aa0(lVar1,0);
                                              }
                                            }
                                            else {
                                              lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_XR_OpenXR_OpenXRLoaderBase_FeatureLoggingInfo_TypeInfo
                                                  );
                                              FUN_053f6a3c(lVar1,0);
                                            }
                                          }
                                          else {
                                            lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                
                                                  Mono_Security_PKCS7_ContentInfo_TypeInfo);
                                            FUN_053f69d8(lVar1,0);
                                          }
                                        }
                                        else {
                                          lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo
                                                  );
                                          FUN_053f67d4(lVar1,0);
                                        }
                                      }
                                      else {
                                        lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                        
                                                  RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo
                                                  );
                                        FUN_053f6564(lVar1,0);
                                      }
                                    }
                                    else {
                                      lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                    
                                                  RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_TypeInfo
                                                  );
                                      FUN_053f62c4(lVar1,0);
                                    }
                                  }
                                  else {
                                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                
                                                  Internal_Cryptography_OidLookup_<>c_TypeInfo);
                                    FUN_053f60c8(lVar1,0);
                                  }
                                }
                                else {
                                  lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_Input_OneEuroFilter_<>c_TypeInfo
                                                  );
                                  FUN_053f5ecc(lVar1,0);
                                }
                              }
                              else {
                                lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo
                                                  );
                                FUN_053f5cb4(lVar1,0);
                              }
                            }
                            else {
                              lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                    
                                                  System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumerator_TypeInfo
                                                  );
                              FUN_053f5c50(lVar1,0);
                            }
                          }
                          else {
                            lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                
                                                  System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_TypeInfo
                                                  );
                            FUN_053f5bec(lVar1,0);
                          }
                        }
                        else {
                          lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                            
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrUInt64_TypeInfo
                                                  );
                          FUN_053f5b88(lVar1,0);
                        }
                      }
                      else {
                        lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                    Mono_Security_X509_PKCS12_DeriveBytes_TypeInfo);
                        FUN_053f5b24(lVar1,0);
                      }
                    }
                    else {
                      lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt32_TypeInfo
                                                );
                      FUN_053f5ac0(lVar1,0);
                    }
                  }
                  else {
                    lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                                Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo
                                              );
                    FUN_053f588c(lVar1,0);
                  }
                }
                else {
                  lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                              UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo);
                  FUN_053f5684(lVar1,0);
                }
              }
              else {
                lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                            Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo
                                          );
                FUN_053f5480(lVar1,0);
              }
            }
            else {
              lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                          UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo
                                        );
              FUN_053f5278(lVar1,0);
            }
          }
          else {
            lVar1 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
            FUN_053f5070(lVar1,0);
          }
        }
        else {
          lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo
                                    );
          FUN_053f4e68(lVar1,0);
        }
      }
      else {
        lVar1 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo
                                  );
        FUN_053f4c60(lVar1,0);
      }
    }
    else {
      lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                  UnityEngine_Rendering_OccluderContext_ShaderIDs_TypeInfo);
      FUN_053f4a5c(lVar1,0);
    }
  }
LAB_053e312c:
  *unaff_x19 = lVar1;
  thunk_FUN_02bb0e9c();
LAB_053e313c:
  return *unaff_x19 != 0;
}


