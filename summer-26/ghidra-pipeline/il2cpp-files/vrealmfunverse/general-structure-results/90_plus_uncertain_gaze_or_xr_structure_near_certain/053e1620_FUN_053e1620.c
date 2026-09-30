/*
FUNCTION_NAME: FUN_053e1620
ENTRY_POINT: 053e1620
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


bool FUN_053e1620(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_066d0a2e & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Rendering_OccluderContext_ShaderIDs_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_OcclusionCullingCommon_<>c_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631e400);
    FUN_02b3c81c(UnityEngine_Rendering_OcclusionCullingCommon_ShaderIDs_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_ColorLutHandler_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_TypeInfo);
    FUN_02b3c81c(OVRMicrogesturesSample_<ShowGestureLabel>d__26_TypeInfo);
    FUN_02b3c81c(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_<>c_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_LowPassFilter_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06336f88);
    FUN_02b3c81c(Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                );
    FUN_02b3c81c(Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo
                );
    FUN_02b3c81c(OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632ceb8);
    FUN_02b3c81c(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06336f98);
    FUN_02b3c81c(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_LowLevel_GamepadButton_var);
    FUN_02b3c81c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    DAT_066d0a2e = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = (**(code **)(*param_1 + 0x598))(param_1,*(undefined8 *)(*param_1 + 0x5a0));
  *param_2 = 0;
  thunk_FUN_02bb0e9c(param_2,0);
  puVar1 = PTR_DAT_06312310;
  if ((uVar3 & 1) != 0) {
    return false;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_04d96104(param_1,0);
  switch(uVar2) {
  case 3:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_Rendering_OccluderContext_ShaderIDs_TypeInfo);
    FUN_053f4a5c(lVar4,0);
    break;
  case 4:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_Rendering_OcclusionCullingCommon_ShaderIDs_TypeInfo);
    FUN_053f47b0(lVar4,0);
    break;
  case 5:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
    FUN_053f4c60(lVar4,0);
    break;
  case 6:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo);
    FUN_053f4e68(lVar4,0);
    break;
  case 7:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
    FUN_053f5070(lVar4,0);
    break;
  case 8:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo
                              );
    FUN_053f5278(lVar4,0);
    break;
  case 9:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo);
    FUN_053f5480(lVar4,0);
    break;
  case 10:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo);
    FUN_053f5684(lVar4,0);
    break;
  case 0xb:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo
                              );
    FUN_053f588c(lVar4,0);
    break;
  case 0xc:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo
                              );
    FUN_053f5cb4(lVar4,0);
    break;
  case 0xd:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)Oculus_Interaction_Input_OneEuroFilter_<>c_TypeInfo);
    FUN_053f5ecc(lVar4,0);
    break;
  case 0xe:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)Internal_Cryptography_OidLookup_<>c_TypeInfo);
    FUN_053f60c8(lVar4,0);
    break;
  case 0xf:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_TypeInfo);
    FUN_053f62c4(lVar4,0);
    break;
  case 0x10:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
    FUN_053f6564(lVar4,0);
    break;
  default:
    uVar5 = *(undefined8 *)PTR_DAT_0631e400;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_04d8a7b0(uVar5,0);
    uVar3 = FUN_04d938a0(param_1,uVar5,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(puVar1 + 0x10);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_04d8a7b0(lVar4 + 0x20,0);
      uVar3 = FUN_04d938a0(param_1,uVar5,0);
      if ((uVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_06336f98;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar5 = FUN_04d8a7b0(uVar5,0);
        uVar3 = FUN_04d938a0(param_1,uVar5,0);
        if ((uVar3 & 1) == 0) {
          uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar5 = FUN_04d8a7b0(uVar5,0);
          uVar3 = FUN_04d938a0(param_1,uVar5,0);
          if ((uVar3 & 1) == 0) {
            uVar5 = *(undefined8 *)PTR_DAT_0632ceb8;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar5 = FUN_04d8a7b0(uVar5,0);
            uVar3 = FUN_04d938a0(param_1,uVar5,0);
            if ((uVar3 & 1) == 0) {
              uVar5 = *(undefined8 *)PTR_DAT_06336f88;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar5 = FUN_04d8a7b0(uVar5,0);
              uVar3 = FUN_04d938a0(param_1,uVar5,0);
              if ((uVar3 & 1) == 0) {
                lVar4 = *(long *)(puVar1 + 0x98);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar5 = FUN_04d8a7b0(lVar4 + 0x20,0);
                uVar3 = FUN_04d938a0(param_1,uVar5,0);
                if ((uVar3 & 1) == 0) {
                  lVar4 = *(long *)(puVar1 + 0x250);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar5 = FUN_04d8a7b0(lVar4 + 0x20,0);
                  uVar3 = FUN_04d938a0(param_1,uVar5,0);
                  if ((uVar3 & 1) == 0) {
                    lVar4 = *(long *)(puVar1 + 0xa0);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar5 = FUN_04d8a7b0(lVar4 + 0x20,0);
                    uVar3 = FUN_04d938a0(param_1,uVar5,0);
                    if ((uVar3 & 1) == 0) {
                      uVar5 = *(undefined8 *)UnityEngine_InputSystem_LowLevel_GamepadButton_var;
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      uVar5 = FUN_04d8a7b0(uVar5,0);
                      uVar3 = FUN_04d938a0(param_1,uVar5,0);
                      if ((uVar3 & 1) == 0) {
                        uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo;
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar5 = FUN_04d8a7b0(uVar5,0);
                        uVar3 = FUN_04d938a0(param_1,uVar5,0);
                        if ((uVar3 & 1) == 0) goto LAB_053e1d10;
                      }
                      lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                  OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
                      FUN_053fac18(lVar4,param_1,0);
                    }
                    else {
                      lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                  OVRPassthroughLayer_ColorLutHandler_TypeInfo);
                      FUN_053d1970(lVar4,param_1,0);
                    }
                    break;
                  }
                }
                puVar1 = OVRMicrogesturesSample_<ShowGestureLabel>d__26_TypeInfo;
                lVar4 = *(long *)OVRMicrogesturesSample_<ShowGestureLabel>d__26_TypeInfo;
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar4 = *(long *)puVar1;
                }
                uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xe8);
                uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
                lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                            UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo
                                          );
                FUN_053f9afc(lVar4,param_1,uVar5,uVar6,0);
              }
              else {
                lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                            Oculus_Interaction_Input_OneEuroFilter_LowPassFilter_TypeInfo
                                          );
                FUN_053f7a10(lVar4,0);
              }
            }
            else {
              lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                          UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo
                                        );
              FUN_053f7704(lVar4,0);
            }
          }
          else {
            lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                        Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo
                                      );
            FUN_053f7f4c(lVar4,0);
          }
        }
        else {
          lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo
                                    );
          FUN_053f7d1c(lVar4,0);
        }
      }
      else {
        lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                    Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                                  );
        FUN_053f7370(lVar4,0);
      }
    }
    else {
      lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                  UnityEngine_Rendering_OcclusionCullingCommon_<>c_TypeInfo);
      FUN_053f7144(lVar4,0);
    }
    break;
  case 0x12:
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo);
    FUN_053f67d4(lVar4,0);
  }
  *param_2 = lVar4;
  thunk_FUN_02bb0e9c(param_2,lVar4);
LAB_053e1d10:
  return *param_2 != 0;
}


