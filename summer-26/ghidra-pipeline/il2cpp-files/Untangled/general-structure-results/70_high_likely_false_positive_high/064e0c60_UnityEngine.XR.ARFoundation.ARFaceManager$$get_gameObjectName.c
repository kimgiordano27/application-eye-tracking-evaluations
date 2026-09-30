/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFaceManager$$get_gameObjectName
ENTRY_POINT: 064e0c60
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_21
*/


void UnityEngine_XR_ARFoundation_ARFaceManager__get_gameObjectName(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_0516d568();
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0) = unaff_x20;
  thunk_FUN_02f411dc();
  FUN_037d2a3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo
                              );
    FUN_0516d8ec(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildNameRequest>_TypeInfo,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d3aa4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
    FUN_0516d61c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildRegionRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d2d84();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VehicleTypes>_TypeInfo
                              );
    FUN_0516d9a0(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildRegionsRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d3dec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
    FUN_0516d6d0(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCatalogConfigRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d30cc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<CFXR_Effect_CameraShake>_TypeInfo);
    FUN_0516d838(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCharacterDataRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d375c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeSpec>_TypeInfo);
    FUN_0516d400(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCharacterStatisticsRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d23ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo
                              );
    FUN_0516d4b4(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateExclusionGroupRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d26f4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo);
    FUN_05173250(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateExperimentRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x100) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x100,uVar2);
  }
  FUN_037dc474();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualElement>_TypeInfo);
    FUN_05173688(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateGroupRequest>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x108) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x108,uVar2);
  }
  FUN_037dd824();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIVertex>_TypeInfo);
    FUN_0517346c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateGroupRoleRequest>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x110,uVar2);
  }
  FUN_037dce4c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo
                              );
    FUN_051737f0(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateInventoryItemsRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x118,uVar2);
  }
  FUN_037ddeb4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsData>_TypeInfo);
    FUN_05173520(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLeaderboardDefinitionRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x120) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x120,uVar2);
  }
  FUN_037dd194();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeFog>_TypeInfo);
    FUN_051738a4(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLeaderboardEntriesRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x128) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x128,uVar2);
  }
  FUN_037de1fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
    FUN_051735d4(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLobbyAsServerRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x130) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x130,uVar2);
  }
  FUN_037dd4dc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                              );
    FUN_05173958(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLobbyRequest>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x138) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x138,uVar2);
  }
  FUN_037de544();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceObjectEntry>_TypeInfo);
    FUN_0517373c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdatePlayerStatisticsRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x140) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x140,uVar2);
  }
  FUN_037ddb6c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
    FUN_05173304(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateStatisticDefinitionRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x148) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x148,uVar2);
  }
  FUN_037dc7bc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo);
    FUN_051733b8(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateStatisticsRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x150) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x150,uVar2);
  }
  FUN_037dcb04();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
    FUN_0516da54(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateUserDataRequest>_TypeInfo,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x158) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x158,uVar2);
  }
  FUN_037d4134();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VehicleComponent>_TypeInfo);
    FUN_0516e0a8(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateUserTitleDisplayNameRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x160) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x160,uVar2);
  }
  FUN_037d54e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
    FUN_0516dc70(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UploadCertificateRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x168) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x168,uVar2);
  }
  FUN_037d4b0c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VirtualMesh>_TypeInfo)
    ;
    FUN_0516e210(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UploadSecretRequest>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x170,uVar2);
  }
  FUN_037d5b74();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRLoader>_TypeInfo);
    FUN_0516ddd8(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateAmazonReceiptRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x178,uVar2);
  }
  FUN_037d4e54();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_0516e2c4(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateEntityTokenRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x180,uVar2);
  }
  FUN_037d5ebc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TreeViewItemWrapper>_TypeInfo);
    FUN_0516de8c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateGooglePlayPurchaseRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x188,uVar2);
  }
  FUN_037d519c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UILineInfo>_TypeInfo);
    FUN_0516e15c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateIOSReceiptRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 400,uVar2);
  }
  FUN_037d582c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueInput>_TypeInfo);
    FUN_0516db08(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteClientCharacterEventRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x198,uVar2);
  }
  FUN_037d447c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRNodeState>_TypeInfo)
    ;
    FUN_0516dbbc(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteClientPlayerEventRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1a0,uVar2);
  }
  FUN_037d47c4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo)
    ;
    FUN_05173a0c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteEventsRequest>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1a8,uVar2);
  }
  FUN_037de88c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
    FUN_05173e44(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteTitleEventRequest>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1b0,uVar2);
  }
  FUN_037dfc3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UserVariable>_TypeInfo
                              );
    FUN_05173c28(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AbortFileUploadsResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1b8,uVar2);
  }
  FUN_037df264();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueOutput>_TypeInfo)
    ;
    FUN_05173fac(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AcceptTradeResponse>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1c0,uVar2);
  }
  FUN_037e02cc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
    FUN_05173cdc(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddFriendResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1c8,uVar2);
  }
  FUN_037df5ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo
                              );
    FUN_05174060(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddGenericIDResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1d0,uVar2);
  }
  FUN_037e0614();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<uint>_TypeInfo);
    FUN_05173d90(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddInventoryItemsResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1d8,uVar2);
  }
  FUN_037df8f4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VertexAttribute>_TypeInfo);
    FUN_05174114(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddOrUpdateContactEmailResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1e0,uVar2);
  }
  FUN_037e095c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TransformRecord>_TypeInfo);
    FUN_05173ef8(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddUsernamePasswordResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1e8,uVar2);
  }
  FUN_037dff84();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                              );
    FUN_05173ac0(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AndroidDevicePushNotificationRegistrationResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1f0,uVar2);
  }
  FUN_037debd4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_05173b74(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ApplyToGroupResponse>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1f8,uVar2);
  }
  FUN_037def1c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
    FUN_0516e378(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AttributeInstallResult>_TypeInfo,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x200) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x200,uVar2);
  }
  FUN_037d6204();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
    FUN_0516e7b0(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AuthenticateCustomIdResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x208) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x208,uVar2);
  }
  FUN_037d75b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo);
    FUN_0516e594(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<BuildAliasDetailsResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x210) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x210,uVar2);
  }
  FUN_037d6bdc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_0516e918(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelAllMatchmakingTicketsForPlayerResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x218) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x218,uVar2);
  }
  FUN_037d7c44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo)
    ;
    FUN_0516e648(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelAllServerBackfillTicketsForPlayerResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x220,uVar2);
  }
  FUN_037d6f24();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516e9cc(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelMatchmakingTicketResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x228) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x228,uVar2);
  }
  FUN_037d7f8c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                              );
    FUN_0516e6fc(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelServerBackfillTicketResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x230,uVar2);
  }
  FUN_037d726c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                              );
    FUN_0516e864(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConfirmPurchaseResult>_TypeInfo,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x238) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x238,uVar2);
  }
  FUN_037d78fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo);
    FUN_0516e42c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeItemResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x240) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x240,uVar2);
  }
  FUN_037d654c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_0516e4e0(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeMicrosoftStoreEntitlementsResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x248) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x248,uVar2);
  }
  FUN_037d6894();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_051741c8(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumePS5EntitlementsResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x250) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x250,uVar2);
  }
  FUN_037e0ca4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
    FUN_051746b4(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumePSNEntitlementsResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 600) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 600,uVar2);
  }
  FUN_037e239c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
    FUN_05174768(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeXboxEntitlementsResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x260) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x260,uVar2);
  }
  FUN_037e26e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettings>_TypeInfo);
    FUN_0517481c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithCustomContainerResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x268) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x268,uVar2);
  }
  FUN_037e2a2c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Uri>_TypeInfo);
    FUN_05174600(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithManagedContainerResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x270) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x270,uVar2);
  }
  FUN_037e2054();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_0517427c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithProcessBasedServerResponse>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x278) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x278,uVar2);
  }
  FUN_037e0fec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Variable>_TypeInfo);
    FUN_05174330(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateDraftItemResponse>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x280) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x280,uVar2);
  }
  FUN_037e1334();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Usable>_TypeInfo);
    FUN_05172704(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateExperimentResult>_TypeInfo,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x288) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x288,uVar2);
  }
  FUN_037da3a4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlReflectionMember>_TypeInfo);
    FUN_05172a88(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateGroupResponse>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x290) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x290,uVar2);
  }
  FUN_037db40c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_TypeInfo
                              );
    FUN_0517286c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateGroupRoleResponse>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x298) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x298,uVar2);
  }
  FUN_037daa34();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo
                              );
    FUN_05172d58(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateLobbyResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2a0,uVar2);
  }
  FUN_037dba9c();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_06931a5c();
  return;
}


