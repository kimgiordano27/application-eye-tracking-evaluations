/*
FUNCTION_NAME: FUN_05a21cd0
ENTRY_POINT: 05a21cd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_14;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool FUN_05a21cd0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = UnityEngine_UIElements_TransitionEndEvent_<>c_TypeInfo;
  if ((DAT_06dc185a & 1) == 0) {
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_XRBaseController_HapticImpulseChannel_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_<>c_TypeInfo);
    FUN_02d965b8(CodeMonkey_Utils_World_Sprite_<>c__DisplayClass6_0_TypeInfo);
    FUN_02d965b8(Unity_Services_DistributedAuthority_WrappedDistributedAuthorityService_<>c_TypeInfo
                );
    FUN_02d965b8(
                Unity_Services_DistributedAuthority_WrappedDistributedAuthorityService_<>c__DisplayClass14_0_TypeInfo
                );
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_LogicalInputState_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Lobbies_Internal_WrappedLobbyService_<>c_TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Internal_WrappedLobbyService_<>c__DisplayClass22_0_TypeInfo)
    ;
    FUN_02d965b8(UnityEngine_UIElements_TransitionEndEvent_<>c_TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Internal_WrappedLobbyService_<>c__DisplayClass33_0_TypeInfo)
    ;
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_<>c_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_MovementType_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass14_0_TypeInfo
                );
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder_ButtonBypass_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_XRDebugLineVisualizer_<>c__DisplayClass4_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_XRDebugLineVisualizer_DebugLine_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TransformationMode_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass16_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
                );
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000FE2_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass17_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000FE2_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_000008F8_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Qos_WrappedQosService_<>c_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_000008F8_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_000008F4_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_000008F4_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_000008FA_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_000008FA_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_000008FB_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_000008FB_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Relay_WrappedRelayService_<>c_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_TypeInfo
                );
    FUN_02d965b8(WristWatchButton_<<FadeCanvas>g__Fade_18_0>d_TypeInfo);
    FUN_02d965b8(Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo);
    FUN_02d965b8(
                System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                );
    FUN_02d965b8(System_Xml_Linq_XContainer_<Nodes>d__18_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_TypeInfo);
    FUN_02d965b8(System_Xml_Linq_XContainer_ContentReader_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F65_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(System_Data_XDRSchema_NameType_TypeInfo);
    FUN_02d965b8(System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo);
    FUN_02d965b8(MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d965b8(UnityWebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_CultureInfo>_TypeInfo);
    FUN_02d965b8(Unity_Properties_Internal_Vector2IntPropertyBag_YProperty_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000F66_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000F66_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(XRIDefaultInputActions1_IXRIHMDActions_TypeInfo);
    FUN_02d965b8(XRIDefaultInputActions1_IXRILeftHandActions_TypeInfo);
    DAT_06dc185a = 1;
  }
  *param_3 = 0;
  LeanTween__value(param_3,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_05a231a8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = thunk_FUN_0536b75c(param_2,*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = *(long *)puVar1;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 == 0) goto LAB_05a231a8;
    uVar3 = thunk_FUN_0536b75c(param_2,*(undefined8 *)(lVar2 + 0x18),0);
    lVar2 = *(long *)puVar1;
    if ((uVar3 & 1) == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x1e0);
      if (lVar2 == 0) goto LAB_05a231a8;
      uVar3 = thunk_FUN_0536b75c(param_2,*(undefined8 *)(lVar2 + 0x18),0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_0536b75c(param_2,*(undefined8 *)
                                            XRIDefaultInputActions1_IXRILeftHandActions_TypeInfo,0);
        if ((uVar3 & 1) == 0) goto LAB_05a22fe8;
        uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000F66_PostfixBurstDelegate_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                              UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000F66_BurstDirectCall_TypeInfo
                                     ,0);
          if ((uVar3 & 1) == 0) goto LAB_05a22fe8;
          lVar2 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
          puVar5 = (undefined8 *)Unity_Properties_Internal_Vector2IntPropertyBag_YProperty_TypeInfo;
        }
        else {
          lVar2 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
          puVar5 = (undefined8 *)System_Collections_Generic_Dictionary<string,_CultureInfo>_TypeInfo
          ;
        }
        uVar4 = *puVar5;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_054f73b4(uVar4,0);
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                    UnityWebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo
                                  );
        FUN_05a3ab14(lVar2,uVar4,0);
      }
      else {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
        if (lVar2 == 0) goto LAB_05a231a8;
        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xf8);
          if (lVar2 == 0) goto LAB_05a231a8;
          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
          if ((uVar3 & 1) == 0) goto LAB_05a22fe8;
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_<>c_TypeInfo
                                    );
          FUN_05a37bb4(lVar2,0);
        }
        else {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseController_HapticImpulseChannel_TypeInfo
                                    );
          FUN_05a348f4(lVar2,0);
        }
      }
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xf0);
      if (lVar2 == 0) goto LAB_05a231a8;
      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xf8);
        if (lVar2 == 0) goto LAB_05a231a8;
        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
          if (lVar2 == 0) goto LAB_05a231a8;
          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                        XRIDefaultInputActions1_IXRIHMDActions_TypeInfo,param_1,0);
            if ((uVar3 & 1) == 0) goto LAB_05a22fe8;
            lVar2 = *(long *)(PTR_DAT_069fb9c0 + 0xa0);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar4 = FUN_054f73b4(lVar2 + 0x20,0);
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c_TypeInfo);
            FUN_05a117e8(lVar2,uVar4,0);
          }
          else {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Services_DistributedAuthority_WrappedDistributedAuthorityService_<>c__DisplayClass14_0_TypeInfo
                                      );
            FUN_05a346ac(lVar2,0);
          }
        }
        else {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass16_0_TypeInfo
                                    );
          FUN_05a3790c(lVar2,0);
        }
      }
      else {
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Linq_XContainer_ContentReader_TypeInfo)
        ;
        FUN_05a37600(lVar2,0);
      }
    }
  }
  else {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x70);
    if (lVar2 == 0) goto LAB_05a231a8;
    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x78);
      if (lVar2 == 0) goto LAB_05a231a8;
      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x80);
        if (lVar2 == 0) goto LAB_05a231a8;
        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x88);
          if (lVar2 == 0) goto LAB_05a231a8;
          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
          if ((uVar3 & 1) == 0) {
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar2 = *(long *)puVar1;
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x90);
            if (lVar2 == 0) goto LAB_05a231a8;
            uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
            if ((uVar3 & 1) == 0) {
              lVar2 = *(long *)puVar1;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar2 = *(long *)puVar1;
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x98);
              if (lVar2 == 0) goto LAB_05a231a8;
              uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
              if ((uVar3 & 1) == 0) {
                lVar2 = *(long *)puVar1;
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar2 = *(long *)puVar1;
                }
                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa0);
                if (lVar2 == 0) goto LAB_05a231a8;
                uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                if ((uVar3 & 1) == 0) {
                  lVar2 = *(long *)puVar1;
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar2 = *(long *)puVar1;
                  }
                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa8);
                  if (lVar2 == 0) goto LAB_05a231a8;
                  uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                  if ((uVar3 & 1) == 0) {
                    lVar2 = *(long *)puVar1;
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar2 = *(long *)puVar1;
                    }
                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x158);
                    if (lVar2 == 0) goto LAB_05a231a8;
                    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                    if ((uVar3 & 1) == 0) {
                      lVar2 = *(long *)puVar1;
                      if (*(int *)(lVar2 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar2 = *(long *)puVar1;
                      }
                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x160);
                      if (lVar2 == 0) goto LAB_05a231a8;
                      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                      if ((uVar3 & 1) == 0) {
                        lVar2 = *(long *)puVar1;
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar2 = *(long *)puVar1;
                        }
                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x168);
                        if (lVar2 == 0) goto LAB_05a231a8;
                        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                        if ((uVar3 & 1) == 0) {
                          lVar2 = *(long *)puVar1;
                          if (*(int *)(lVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar2 = *(long *)puVar1;
                          }
                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x170);
                          if (lVar2 == 0) goto LAB_05a231a8;
                          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                          if ((uVar3 & 1) == 0) {
                            lVar2 = *(long *)puVar1;
                            if (*(int *)(lVar2 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                              lVar2 = *(long *)puVar1;
                            }
                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x178);
                            if (lVar2 == 0) goto LAB_05a231a8;
                            uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                            if ((uVar3 & 1) == 0) {
                              lVar2 = *(long *)puVar1;
                              if (*(int *)(lVar2 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar2 = *(long *)puVar1;
                              }
                              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb0);
                              if (lVar2 == 0) goto LAB_05a231a8;
                              uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                              if ((uVar3 & 1) == 0) {
                                lVar2 = *(long *)puVar1;
                                if (*(int *)(lVar2 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                  lVar2 = *(long *)puVar1;
                                }
                                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb8);
                                if (lVar2 == 0) goto LAB_05a231a8;
                                uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0);
                                if ((uVar3 & 1) == 0) {
                                  lVar2 = *(long *)puVar1;
                                  if (*(int *)(lVar2 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                    lVar2 = *(long *)puVar1;
                                  }
                                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xc0);
                                  if (lVar2 == 0) goto LAB_05a231a8;
                                  uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1,0
                                                            );
                                  if ((uVar3 & 1) == 0) {
                                    lVar2 = *(long *)puVar1;
                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      lVar2 = *(long *)puVar1;
                                    }
                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 200);
                                    if (lVar2 == 0) goto LAB_05a231a8;
                                    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),param_1
                                                               ,0);
                                    if ((uVar3 & 1) == 0) {
                                      lVar2 = *(long *)puVar1;
                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                        lVar2 = *(long *)puVar1;
                                      }
                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xd0);
                                      if (lVar2 == 0) goto LAB_05a231a8;
                                      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),
                                                                 param_1,0);
                                      if ((uVar3 & 1) == 0) {
                                        lVar2 = *(long *)puVar1;
                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                          lVar2 = *(long *)puVar1;
                                        }
                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xd8);
                                        if (lVar2 == 0) goto LAB_05a231a8;
                                        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),
                                                                   param_1,0);
                                        if ((uVar3 & 1) == 0) {
                                          lVar2 = *(long *)puVar1;
                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                            lVar2 = *(long *)puVar1;
                                          }
                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x118);
                                          if (lVar2 == 0) goto LAB_05a231a8;
                                          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18),
                                                                     param_1,0);
                                          if ((uVar3 & 1) == 0) {
                                            lVar2 = *(long *)puVar1;
                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                              lVar2 = *(long *)puVar1;
                                            }
                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x120);
                                            if (lVar2 == 0) goto LAB_05a231a8;
                                            uVar3 = thunk_FUN_0536b75c(*(undefined8 *)(lVar2 + 0x18)
                                                                       ,param_1,0);
                                            if ((uVar3 & 1) == 0) {
                                              lVar2 = *(long *)puVar1;
                                              if (*(int *)(lVar2 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar2 = *(long *)puVar1;
                                              }
                                              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x128);
                                              if (lVar2 == 0) goto LAB_05a231a8;
                                              uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                          (lVar2 + 0x18),param_1,0);
                                              if ((uVar3 & 1) == 0) {
                                                lVar2 = *(long *)puVar1;
                                                if (*(int *)(lVar2 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar2 = *(long *)puVar1;
                                                }
                                                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x130);
                                                if (lVar2 == 0) goto LAB_05a231a8;
                                                uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                            (lVar2 + 0x18),param_1,0
                                                                          );
                                                if ((uVar3 & 1) == 0) {
                                                  lVar2 = *(long *)puVar1;
                                                  if (*(int *)(lVar2 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar2 = *(long *)puVar1;
                                                  }
                                                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x138)
                                                  ;
                                                  if (lVar2 == 0) goto LAB_05a231a8;
                                                  uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                              (lVar2 + 0x18),param_1
                                                                             ,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                     0x140);
                                                    if (lVar2 == 0) goto LAB_05a231a8;
                                                    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0x148);
                                                      if (lVar2 == 0) goto LAB_05a231a8;
                                                      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02df485c();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0x150);
                                                        if (lVar2 == 0) goto LAB_05a231a8;
                                                        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02df485c();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x180);
                                                          if (lVar2 == 0) goto LAB_05a231a8;
                                                          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02df485c();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x188);
                                                            if (lVar2 == 0) goto LAB_05a231a8;
                                                            uVar3 = thunk_FUN_0536b75c(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 400)
                                                    ;
                                                    if (lVar2 == 0) goto LAB_05a231a8;
                                                    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0x198);
                                                      if (lVar2 == 0) goto LAB_05a231a8;
                                                      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02df485c();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0x1a0);
                                                        if (lVar2 == 0) goto LAB_05a231a8;
                                                        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02df485c();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x1a8);
                                                          if (lVar2 == 0) goto LAB_05a231a8;
                                                          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02df485c();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x1b0);
                                                            if (lVar2 == 0) goto LAB_05a231a8;
                                                            uVar3 = thunk_FUN_0536b75c(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                     0x1b8);
                                                    if (lVar2 == 0) goto LAB_05a231a8;
                                                    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0x1c0);
                                                      if (lVar2 == 0) goto LAB_05a231a8;
                                                      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02df485c();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0x1c8);
                                                        if (lVar2 == 0) goto LAB_05a231a8;
                                                        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02df485c();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x1d0);
                                                          if (lVar2 == 0) goto LAB_05a231a8;
                                                          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02df485c();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x1d8);
                                                            if (lVar2 == 0) goto LAB_05a231a8;
                                                            uVar3 = thunk_FUN_0536b75c(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar2 = *(long *)puVar1;
                                                    if (*(int *)(lVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar2 = *(long *)puVar1;
                                                    }
                                                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xe0
                                                                     );
                                                    if (lVar2 == 0) goto LAB_05a231a8;
                                                    uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                (lVar2 + 0x18),
                                                                               param_1,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar2 = *(long *)puVar1;
                                                      if (*(int *)(lVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                        lVar2 = *(long *)puVar1;
                                                      }
                                                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                       0xe8);
                                                      if (lVar2 == 0) goto LAB_05a231a8;
                                                      uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                  (lVar2 + 0x18),
                                                                                 param_1,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar2 = *(long *)puVar1;
                                                        if (*(int *)(lVar2 + 0xe4) == 0) {
                                                          thunk_FUN_02df485c();
                                                          lVar2 = *(long *)puVar1;
                                                        }
                                                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) +
                                                                         0xf0);
                                                        if (lVar2 == 0) goto LAB_05a231a8;
                                                        uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                    (lVar2 + 0x18),
                                                                                   param_1,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar2 = *(long *)puVar1;
                                                          if (*(int *)(lVar2 + 0xe4) == 0) {
                                                            thunk_FUN_02df485c();
                                                            lVar2 = *(long *)puVar1;
                                                          }
                                                          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8)
                                                                           + 0x100);
                                                          if (lVar2 == 0) goto LAB_05a231a8;
                                                          uVar3 = thunk_FUN_0536b75c(*(undefined8 *)
                                                                                      (lVar2 + 0x18)
                                                                                     ,param_1,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar2 = *(long *)puVar1;
                                                            if (*(int *)(lVar2 + 0xe4) == 0) {
                                                              thunk_FUN_02df485c();
                                                              lVar2 = *(long *)puVar1;
                                                            }
                                                            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8
                                                                                       ) + 0x108);
                                                            if (lVar2 == 0) goto LAB_05a231a8;
                                                            uVar3 = thunk_FUN_0536b75c(*(undefined8
                                                                                         *)(lVar2 + 
                                                  0x18),param_1,0);
                                                  if ((uVar3 & 1) == 0) goto LAB_05a22fe8;
                                                  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  WristWatchButton_<<FadeCanvas>g__Fade_18_0>d_TypeInfo
                                                  );
                                                  FUN_05a37e48(lVar2,0);
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_TypeInfo
                                                  );
                                                  FUN_05a37c18(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate_TypeInfo
                                                  );
                                                  FUN_05a378a8(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Unity_Services_Relay_WrappedRelayService_<>c_TypeInfo
                                                  );
                                                  FUN_05a3726c(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Unity_Services_DistributedAuthority_WrappedDistributedAuthorityService_<>c_TypeInfo
                                                  );
                                                  FUN_05a37040(lVar2,0);
                                                  }
                                                  goto LAB_05a22fd8;
                                                  }
                                                  }
                                                  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_000008F4_BurstDirectCall_TypeInfo
                                                  );
                                                  FUN_05a36fdc(lVar2,0);
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_<>c_TypeInfo
                                                  );
                                                  FUN_05a36f78(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_MovementType_TypeInfo
                                                  );
                                                  FUN_05a36f14(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000FE2_BurstDirectCall_TypeInfo
                                                  );
                                                  FUN_05a36eb0(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_TypeInfo
                                                  );
                                                  System_Xml_Schema_XmlUntypedConverter__ChangeTypeWildcardDestination
                                                            (lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_TypeInfo
                                                  );
                                                  FUN_05a36de8(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_000008F8_PostfixBurstDelegate_TypeInfo
                                                  );
                                                  FUN_05a36d84(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_000008F4_PostfixBurstDelegate_TypeInfo
                                                  );
                                                  FUN_05a36d20(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_000008F8_BurstDirectCall_TypeInfo
                                                  );
                                                  FUN_05a36cbc(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000F65_BurstDirectCall_TypeInfo
                                                  );
                                                  FUN_05a36c58(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_000008FB_PostfixBurstDelegate_TypeInfo
                                                  );
                                                  FUN_05a36bf4(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder_ButtonBypass_TypeInfo
                                                  );
                                                  FUN_05a36b90(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_TypeInfo
                                                  );
                                                  FUN_05a36b2c(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_XRDebugLineVisualizer_<>c__DisplayClass4_0_TypeInfo
                                                  );
                                                  FUN_05a36ac8(lVar2,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_XRDebugLineVisualizer_DebugLine_TypeInfo
                                                  );
                                                  FUN_05a36a64(lVar2,0);
                                                  }
                                                }
                                                else {
                                                  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TransformationMode_TypeInfo
                                                  );
                                                  FUN_05a36a00(lVar2,0);
                                                }
                                              }
                                              else {
                                                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
                                                  );
                                                FUN_05a3699c(lVar2,0);
                                              }
                                            }
                                            else {
                                              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_LogicalInputState_TypeInfo
                                                  );
                                              FUN_05a36938(lVar2,0);
                                            }
                                          }
                                          else {
                                            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_TypeInfo
                                                  );
                                            FUN_05a368d4(lVar2,0);
                                          }
                                        }
                                        else {
                                          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_Linq_XContainer_<Nodes>d__18_TypeInfo);
                                          FUN_05a366d0(lVar2,0);
                                        }
                                      }
                                      else {
                                        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                        
                                                  Unity_Services_Lobbies_Internal_WrappedLobbyService_<>c_TypeInfo
                                                  );
                                        FUN_05a36460(lVar2,0);
                                      }
                                    }
                                    else {
                                      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                    
                                                  Unity_Services_Lobbies_Internal_WrappedLobbyService_<>c__DisplayClass22_0_TypeInfo
                                                  );
                                      FUN_05a361c0(lVar2,0);
                                    }
                                  }
                                  else {
                                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                
                                                  Unity_Services_Lobbies_Internal_WrappedLobbyService_<>c__DisplayClass33_0_TypeInfo
                                                  );
                                    FUN_05a35fc4(lVar2,0);
                                  }
                                }
                                else {
                                  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                            
                                                  Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass14_0_TypeInfo
                                                  );
                                  FUN_05a35dc8(lVar2,0);
                                }
                              }
                              else {
                                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                        
                                                  MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo
                                                  );
                                FUN_05a35bb0(lVar2,0);
                              }
                            }
                            else {
                              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_000008FA_PostfixBurstDelegate_TypeInfo
                                                  );
                              FUN_05a35b4c(lVar2,0);
                            }
                          }
                          else {
                            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_000008FB_BurstDirectCall_TypeInfo
                                                  );
                            FUN_05a35ae8(lVar2,0);
                          }
                        }
                        else {
                          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_000008FA_BurstDirectCall_TypeInfo
                                                  );
                          FUN_05a35a84(lVar2,0);
                        }
                      }
                      else {
                        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_TypeInfo
                                                  );
                        FUN_05a35a20(lVar2,0);
                      }
                    }
                    else {
                      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                  UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal_00000FE2_PostfixBurstDelegate_TypeInfo
                                                );
                      FUN_05a359bc(lVar2,0);
                    }
                  }
                  else {
                    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                                Unity_Services_Qos_WrappedQosService_<>c_TypeInfo);
                    FUN_05a35788(lVar2,0);
                  }
                }
                else {
                  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                              System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo
                                            );
                  FUN_05a35580(lVar2,0);
                }
              }
              else {
                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                            Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass17_0_TypeInfo
                                          );
                FUN_05a3537c(lVar2,0);
              }
            }
            else {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TypeInfo
                                        );
              FUN_05a35174(lVar2,0);
            }
          }
          else {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                                      );
            FUN_05a34f6c(lVar2,0);
          }
        }
        else {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Data_XDRSchema_NameType_TypeInfo);
          FUN_05a34d64(lVar2,0);
        }
      }
      else {
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                                  );
        FUN_05a34b5c(lVar2,0);
      }
    }
    else {
      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                  CodeMonkey_Utils_World_Sprite_<>c__DisplayClass6_0_TypeInfo);
      FUN_05a34958(lVar2,0);
    }
  }
LAB_05a22fd8:
  *param_3 = lVar2;
  LeanTween__value(param_3,lVar2);
LAB_05a22fe8:
  return *param_3 != 0;
}


