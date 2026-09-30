/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo$$set_environmentDepthConfidenceImageSupportedDelegate
ENTRY_POINT: 06510ac0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARSubsystems_XROcclusionSubsystemCinfo__set_environmentDepthConfidenceImageSupportedDelegate
               (long param_1)

{
  undefined8 uVar1;
  int in_w8;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_02f12b58();
    param_1 = *unaff_x22;
  }
  uVar3 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsMetaProperty>_TypeInfo
                            );
  FUN_0516c80c(uVar1,uVar3,
               *(undefined8 *)
                System_Threading_Tasks_TaskCompletionSource<NativeGallery_Permission>_TypeInfo,0);
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar2 + 0x2e0) = uVar1;
  thunk_FUN_02f411dc(lVar2 + 0x2e0,uVar1);
  FUN_037cf274();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Volume>_TypeInfo);
    FUN_0516c5f0(uVar1,uVar3,
                 *(undefined8 *)System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x2e8,uVar1);
  }
  FUN_037ce89c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UntangledEntity>_TypeInfo);
    FUN_0516c8c0(uVar1,uVar3,*(undefined8 *)System_Threading_Tasks_Task<bool>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x2f0,uVar1);
  }
  FUN_037cf5bc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
    FUN_0516c6a4(uVar1,uVar3,*(undefined8 *)System_Threading_Tasks_Task<int>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x2f8,uVar1);
  }
  FUN_037cebe4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo
                              );
    FUN_0516c974(uVar1,uVar3,*(undefined8 *)System_Threading_Tasks_Task<Task>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x300) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x300,uVar1);
  }
  FUN_037cf904();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VectorImageManager>_TypeInfo);
    FUN_0516c758(uVar1,uVar3,*(undefined8 *)System_Threading_Tasks_Task<VoidTaskResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x308) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x308,uVar1);
  }
  FUN_037cef2c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
    FUN_0516ca28(uVar1,uVar3,
                 *(undefined8 *)System_Threading_Tasks_Task<WebSocketReceiveResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x310) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x310,uVar1);
  }
  FUN_037cfc4c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<User>_TypeInfo);
    FUN_0516c53c(uVar1,uVar3,
                 *(undefined8 *)UnityEngine_UIElements_UIR_TempAllocator<ushort>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x318) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x318,uVar1);
  }
  FUN_037ce554();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    FUN_0516cadc(uVar1,uVar3,
                 *(undefined8 *)UnityEngine_UIElements_UIR_TempAllocator<Vertex>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 800) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 800,uVar1);
  }
  FUN_037cff94();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector4>_TypeInfo);
    FUN_0516ce60(uVar1,uVar3,
                 *(undefined8 *)Unity_VisualScripting_SceneSingleton<SceneVariables>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x328) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x328,uVar1);
  }
  FUN_037d0ffc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Transform>_TypeInfo);
    FUN_0516cc44(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x330) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x330,uVar1);
  }
  FUN_037d0624();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509Extension>_TypeInfo);
    FUN_0516cfc8(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_Playables_ScriptPlayable<ActivationMixerPlayable>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x338) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x338,uVar1);
  }
  FUN_037d168c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<YogaNode>_TypeInfo);
    FUN_0516ccf8(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x340) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x340,uVar1);
  }
  FUN_037d096c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<int2>_TypeInfo);
    FUN_0516d07c(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x348) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x348,uVar1);
  }
  FUN_037d19d4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                              );
    FUN_0516cdac(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x350) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x350,uVar1);
  }
  FUN_037d0cb4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<float3>_TypeInfo);
    FUN_0516d130(uVar1,uVar3,
                 *(undefined8 *)UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x358) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x358,uVar1);
  }
  FUN_037d1d1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlSchemaElement>_TypeInfo);
    FUN_0516cf14(uVar1,uVar3,
                 *(undefined8 *)UnityEngine_Playables_ScriptPlayable<TimeControlPlayable>_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x360) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x360,uVar1);
  }
  FUN_037d1344();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
    FUN_0516cb90(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_Playables_ScriptPlayable<TimeNotificationBehaviour>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x368) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x368,uVar1);
  }
  FUN_037d02dc();
  return;
}


