/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$set_cursorColor
ENTRY_POINT: 06effd48
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_UIElements_TextElement__set_cursorColor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  if (unaff_x22 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(param_1);
      param_1 = *unaff_x25;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IUxmlFactory_TypeInfo);
    FUN_051c2dd4(uVar1,uVar5,
                 *(undefined8 *)UnityEngine_XR_Hands_Processing_IXRHandProcessor_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar2 + 0x4a0) = uVar1;
    thunk_FUN_0329bf60(lVar2 + 0x4a0,uVar1);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x88);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4a8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRRenderModels_TypeInfo);
    FUN_051be960(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4a8) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4a8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x28) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4b0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)System_Net_IWebProxy_TypeInfo);
    FUN_051c2c4c(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Gaze_IXROverridesGazeAutoSelect_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4b0) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4b0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x28);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4b8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
    FUN_051bd700(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4b8) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4b8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x30) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4c0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyTransformation_TypeInfo
                              );
    FUN_051c326c(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4c0) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4c0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x30);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4c8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo
                              );
    FUN_051c3eac(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRScaleValueProvider_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4c8) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4c8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x38) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4d0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRCustomReticleProvider_TypeInfo
                              );
    FUN_051c3020(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRSelectFilter_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4d0) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4d0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x38);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4d8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo
                              );
    FUN_051c0068(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_TypeInfo,0)
    ;
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4d8) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4d8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x48) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4e0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_TypeInfo
                              );
    FUN_051c30e4(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4e0) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4e0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4e8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)Photon_Voice_IVoiceTransport_TypeInfo);
    FUN_051c0998(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRTargetEvaluatorLinkable_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4e8) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4e8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4f0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)System_Net_IWebRequestCreate_TypeInfo);
    FUN_051c31a8(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannel_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4f0) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4f0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x68);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x4f8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)Fusion_Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_051c2494(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannelGroup_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x4f8) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x4f8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x500);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo)
    ;
    FUN_051c2d10(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x500) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x500,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x18);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x508);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRActivateInteractor_TypeInfo
                              );
    FUN_051be030(lVar4,uVar6,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x508) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x508,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x510);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_051c3640(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x510) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x510,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x40);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x518);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyPositionEvaluator_TypeInfo
                              );
    FUN_051c72ec(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x518) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x518,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x520);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IVisualTreeUpdater_TypeInfo);
    FUN_051c3704(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputButtonReader_TypeInfo,0)
    ;
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x520) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x520,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x50);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x528);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_IWrapper_TypeInfo);
    FUN_051c7c1c(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x528) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x528,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x530);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_TypeInfo
                              );
    FUN_051c37c8(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_IXRInteractableCustomReticle_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x530) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x530,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x538);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo
                              );
    System_Threading_Tasks_ValueTask<OVRResult<Guid,_Int32Enum>>__get_IsCompleted
              (lVar4,uVar6,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x538) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x538,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x78) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x540);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)Oculus_Platform_IVoipPCMSource_TypeInfo);
    FUN_051c3330(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRInteractionStrengthFilter_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x540) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x540,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x548);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo)
    ;
    FUN_051c48a0(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x548) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x548,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x550);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_TypeInfo);
    FUN_051c2e98(lVar4,uVar6,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x550) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x550,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x27 + 0x80);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar2 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x558);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_IX509Extension_TypeInfo
                              );
    UnityEngine_UIElements_StyleValuePropertyBag_ValueProperty<StyleFloat,_float>__get_IsReadOnly
              (lVar4,uVar6,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo,
               0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x558) = lVar4;
    thunk_FUN_0329bf60(lVar2 + 0x558,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar3,uVar1,uVar5,lVar4);
  return;
}


