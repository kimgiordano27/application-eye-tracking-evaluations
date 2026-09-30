/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFace$$UpdateTransformFromPose
ENTRY_POINT: 064e05e4
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_21
*/


void UnityEngine_XR_ARFoundation_ARFace__UpdateTransformFromPose(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *in_x9;
  undefined8 uVar4;
  long *unaff_x22;
  
  uVar1 = thunk_FUN_02ef1808(*in_x9);
  FUN_05172380();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
  *puVar2 = uVar1;
  thunk_FUN_02f411dc(puVar2,uVar1);
  FUN_037d9684();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x70) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WeakReference>_TypeInfo);
    FUN_05172164(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnlinkPSNAccountRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d8cac();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x78) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo
                              );
    FUN_051724e8(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnlinkSteamAccountRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d9d14();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x80) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
    FUN_05172218(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnlinkTwitchAccountRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d8ff4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x88) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIDocument>_TypeInfo);
    FUN_0517259c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnlinkXboxAccountRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037da05c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x90) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UnityUIQuestTrackTemplate>_TypeInfo)
    ;
    FUN_051722cc(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnlockContainerInstanceRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d933c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x98) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
    FUN_05172434(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnlockContainerItemRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d99cc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xa0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<fsObjectProcessor>_TypeInfo);
    FUN_05171ffc(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnregisterFunctionRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d861c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
    FUN_051720b0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UnsubscribeFromMatchResourceRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d8964();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo
                              );
    FUN_0516d34c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UntagContainerImageRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d2064();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516d784(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateAvatarUrlRequest>_TypeInfo,
                 0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d3414();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsConverter>_TypeInfo)
    ;
    FUN_0516d568(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildAliasRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d2a3c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo
                              );
    FUN_0516d8ec(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildNameRequest>_TypeInfo,
                 0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d3aa4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
    FUN_0516d61c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildRegionRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d2d84();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VehicleTypes>_TypeInfo
                              );
    FUN_0516d9a0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateBuildRegionsRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d3dec();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
    FUN_0516d6d0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCatalogConfigRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d30cc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<CFXR_Effect_CameraShake>_TypeInfo);
    FUN_0516d838(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCharacterDataRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d375c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeSpec>_TypeInfo);
    FUN_0516d400(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCharacterStatisticsRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d23ac();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo
                              );
    FUN_0516d4b4(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateExclusionGroupRequest>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar2 = uVar1;
    thunk_FUN_02f411dc(puVar2,uVar1);
  }
  FUN_037d26f4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo);
    FUN_05173250(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateExperimentRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x100) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x100,uVar1);
  }
  FUN_037dc474();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualElement>_TypeInfo);
    FUN_05173688(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateGroupRequest>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x108) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x108,uVar1);
  }
  FUN_037dd824();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIVertex>_TypeInfo);
    FUN_0517346c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateGroupRoleRequest>_TypeInfo,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x110) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x110,uVar1);
  }
  FUN_037dce4c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo
                              );
    FUN_051737f0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateInventoryItemsRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x118) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x118,uVar1);
  }
  FUN_037ddeb4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsData>_TypeInfo);
    FUN_05173520(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLeaderboardDefinitionRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x120) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x120,uVar1);
  }
  FUN_037dd194();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeFog>_TypeInfo);
    FUN_051738a4(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLeaderboardEntriesRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x128) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x128,uVar1);
  }
  FUN_037de1fc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
    FUN_051735d4(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLobbyAsServerRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x130) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x130,uVar1);
  }
  FUN_037dd4dc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                              );
    FUN_05173958(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateLobbyRequest>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x138) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x138,uVar1);
  }
  FUN_037de544();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceObjectEntry>_TypeInfo);
    FUN_0517373c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdatePlayerStatisticsRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x140) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x140,uVar1);
  }
  FUN_037ddb6c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
    FUN_05173304(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateStatisticDefinitionRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x148) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x148,uVar1);
  }
  FUN_037dc7bc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo);
    FUN_051733b8(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateStatisticsRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x150) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x150,uVar1);
  }
  FUN_037dcb04();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
    FUN_0516da54(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateUserDataRequest>_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x158) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x158,uVar1);
  }
  FUN_037d4134();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VehicleComponent>_TypeInfo);
    FUN_0516e0a8(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateUserTitleDisplayNameRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x160) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x160,uVar1);
  }
  FUN_037d54e4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
    FUN_0516dc70(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UploadCertificateRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x168) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x168,uVar1);
  }
  FUN_037d4b0c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VirtualMesh>_TypeInfo)
    ;
    FUN_0516e210(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UploadSecretRequest>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x170) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x170,uVar1);
  }
  FUN_037d5b74();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRLoader>_TypeInfo);
    FUN_0516ddd8(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateAmazonReceiptRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x178) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x178,uVar1);
  }
  FUN_037d4e54();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_0516e2c4(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateEntityTokenRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x180) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x180,uVar1);
  }
  FUN_037d5ebc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TreeViewItemWrapper>_TypeInfo);
    FUN_0516de8c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateGooglePlayPurchaseRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x188) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x188,uVar1);
  }
  FUN_037d519c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UILineInfo>_TypeInfo);
    FUN_0516e15c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ValidateIOSReceiptRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 400) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 400,uVar1);
  }
  FUN_037d582c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueInput>_TypeInfo);
    FUN_0516db08(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteClientCharacterEventRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x198) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x198,uVar1);
  }
  FUN_037d447c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRNodeState>_TypeInfo)
    ;
    FUN_0516dbbc(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteClientPlayerEventRequest>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1a0,uVar1);
  }
  FUN_037d47c4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo)
    ;
    FUN_05173a0c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteEventsRequest>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a8) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1a8,uVar1);
  }
  FUN_037de88c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
    FUN_05173e44(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteTitleEventRequest>_TypeInfo,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1b0,uVar1);
  }
  FUN_037dfc3c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UserVariable>_TypeInfo
                              );
    FUN_05173c28(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AbortFileUploadsResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b8) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1b8,uVar1);
  }
  FUN_037df264();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueOutput>_TypeInfo)
    ;
    FUN_05173fac(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AcceptTradeResponse>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1c0,uVar1);
  }
  FUN_037e02cc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
    FUN_05173cdc(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddFriendResult>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c8) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1c8,uVar1);
  }
  FUN_037df5ac();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo
                              );
    FUN_05174060(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddGenericIDResult>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1d0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1d0,uVar1);
  }
  FUN_037e0614();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<uint>_TypeInfo);
    FUN_05173d90(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddInventoryItemsResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1d8) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1d8,uVar1);
  }
  FUN_037df8f4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VertexAttribute>_TypeInfo);
    FUN_05174114(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddOrUpdateContactEmailResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1e0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1e0,uVar1);
  }
  FUN_037e095c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TransformRecord>_TypeInfo);
    FUN_05173ef8(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddUsernamePasswordResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1e8) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1e8,uVar1);
  }
  FUN_037dff84();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                              );
    FUN_05173ac0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AndroidDevicePushNotificationRegistrationResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1f0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1f0,uVar1);
  }
  FUN_037debd4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_05173b74(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ApplyToGroupResponse>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1f8) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x1f8,uVar1);
  }
  FUN_037def1c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
    FUN_0516e378(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AttributeInstallResult>_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x200) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x200,uVar1);
  }
  FUN_037d6204();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
    FUN_0516e7b0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AuthenticateCustomIdResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x208) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x208,uVar1);
  }
  FUN_037d75b4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo);
    FUN_0516e594(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<BuildAliasDetailsResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x210) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x210,uVar1);
  }
  FUN_037d6bdc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_0516e918(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelAllMatchmakingTicketsForPlayerResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x218) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x218,uVar1);
  }
  FUN_037d7c44();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo)
    ;
    FUN_0516e648(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelAllServerBackfillTicketsForPlayerResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x220) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x220,uVar1);
  }
  FUN_037d6f24();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516e9cc(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelMatchmakingTicketResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x228) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x228,uVar1);
  }
  FUN_037d7f8c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                              );
    FUN_0516e6fc(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelServerBackfillTicketResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x230) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x230,uVar1);
  }
  FUN_037d726c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                              );
    FUN_0516e864(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConfirmPurchaseResult>_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x238) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x238,uVar1);
  }
  FUN_037d78fc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo);
    FUN_0516e42c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeItemResult>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x240) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x240,uVar1);
  }
  FUN_037d654c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_0516e4e0(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeMicrosoftStoreEntitlementsResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x248) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x248,uVar1);
  }
  FUN_037d6894();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_051741c8(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumePS5EntitlementsResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x250) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x250,uVar1);
  }
  FUN_037e0ca4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
    FUN_051746b4(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumePSNEntitlementsResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 600) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 600,uVar1);
  }
  FUN_037e239c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
    FUN_05174768(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeXboxEntitlementsResult>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x260) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x260,uVar1);
  }
  FUN_037e26e4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettings>_TypeInfo);
    FUN_0517481c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithCustomContainerResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x268) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x268,uVar1);
  }
  FUN_037e2a2c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Uri>_TypeInfo);
    FUN_05174600(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithManagedContainerResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x270) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x270,uVar1);
  }
  FUN_037e2054();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_0517427c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithProcessBasedServerResponse>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x278) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x278,uVar1);
  }
  FUN_037e0fec();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Variable>_TypeInfo);
    FUN_05174330(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateDraftItemResponse>_TypeInfo,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x280) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x280,uVar1);
  }
  FUN_037e1334();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Usable>_TypeInfo);
    FUN_05172704(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateExperimentResult>_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x288) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x288,uVar1);
  }
  FUN_037da3a4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlReflectionMember>_TypeInfo);
    FUN_05172a88(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateGroupResponse>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x290) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x290,uVar1);
  }
  FUN_037db40c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_TypeInfo
                              );
    FUN_0517286c(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateGroupRoleResponse>_TypeInfo,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x298) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x298,uVar1);
  }
  FUN_037daa34();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo
                              );
    FUN_05172d58(uVar1,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateLobbyResult>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2a0) = uVar1;
    thunk_FUN_02f411dc(lVar3 + 0x2a0,uVar1);
  }
  FUN_037dba9c();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_06931a5c();
  return;
}


