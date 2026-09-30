/*
FUNCTION_NAME: Unity.VisualScripting.Dependencies.NCalc.NCalcParser$$additiveExpression
ENTRY_POINT: 064c34bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 217
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_21
*/


void Unity_VisualScripting_Dependencies_NCalc_NCalcParser__additiveExpression(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTelemetryKeyRequest>_TypeInfo)
  ;
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTitleMultiplayerServersQuotaChangeRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateUploadUrlsRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAppleRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAssetRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildAliasRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRegionRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteCertificateRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteContainerImageRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteEntityItemReviewsRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExclusionGroupRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExperimentRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookInstantGamesRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFilesRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGoogleRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGroupRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryCollectionRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryItemsRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteItemRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteKongregateRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardDefinitionRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardEntriesRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLobbyRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteNintendoRequest>_TypeInfo);
  FUN_02f07e70(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
  FUN_02f07e70(OVRTask<OVRPlugin_Result>_TypeInfo);
  FUN_02f07e70(OVRTask<OVRAnchor>_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d02128);
  FUN_02f07e70(PTR_DAT_06d6f8e0);
  *(undefined1 *)(unaff_x20 + 0xf30) = 1;
  FUN_064b9884();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509CertificateImpl>_TypeInfo);
    FUN_0516bc18(uVar2,uVar4,*(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_037cbdf4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<AnimatorSaver_TriggerData>_TypeInfo
                                );
      FUN_0516c050(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cd1a4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIPanel>_TypeInfo);
      FUN_0516be34(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptTradeRequest>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cc7cc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Var>_TypeInfo);
      FUN_0516c1b8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AttributeInstallRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cd834();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UnityUIQuestGroupTemplate>_TypeInfo
                                );
      FUN_0516bee8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeMicrosoftStoreEntitlementsRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037ccb14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo
                                );
      FUN_0516c26c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateGroupRequest>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cdb7c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UnityEvent>_TypeInfo
                                );
      FUN_0516bf9c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdatePSNRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cce5c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeParameter>_TypeInfo);
      FUN_0516c320(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAppleRequest>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cdec4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UICharInfo>_TypeInfo
                                );
      FUN_0516c104(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cd4ec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VirtualMeshContainer>_TypeInfo);
      FUN_0516bccc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteNintendoRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cc13c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UserCapability>_TypeInfo);
      FUN_0516bd80(uVar2,uVar4,*(undefined8 *)UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cc484();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x60) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo
                                );
      FUN_05171f48(uVar2,uVar4,*(undefined8 *)UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d82d4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x68) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
      FUN_05172380(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d9684();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x70) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WeakReference>_TypeInfo);
      FUN_05172164(uVar2,uVar4,
                   *(undefined8 *)UnityEngine_Rendering_ObjectPool<CommandBuffer>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8cac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x78) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo
                                );
      FUN_051724e8(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d9d14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x80) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
      FUN_05172218(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeBrickIndex_BrickMeta>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8ff4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x88) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIDocument>_TypeInfo
                                );
      FUN_0517259c(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeBrickIndex_VoxelMeta>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037da05c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x90) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UnityUIQuestTrackTemplate>_TypeInfo
                                );
      FUN_051722cc(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_BlendingCellInfo>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d933c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x98) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
      FUN_05172434(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellInfo>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d99cc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsObjectProcessor>_TypeInfo);
      FUN_05171ffc(uVar2,uVar4,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<List<VisualElement>>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d861c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
      FUN_051720b0(uVar2,uVar4,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8964();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo
                                );
      FUN_0516d34c(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2064();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
      FUN_0516d784(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d3414();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsConverter>_TypeInfo);
      FUN_0516d568(uVar2,uVar4,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
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
                   *(undefined8 *)UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo,0);
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
                    OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo,0);
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VehicleTypes>_TypeInfo);
      FUN_0516d9a0(uVar2,uVar4,*(undefined8 *)Language_Lua_ParserInput<char>_TypeInfo,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AbortFileUploadsRequest>_TypeInfo
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
                                  System_Collections_Generic_List<CFXR_Effect_CameraShake>_TypeInfo)
      ;
      FUN_0516d838(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptGroupApplicationRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptGroupInvitationRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlAttribute>_TypeInfo);
      FUN_0516d4b4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddFriendRequest>_TypeInfo,0);
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      FUN_05173250(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddGenericIDRequest>_TypeInfo,0
                  );
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddInventoryItemsRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddMembersRequest>_TypeInfo,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddOrUpdateContactEmailRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddSharedGroupMembersRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeFog>_TypeInfo)
      ;
      FUN_051738a4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddUserVirtualCurrencyRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddUsernamePasswordRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AndroidDevicePushNotificationRegistrationRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ApplyToGroupRequest>_TypeInfo,0
                  );
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AuthenticateCustomIdRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<BlockEntityRequest>_TypeInfo,0)
      ;
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelAllMatchmakingTicketsForPlayerRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelAllServerBackfillTicketsForPlayerRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelMatchmakingTicketRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VirtualMesh>_TypeInfo);
      FUN_0516e210(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelServerBackfillTicketRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelTradeRequest>_TypeInfo,0)
      ;
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ChangeMemberRoleRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConfirmPurchaseRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UILineInfo>_TypeInfo
                                );
      FUN_0516e15c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeItemRequest>_TypeInfo,0)
      ;
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueInput>_TypeInfo
                                );
      FUN_0516db08(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumePS5EntitlementsRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRNodeState>_TypeInfo);
      FUN_0516dbbc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumePSNEntitlementsRequest>_TypeInfo
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
                                  System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo
                                );
      FUN_05173a0c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeXboxEntitlementsRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildAliasRequest>_TypeInfo
                   ,0);
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UserVariable>_TypeInfo);
      FUN_05173c28(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithCustomContainerRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<ValueOutput>_TypeInfo);
      FUN_05173fac(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithManagedContainerRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithProcessBasedServerRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateDraftItemRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateExclusionGroupRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateExperimentRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateGroupRoleRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateLeaderboardDefinitionRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateLobbyRequest>_TypeInfo,0)
      ;
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateMatchmakingTicketRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateAppleRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo)
      ;
      FUN_0516e594(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateFacebookInstantGamesRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateFacebookRequest>_TypeInfo
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeStack>_TypeInfo);
      FUN_0516e648(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateGoogleRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateKongregateRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateNintendoRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateSteamRequest>_TypeInfo
                   ,0);
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo
                                );
      FUN_0516e42c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateTwitchRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateRemoteUserRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateServerBackfillTicketRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateServerMatchmakingTicketRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateSharedGroupRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateStatisticDefinitionRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTelemetryKeyRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTitleMultiplayerServersQuotaChangeRequest>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateUploadUrlsRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAssetRequest>_TypeInfo,0)
      ;
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildAliasRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRegionRequest>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRequest>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2a0,uVar2);
    }
    FUN_037dba9c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRReferenceImage>_TypeInfo);
      FUN_05172920(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteCertificateRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2a8,uVar2);
    }
    FUN_037dad7c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo);
      FUN_05172e0c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteContainerImageRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2b0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2b0,uVar2);
    }
    FUN_037dbde4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                );
      FUN_051729d4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteEntityItemReviewsRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2b8,uVar2);
    }
    FUN_037db0c4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeComponent>_TypeInfo);
      FUN_05172ec0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExclusionGroupRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2c0,uVar2);
    }
    FUN_037dc12c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VehicleBehaviour>_TypeInfo);
      FUN_05172bf0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExperimentRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2c8,uVar2);
    }
    FUN_037db754();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
                                );
      FUN_051727b8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookInstantGamesRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2d0,uVar2);
    }
    FUN_037da6ec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsVersionedType>_TypeInfo);
      FUN_0516c488(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFilesRequest>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2d8,uVar2);
    }
    FUN_037ce20c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsMetaProperty>_TypeInfo);
      FUN_0516c80c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGoogleRequest>_TypeInfo,0
                  );
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2e0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2e0,uVar2);
    }
    FUN_037cf274();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Volume>_TypeInfo);
      FUN_0516c5f0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGroupRequest>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2e8,uVar2);
    }
    FUN_037ce89c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f0) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UntangledEntity>_TypeInfo);
      FUN_0516c8c0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryCollectionRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2f0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2f0,uVar2);
    }
    FUN_037cf5bc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f8) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
      FUN_0516c6a4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryItemsRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x2f8,uVar2);
    }
    FUN_037cebe4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x300) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo
                                );
      FUN_0516c974(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteItemRequest>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x300) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x300,uVar2);
    }
    FUN_037cf904();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x308) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VectorImageManager>_TypeInfo);
      FUN_0516c758(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteKongregateRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x308) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x308,uVar2);
    }
    FUN_037cef2c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x310) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
      FUN_0516ca28(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardDefinitionRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x310) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x310,uVar2);
    }
    FUN_037cfc4c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x318) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<User>_TypeInfo);
      FUN_0516c53c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardEntriesRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x318) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x318,uVar2);
    }
    FUN_037ce554();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 800) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
      FUN_0516cadc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLobbyRequest>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 800) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 800,uVar2);
    }
    FUN_037cff94();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x328) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector4>_TypeInfo);
      FUN_0516ce60(uVar2,uVar4,*(undefined8 *)OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x328) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x328,uVar2);
    }
    FUN_037d0ffc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x330) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Transform>_TypeInfo)
      ;
      FUN_0516cc44(uVar2,uVar4,*(undefined8 *)OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x330) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x330,uVar2);
    }
    FUN_037d0624();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x338) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<X509Extension>_TypeInfo);
      FUN_0516cfc8(uVar2,uVar4,
                   *(undefined8 *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo,0
                  );
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x338) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x338,uVar2);
    }
    FUN_037d168c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x340) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<YogaNode>_TypeInfo);
      FUN_0516ccf8(uVar2,uVar4,*(undefined8 *)Photon_Voice_ObjectFactory<short[],_int>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x340) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x340,uVar2);
    }
    FUN_037d096c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x348) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<int2>_TypeInfo);
      FUN_0516d07c(uVar2,uVar4,*(undefined8 *)Photon_Voice_ObjectFactory<float[],_int>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x348) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x348,uVar2);
    }
    FUN_037d19d4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x350) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                                );
      FUN_0516cdac(uVar2,uVar4,
                   *(undefined8 *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x350) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x350,uVar2);
    }
    FUN_037d0cb4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x358) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<float3>_TypeInfo);
      FUN_0516d130(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x358) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x358,uVar2);
    }
    FUN_037d1d1c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x360) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlSchemaElement>_TypeInfo);
      FUN_0516cf14(uVar2,uVar4,*(undefined8 *)UnityEngine_UIElements_ObjectListPool<string>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x360) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x360,uVar2);
    }
    FUN_037d1344();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x368) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
      FUN_0516cb90(uVar2,uVar4,*(undefined8 *)UnityEngine_Pool_ObjectPool<Queue<EventBase>>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x368) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x368,uVar2);
    }
    FUN_037d02dc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


