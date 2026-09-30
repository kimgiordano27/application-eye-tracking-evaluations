/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$get_cursorColor
ENTRY_POINT: 06effca8
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


void UnityEngine_UIElements_TextElement__get_cursorColor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  
  FUN_031f20f4(Fusion_ILocalPrefabCreated_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x2c5) = 1;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar3 = Fusion_ILocalPrefabCreated_TypeInfo;
  puVar1 = PTR_DAT_0759b388;
  lVar6 = *(long *)(PTR_DAT_0759b388 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_075d8158;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4a0);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IUxmlFactory_TypeInfo);
    FUN_051c2dd4(lVar8,uVar9,
                 *(undefined8 *)UnityEngine_XR_Hands_Processing_IXRHandProcessor_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4a0) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4a0,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x88);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4a8);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRRenderModels_TypeInfo);
    FUN_051be960(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4a8) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4a8,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4b0);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)System_Net_IWebProxy_TypeInfo);
    FUN_051c2c4c(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Gaze_IXROverridesGazeAutoSelect_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4b0) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4b0,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x28);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4b8);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
    FUN_051bd700(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4b8) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4b8,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4c0);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyTransformation_TypeInfo
                              );
    FUN_051c326c(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4c0) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4c0,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4c8);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo
                              );
    FUN_051c3eac(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRScaleValueProvider_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4c8) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4c8,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4d0);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRCustomReticleProvider_TypeInfo
                              );
    FUN_051c3020(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRSelectFilter_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4d0) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4d0,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x38);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4d8);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo
                              );
    FUN_051c0068(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_TypeInfo,0)
    ;
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4d8) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4d8,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4e0);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_TypeInfo
                              );
    FUN_051c30e4(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4e0) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4e0,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4e8);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)Photon_Voice_IVoiceTransport_TypeInfo);
    FUN_051c0998(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRTargetEvaluatorLinkable_TypeInfo,0
                );
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4e8) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4e8,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4f0);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)System_Net_IWebRequestCreate_TypeInfo);
    FUN_051c31a8(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannel_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4f0) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4f0,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x68);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x4f8);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)Fusion_Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_051c2494(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseChannelGroup_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x4f8) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x4f8,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x500);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo)
    ;
    FUN_051c2d10(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x500) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x500,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x508);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRActivateInteractor_TypeInfo
                              );
    FUN_051be030(lVar8,uVar9,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x508) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x508,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x510);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)Photon_Realtime_IWebRpcCallback_TypeInfo);
    FUN_051c3640(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x510) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x510,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x40);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x518);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_IXRBodyPositionEvaluator_TypeInfo
                              );
    FUN_051c72ec(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x518) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x518,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x520);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_IVisualTreeUpdater_TypeInfo);
    FUN_051c3704(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputButtonReader_TypeInfo,0)
    ;
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x520) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x520,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x528);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_IWrapper_TypeInfo);
    FUN_051c7c1c(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x528) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x528,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x530);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_TypeInfo
                              );
    FUN_051c37c8(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_IXRInteractableCustomReticle_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x530) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x530,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x70);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x538);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo
                              );
    System_Threading_Tasks_ValueTask<OVRResult<Guid,_Int32Enum>>__get_IsCompleted
              (lVar8,uVar9,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x538) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x538,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x540);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)Oculus_Platform_IVoipPCMSource_TypeInfo);
    FUN_051c3330(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Filtering_IXRInteractionStrengthFilter_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x540) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x540,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x548);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo)
    ;
    FUN_051c48a0(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x548) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x548,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x90);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x550);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_TypeInfo);
    FUN_051c2e98(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_TypeInfo
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x550) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x550,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(puVar1 + 0x80);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar1 + 0x90) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x558);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_IX509Extension_TypeInfo
                              );
    UnityEngine_UIElements_StyleValuePropertyBag_ValueProperty<StyleFloat,_float>__get_IsReadOnly
              (lVar8,uVar9,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_TypeInfo,
               0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x558) = lVar8;
    thunk_FUN_0329bf60(lVar6 + 0x558,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06ef5050(uVar7,uVar4,uVar5,lVar8);
  return;
}


