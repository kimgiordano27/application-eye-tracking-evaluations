/*
FUNCTION_NAME: FUN_053e1e24
ENTRY_POINT: 053e1e24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 149
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool FUN_053e1e24(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = OVRMicrogesturesSample_<ShowGestureLabel>d__26_TypeInfo;
  if ((DAT_066d0a2f & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_OccluderContext_ShaderIDs_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_OcclusionCullingCommon_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_OcclusionCullingCommon_ShaderIDs_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_ColorLutHandler_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRLoaderBase_FeatureLoggingInfo_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_TypeInfo);
    FUN_02b3c81c(OVRMicrogesturesSample_<ShowGestureLabel>d__26_TypeInfo);
    FUN_02b3c81c(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo
                );
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_<>c_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_LowPassFilter_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrInt32_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrUInt16_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrUInt32_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_OrInstruction_OrUInt64_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumerator_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_TypeInfo
                );
    FUN_02b3c81c(Unity_XR_OpenXR_Features_PICOSupport_PICOScreenFade_<ScreenFade>d__17_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                );
    FUN_02b3c81c(Mono_Security_X509_PKCS12_DeriveBytes_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo
                );
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
    DAT_066d0a2f = 1;
  }
  *param_3 = 0;
  thunk_FUN_02bb0e9c(param_3,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_053e32fc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = thunk_FUN_04c08854(param_2,*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = *(long *)puVar1;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 == 0) goto LAB_053e32fc;
    uVar3 = thunk_FUN_04c08854(param_2,*(undefined8 *)(lVar2 + 0x18),0);
    lVar2 = *(long *)puVar1;
    if ((uVar3 & 1) == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x1e0);
      if (lVar2 == 0) goto LAB_053e32fc;
      uVar3 = thunk_FUN_04c08854(param_2,*(undefined8 *)(lVar2 + 0x18),0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_04c08854(param_2,*(undefined8 *)Unity_XR_PXR_PXR_MixedReality_<>c_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) goto LAB_053e313c;
        uVar3 = thunk_FUN_04c08854(param_1,*(undefined8 *)
                                            Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = thunk_FUN_04c08854(param_1,*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,
                                     0);
          if ((uVar3 & 1) == 0) goto LAB_053e313c;
          lVar2 = *(long *)(PTR_DAT_06312310 + 0xe0);
          puVar5 = (undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo;
        }
        else {
          lVar2 = *(long *)(PTR_DAT_06312310 + 0xe0);
          puVar5 = (undefined8 *)UnityEngine_InputSystem_LowLevel_GamepadButton_var;
        }
        uVar4 = *puVar5;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar4 = FUN_04d8a7b0(uVar4,0);
        lVar2 = thunk_FUN_02b79644(*(undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
        FUN_053fac18(lVar2,uVar4,0);
      }
      else {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
        if (lVar2 == 0) goto LAB_053e32fc;
        uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xf8);
          if (lVar2 == 0) goto LAB_053e32fc;
          uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
          if ((uVar3 & 1) == 0) goto LAB_053e313c;
          lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo);
          FUN_053f7cb8(lVar2,0);
        }
        else {
          lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo
                                    );
          FUN_053f49f8(lVar2,0);
        }
      }
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xf0);
      if (lVar2 == 0) goto LAB_053e32fc;
      uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xf8);
        if (lVar2 == 0) goto LAB_053e32fc;
        uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
          if (lVar2 == 0) goto LAB_053e32fc;
          uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                        Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo,
                                       param_1,0);
            if ((uVar3 & 1) == 0) goto LAB_053e313c;
            lVar2 = *(long *)(PTR_DAT_06312310 + 0xa0);
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar4 = FUN_04d8a7b0(lVar2 + 0x20,0);
            lVar2 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_ColorLutHandler_TypeInfo);
            FUN_053d1970(lVar2,uVar4,0);
          }
          else {
            lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                        UnityEngine_Rendering_OcclusionCullingCommon_ShaderIDs_TypeInfo
                                      );
            FUN_053f47b0(lVar2,0);
          }
        }
        else {
          lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                      Oculus_Interaction_Input_OneEuroFilter_LowPassFilter_TypeInfo)
          ;
          FUN_053f7a10(lVar2,0);
        }
      }
      else {
        lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                    UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo
                                  );
        FUN_053f7704(lVar2,0);
      }
    }
  }
  else {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x70);
    if (lVar2 == 0) goto LAB_053e32fc;
    uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x78);
      if (lVar2 == 0) goto LAB_053e32fc;
      uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x80);
        if (lVar2 == 0) goto LAB_053e32fc;
        uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x88);
          if (lVar2 == 0) goto LAB_053e32fc;
          uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
          if ((uVar3 & 1) == 0) {
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar2 = *(long *)puVar1;
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x90);
            if (lVar2 == 0) goto LAB_053e32fc;
            uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
            if ((uVar3 & 1) == 0) {
              lVar2 = *(long *)puVar1;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar2 = *(long *)puVar1;
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x98);
              if (lVar2 == 0) goto LAB_053e32fc;
              uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
              if ((uVar3 & 1) == 0) {
                lVar2 = *(long *)puVar1;
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar2 = *(long *)puVar1;
                }
                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa0);
                if (lVar2 == 0) goto LAB_053e32fc;
                uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                if ((uVar3 & 1) == 0) {
                  lVar2 = *(long *)puVar1;
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar2 = *(long *)puVar1;
                  }
                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa8);
                  if (lVar2 == 0) goto LAB_053e32fc;
                  uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                  if ((uVar3 & 1) == 0) {
                    lVar2 = *(long *)puVar1;
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar2 = *(long *)puVar1;
                    }
                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x158);
                    if (lVar2 == 0) goto LAB_053e32fc;
                    uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                    if ((uVar3 & 1) == 0) {
                      lVar2 = *(long *)puVar1;
                      if (*(int *)(lVar2 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar2 = *(long *)puVar1;
                      }
                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x160);
                      if (lVar2 == 0) goto LAB_053e32fc;
                      uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                      if ((uVar3 & 1) == 0) {
                        lVar2 = *(long *)puVar1;
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          lVar2 = *(long *)puVar1;
                        }
                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x168);
                        if (lVar2 == 0) goto LAB_053e32fc;
                        uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                        if ((uVar3 & 1) == 0) {
                          lVar2 = *(long *)puVar1;
                          if (*(int *)(lVar2 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar2 = *(long *)puVar1;
                          }
                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x170);
                          if (lVar2 == 0) goto LAB_053e32fc;
                          uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                          if ((uVar3 & 1) == 0) {
                            lVar2 = *(long *)puVar1;
                            if (*(int *)(lVar2 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              lVar2 = *(long *)puVar1;
                            }
                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x178);
                            if (lVar2 == 0) goto LAB_053e32fc;
                            uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                            if ((uVar3 & 1) == 0) {
                              lVar2 = *(long *)puVar1;
                              if (*(int *)(lVar2 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                                lVar2 = *(long *)puVar1;
                              }
                              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb0);
                              if (lVar2 == 0) goto LAB_053e32fc;
                              uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                              if ((uVar3 & 1) == 0) {
                                lVar2 = *(long *)puVar1;
                                if (*(int *)(lVar2 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                  lVar2 = *(long *)puVar1;
                                }
                                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb8);
                                if (lVar2 == 0) goto LAB_053e32fc;
                                uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                                if ((uVar3 & 1) == 0) {
                                  lVar2 = *(long *)puVar1;
                                  if (*(int *)(lVar2 + 0xe4) == 0) {
                                    thunk_FUN_02b9ad44();
                                    lVar2 = *(long *)puVar1;
                                  }
                                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xc0);
                                  if (lVar2 == 0) goto LAB_053e32fc;
                                  uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1,0
                                                            );
                                  if ((uVar3 & 1) == 0) {
                                    lVar2 = *(long *)puVar1;
                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                      thunk_FUN_02b9ad44();
                                      lVar2 = *(long *)puVar1;
                                    }
                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 200);
                                    if (lVar2 == 0) goto LAB_053e32fc;
                                    uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),param_1
                                                               ,0);
                                    if ((uVar3 & 1) == 0) {
                                      lVar2 = *(long *)puVar1;
                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                        thunk_FUN_02b9ad44();
                                        lVar2 = *(long *)puVar1;
                                      }
                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xd0);
                                      if (lVar2 == 0) goto LAB_053e32fc;
                                      uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),
                                                                 param_1,0);
                                      if ((uVar3 & 1) == 0) {
                                        lVar2 = *(long *)puVar1;
                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                          thunk_FUN_02b9ad44();
                                          lVar2 = *(long *)puVar1;
                                        }
                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xd8);
                                        if (lVar2 == 0) goto LAB_053e32fc;
                                        uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),
                                                                   param_1,0);
                                        if ((uVar3 & 1) == 0) {
                                          lVar2 = *(long *)puVar1;
                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                            thunk_FUN_02b9ad44();
                                            lVar2 = *(long *)puVar1;
                                          }
                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x118);
                                          if (lVar2 == 0) goto LAB_053e32fc;
                                          uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18),
                                                                     param_1,0);
                                          if ((uVar3 & 1) == 0) {
                                            lVar2 = *(long *)puVar1;
                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                              thunk_FUN_02b9ad44();
                                              lVar2 = *(long *)puVar1;
                                            }
                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x120);
                                            if (lVar2 == 0) goto LAB_053e32fc;
                                            uVar3 = thunk_FUN_04c08854(*(undefined8 *)(lVar2 + 0x18)
                                                                       ,param_1,0);
                                            if ((uVar3 & 1) == 0) {
                                              lVar2 = *(long *)puVar1;
                                              if (*(int *)(lVar2 + 0xe4) == 0) {
                                                thunk_FUN_02b9ad44();
                                                lVar2 = *(long *)puVar1;
                                              }
                                              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x128);
                                              if (lVar2 == 0) goto LAB_053e32fc;
                                              uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                          (lVar2 + 0x18),param_1,0);
                                              if ((uVar3 & 1) == 0) {
                                                lVar2 = *(long *)puVar1;
                                                if (*(int *)(lVar2 + 0xe4) == 0) {
                                                  thunk_FUN_02b9ad44();
                                                  lVar2 = *(long *)puVar1;
                                                }
                                                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x130);
                                                if (lVar2 == 0) goto LAB_053e32fc;
                                                uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                            (lVar2 + 0x18),param_1,0
                                                                          );
                                                if ((uVar3 & 1) == 0) {
                                                  lVar2 = *(long *)puVar1;
                                                  if (*(int *)(lVar2 + 0xe4) == 0) {
                                                    thunk_FUN_02b9ad44();
                                                    lVar2 = *(long *)puVar1;
                                                  }
                                                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x138)
                                                  ;
                                                  if (lVar2 == 0) goto LAB_053e32fc;
                                                  uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                              (lVar2 + 0x18),param_1
                                                                             ,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                     0x140);
                                                    if (lVar2 == 0) goto LAB_053e32fc;
                                                    uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0x148);
                                                      if (lVar2 == 0) goto LAB_053e32fc;
                                                      uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0x150);
                                                        if (lVar2 == 0) goto LAB_053e32fc;
                                                        uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x180);
                                                          if (lVar2 == 0) goto LAB_053e32fc;
                                                          uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x188);
                                                            if (lVar2 == 0) goto LAB_053e32fc;
                                                            uVar3 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 400)
                                                    ;
                                                    if (lVar2 == 0) goto LAB_053e32fc;
                                                    uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0x198);
                                                      if (lVar2 == 0) goto LAB_053e32fc;
                                                      uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0x1a0);
                                                        if (lVar2 == 0) goto LAB_053e32fc;
                                                        uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x1a8);
                                                          if (lVar2 == 0) goto LAB_053e32fc;
                                                          uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x1b0);
                                                            if (lVar2 == 0) goto LAB_053e32fc;
                                                            uVar3 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                     0x1b8);
                                                    if (lVar2 == 0) goto LAB_053e32fc;
                                                    uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0x1c0);
                                                      if (lVar2 == 0) goto LAB_053e32fc;
                                                      uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0x1c8);
                                                        if (lVar2 == 0) goto LAB_053e32fc;
                                                        uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x1d0);
                                                          if (lVar2 == 0) goto LAB_053e32fc;
                                                          uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x1d8);
                                                            if (lVar2 == 0) goto LAB_053e32fc;
                                                            uVar3 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xe0
                                                                     );
                                                    if (lVar2 == 0) goto LAB_053e32fc;
                                                    uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02b9ad44();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0xe8);
                                                      if (lVar2 == 0) goto LAB_053e32fc;
                                                      uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02b9ad44();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0xf0);
                                                        if (lVar2 == 0) goto LAB_053e32fc;
                                                        uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02b9ad44();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x100);
                                                          if (lVar2 == 0) goto LAB_053e32fc;
                                                          uVar3 = thunk_FUN_04c08854(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02b9ad44();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x108);
                                                            if (lVar2 == 0) goto LAB_053e32fc;
                                                            uVar3 = thunk_FUN_04c08854(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) goto LAB_053e313c;
                                                  lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo
                                                  );
                                                  FUN_053f7f4c(lVar2,0);
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo
                                                  );
                                                  FUN_053f7d1c(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Mono_Security_PKCS7_SignedData_TypeInfo);
                                                  FUN_053f79ac(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                                                  );
                                                  FUN_053f7370(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Rendering_OcclusionCullingCommon_<>c_TypeInfo
                                                  );
                                                  FUN_053f7144(lVar2,0);
                                                  }
                                                  goto LAB_053e312c;
                                                  }
                                                  }
                                                  lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrUInt16_TypeInfo
                                                  );
                                                  FUN_053f70e0(lVar2,0);
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo
                                                  );
                                                  FUN_053f707c(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo
                                                  );
                                                  FUN_053f7018(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo
                                                  );
                                                  FUN_053f6fb4(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo
                                                  );
                                                  FUN_053f6f50(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                                                  );
                                                  FUN_053f6eec(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo
                                                  );
                                                  FUN_053f6e88(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrUInt32_TypeInfo
                                                  );
                                                  FUN_053f6e24(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo
                                                  );
                                                  FUN_053f6dc0(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Mono_Security_PKCS7_EncryptedData_TypeInfo);
                                                  FUN_053f6d5c(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Unity_XR_OpenXR_Features_PICOSupport_PICOScreenFade_<ScreenFade>d__17_TypeInfo
                                                  );
                                                  FUN_053f6cf8(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                                  );
                                                  FUN_053f6c94(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                                                  );
                                                  FUN_053f6c30(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo)
                                                  ;
                                                  FUN_053f6bcc(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo
                                                  );
                                                  System_Xml_Schema_XmlListConverter___ctor(lVar2,0)
                                                  ;
                                                  }
                                                }
                                                else {
                                                  lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo
                                                  );
                                                  FUN_053f6b04(lVar2,0);
                                                }
                                              }
                                              else {
                                                lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo
                                                  );
                                                FUN_053f6aa0(lVar2,0);
                                              }
                                            }
                                            else {
                                              lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_XR_OpenXR_OpenXRLoaderBase_FeatureLoggingInfo_TypeInfo
                                                  );
                                              FUN_053f6a3c(lVar2,0);
                                            }
                                          }
                                          else {
                                            lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                
                                                  Mono_Security_PKCS7_ContentInfo_TypeInfo);
                                            FUN_053f69d8(lVar2,0);
                                          }
                                        }
                                        else {
                                          lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo
                                                  );
                                          FUN_053f67d4(lVar2,0);
                                        }
                                      }
                                      else {
                                        lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                        
                                                  RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo
                                                  );
                                        FUN_053f6564(lVar2,0);
                                      }
                                    }
                                    else {
                                      lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                    
                                                  RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_TypeInfo
                                                  );
                                      FUN_053f62c4(lVar2,0);
                                    }
                                  }
                                  else {
                                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                
                                                  Internal_Cryptography_OidLookup_<>c_TypeInfo);
                                    FUN_053f60c8(lVar2,0);
                                  }
                                }
                                else {
                                  lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_Input_OneEuroFilter_<>c_TypeInfo
                                                  );
                                  FUN_053f5ecc(lVar2,0);
                                }
                              }
                              else {
                                lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo
                                                  );
                                FUN_053f5cb4(lVar2,0);
                              }
                            }
                            else {
                              lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                    
                                                  System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumerator_TypeInfo
                                                  );
                              FUN_053f5c50(lVar2,0);
                            }
                          }
                          else {
                            lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                
                                                  System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_TypeInfo
                                                  );
                            FUN_053f5bec(lVar2,0);
                          }
                        }
                        else {
                          lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                            
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrUInt64_TypeInfo
                                                  );
                          FUN_053f5b88(lVar2,0);
                        }
                      }
                      else {
                        lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                    Mono_Security_X509_PKCS12_DeriveBytes_TypeInfo);
                        FUN_053f5b24(lVar2,0);
                      }
                    }
                    else {
                      lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt32_TypeInfo
                                                );
                      FUN_053f5ac0(lVar2,0);
                    }
                  }
                  else {
                    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                                Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo
                                              );
                    FUN_053f588c(lVar2,0);
                  }
                }
                else {
                  lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                              UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo);
                  FUN_053f5684(lVar2,0);
                }
              }
              else {
                lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                            Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo
                                          );
                FUN_053f5480(lVar2,0);
              }
            }
            else {
              lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                          UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo
                                        );
              FUN_053f5278(lVar2,0);
            }
          }
          else {
            lVar2 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
            FUN_053f5070(lVar2,0);
          }
        }
        else {
          lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo
                                    );
          FUN_053f4e68(lVar2,0);
        }
      }
      else {
        lVar2 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo
                                  );
        FUN_053f4c60(lVar2,0);
      }
    }
    else {
      lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                  UnityEngine_Rendering_OccluderContext_ShaderIDs_TypeInfo);
      FUN_053f4a5c(lVar2,0);
    }
  }
LAB_053e312c:
  *param_3 = lVar2;
  thunk_FUN_02bb0e9c(param_3,lVar2);
LAB_053e313c:
  return *param_3 != 0;
}


