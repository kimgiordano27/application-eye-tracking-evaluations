/*
FUNCTION_NAME: FUN_06effa28
ENTRY_POINT: 06effa28
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06effa28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_075d62f0;
  if ((DAT_07a592c5 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8158);
    FUN_031f20f4(PTR_DAT_075d62f0);
    FUN_031f20f4(UnityEngine_UIElements_IVisualTreeUpdater_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_IUxmlFactory_TypeInfo);
    FUN_031f20f4(Photon_Voice_IVoiceTransport_TypeInfo);
    FUN_031f20f4(Oculus_Platform_IVoipPCMSource_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
    FUN_031f20f4(System_Net_IWebProxy_TypeInfo);
    FUN_031f20f4(System_Net_IWebRequestCreate_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_031f20f4(Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_031f20f4(Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo);
    FUN_031f20f4(Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_IWrapper_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_IX509Extension_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRActivateInteractor_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyPositionEvaluator_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyTransformation_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRCustomReticleProvider_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRRenderModels_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_Processing_IXRHandProcessor_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannel_TypeInfo)
    ;
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannelGroup_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputButtonReader_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_IXRInteractableCustomReticle_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRInteractionStrengthFilter_TypeInfo)
    ;
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Gaze_IXROverridesGazeAutoSelect_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRScaleValueProvider_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRSelectFilter_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRTargetEvaluatorLinkable_TypeInfo);
    FUN_031f20f4(Fusion_ILocalPrefabCreated_TypeInfo);
    DAT_07a592c5 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar4 = Fusion_ILocalPrefabCreated_TypeInfo;
  puVar1 = PTR_DAT_0759b388;
  lVar7 = *(long *)(PTR_DAT_0759b388 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_075d8158;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4a0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IUxmlFactory_TypeInfo);
    FUN_051c2dd4(lVar9,uVar10,
                 *(undefined8 *)UnityEngine_XR_Hands_Processing_IXRHandProcessor_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4a0) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4a0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x88);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4a8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRRenderModels_TypeInfo);
    FUN_051be960(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4a8) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4a8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4b0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)System_Net_IWebProxy_TypeInfo);
    FUN_051c2c4c(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Gaze_IXROverridesGazeAutoSelect_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4b0) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4b0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x28);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4b8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
    FUN_051bd700(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4b8) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4b8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4c0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyTransformation_TypeInfo
                              );
    FUN_051c326c(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4c0) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4c0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4c8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo
                              );
    FUN_051c3eac(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRScaleValueProvider_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4c8) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4c8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4d0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRCustomReticleProvider_TypeInfo
                              );
    FUN_051c3020(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRSelectFilter_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4d0) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4d0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x38);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4d8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo
                              );
    FUN_051c0068(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_TypeInfo,0)
    ;
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4d8) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4d8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4e0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_TypeInfo
                              );
    FUN_051c30e4(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4e0) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4e0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4e8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)Photon_Voice_IVoiceTransport_TypeInfo);
    FUN_051c0998(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRTargetEvaluatorLinkable_TypeInfo,0
                );
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4e8) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4e8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4f0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)System_Net_IWebRequestCreate_TypeInfo);
    FUN_051c31a8(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannel_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4f0) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4f0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x68);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4f8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)Fusion_Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_051c2494(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannelGroup_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x4f8) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x4f8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x500);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo)
    ;
    FUN_051c2d10(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x500) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x500,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x508);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRActivateInteractor_TypeInfo
                              );
    FUN_051be030(lVar9,uVar10,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x508) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x508,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x510);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_051c3640(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x510) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x510,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x40);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x518);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyPositionEvaluator_TypeInfo
                              );
    FUN_051c72ec(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x518) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x518,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x520);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IVisualTreeUpdater_TypeInfo);
    FUN_051c3704(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputButtonReader_TypeInfo,0)
    ;
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x520) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x520,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x528);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_IWrapper_TypeInfo);
    FUN_051c7c1c(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x528) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x528,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x530);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_TypeInfo
                              );
    FUN_051c37c8(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_IXRInteractableCustomReticle_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x530) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x530,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x538);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo
                              );
    System_Threading_Tasks_ValueTask<OVRResult<Guid,_Int32Enum>>__get_IsCompleted
              (lVar9,uVar10,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x538) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x538,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x540);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)Oculus_Platform_IVoipPCMSource_TypeInfo);
    FUN_051c3330(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRInteractionStrengthFilter_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x540) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x540,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x548);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo)
    ;
    FUN_051c48a0(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x548) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x548,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x550);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_TypeInfo);
    FUN_051c2e98(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x550) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x550,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(puVar1 + 0x80);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x558);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_IX509Extension_TypeInfo
                              );
    UnityEngine_UIElements_StyleValuePropertyBag_ValueProperty<StyleFloat,_float>__get_IsReadOnly
              (lVar9,uVar10,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo,
               0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x558) = lVar9;
    thunk_FUN_0329bf60(lVar7 + 0x558,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar8,uVar5,uVar6,lVar9);
  return;
}


