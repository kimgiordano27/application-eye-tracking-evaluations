/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARCameraBackground$$OnCameraFrameReceived
ENTRY_POINT: 064d2fa8
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_ARFoundation_ARCameraBackground__OnCameraFrameReceived(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02f07e70(System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<UnityUIQuestTrackTemplate>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<UserVariable>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<ValueOutput>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<Var>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<Vector2>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<Vector3>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VehicleComponent>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VehicleTypes>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VertexAttribute>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VirtualMesh>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VisualElement>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VolumeFog>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VolumeParameter>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<VolumeStack>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<WaypointSettings>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<WeakReference>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<X509CertificateImpl>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRLoader>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XmlNode>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XmlSchema>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<fsConverter>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<fsData>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<AnimatorSaver_TriggerData>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetRemoteLoginEndpointRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetServerBackfillTicketRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetSharedGroupDataRequest>_TypeInfo)
  ;
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStatisticDefinitionRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStatisticsForEntitiesRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStatisticsRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetSteamRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStoreItemsRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTelemetryKeyRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTimeRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleDataRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleEnabledForMultiplayerServersStatusRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleMultiplayerServersQuotaChangeRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleMultiplayerServersQuotasRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleNewsRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitlePlayersFromMasterPlayerAccountIdsRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitlePlayersFromXboxLiveIDsRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitlePublicKeyRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTradeStatusRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTransactionHistoryRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTreatmentAssignmentRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTwitchRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetUserDataRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetUserInventoryRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GrantCharacterToUserRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<IncrementLeaderboardVersionRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<IncrementStatisticVersionRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InitiateFileUploadsRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsEmptyRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsGetOperationStatusRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsGetPendingOperationsRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsSetPerformanceRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsSetStorageRetentionRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InviteToGroupRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InviteToLobbyRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<IsMemberRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinArrangedLobbyRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinLobbyAsServerRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinLobbyRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinMatchmakingTicketRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LeaveLobbyAsServerRequest>_TypeInfo)
  ;
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LeaveLobbyRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkAndroidDeviceIDRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkAppleRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkCustomIDRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkFacebookAccountRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkFacebookInstantGamesIdRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkGameCenterAccountRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkGoogleAccountRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkGooglePlayGamesServicesAccountRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkIOSDeviceIDRequest>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkKongregateAccountRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkNintendoServiceAccountRequest>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkNintendoSwitchDeviceIdRequest>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkOpenIdConnectRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkPSNAccountRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkSteamAccountRequest>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetQueueStatisticsRequest>_TypeInfo)
  ;
  FUN_02f07e70(PTR_DAT_06d6f950);
  FUN_02f07e70(PTR_DAT_06d0e0c0);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetPurchaseRequest>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x12) = 1;
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
                                System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo
                              );
    FUN_0516bb5c(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetRemoteLoginEndpointRequest>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_037cbaac();
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
                                  System_Collections_Generic_List<X509CertificateImpl>_TypeInfo);
      FUN_0516bc18(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleEnabledForMultiplayerServersStatusRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cbdf4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<AnimatorSaver_TriggerData>_TypeInfo
                                );
      FUN_0516c050(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetUserDataRequest>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cd1a4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIPanel>_TypeInfo);
      FUN_0516be34(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InviteToGroupRequest>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cc7cc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Var>_TypeInfo);
      FUN_0516c1b8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkCustomIDRequest>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cd834();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UnityUIQuestGroupTemplate>_TypeInfo
                                );
      FUN_0516bee8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkNintendoServiceAccountRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037ccb14();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo
                                );
      FUN_0516c26c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkNintendoSwitchDeviceIdRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cdb7c();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UnityEvent>_TypeInfo
                                );
      FUN_0516bf9c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkOpenIdConnectRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cce5c();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeParameter>_TypeInfo);
      FUN_0516c320(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkPSNAccountRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037cdec4();
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
                                  System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo
                                );
      FUN_05171f48(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkSteamAccountRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d82d4();
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
                                  System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
      FUN_05172380(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetServerBackfillTicketRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d9684();
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
                                  System_Collections_Generic_List<WeakReference>_TypeInfo);
      FUN_05172164(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetSharedGroupDataRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8cac();
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
                                  System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo
                                );
      FUN_051724e8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStatisticDefinitionRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d9d14();
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
                                  System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
      FUN_05172218(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStatisticsForEntitiesRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8ff4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIDocument>_TypeInfo
                                );
      FUN_0517259c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStatisticsRequest>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037da05c();
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
                                  System_Collections_Generic_List<UnityUIQuestTrackTemplate>_TypeInfo
                                );
      FUN_051722cc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetSteamRequest>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d933c();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo
                                );
      FUN_0516d34c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetStoreItemsRequest>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2064();
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
                                  System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
      FUN_0516d784(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTelemetryKeyRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d3414();
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
                                  System_Collections_Generic_List<fsConverter>_TypeInfo);
      FUN_0516d568(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTimeRequest>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2a3c();
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
                                  System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo
                                );
      FUN_0516d8ec(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleDataRequest>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d3aa4();
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
                                  System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
      FUN_0516d61c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleMultiplayerServersQuotaChangeRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2d84();
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
                                  System_Collections_Generic_List<VehicleTypes>_TypeInfo);
      FUN_0516d9a0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleMultiplayerServersQuotasRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d3dec();
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
                                  System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
      FUN_0516d6d0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitleNewsRequest>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d30cc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      FUN_05173250(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitlePlayersFromMasterPlayerAccountIdsRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dc474();
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
                                  System_Collections_Generic_List<VisualElement>_TypeInfo);
      FUN_05173688(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitlePlayersFromXboxLiveIDsRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dd824();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIVertex>_TypeInfo);
      FUN_0517346c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTitlePublicKeyRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dce4c();
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
                                  System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo
                                );
      FUN_051737f0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTradeStatusRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037ddeb4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsData>_TypeInfo);
      FUN_05173520(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTransactionHistoryRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dd194();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeFog>_TypeInfo)
      ;
      FUN_051738a4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTreatmentAssignmentRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037de1fc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
      FUN_051735d4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetTwitchRequest>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dd4dc();
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
                                  System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                                );
      FUN_05173958(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetUserInventoryRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037de544();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
      FUN_0516da54(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GrantCharacterToUserRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x100) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x100,uVar2);
    }
    FUN_037d4134();
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
                                  System_Collections_Generic_List<VehicleComponent>_TypeInfo);
      FUN_0516e0a8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<IncrementLeaderboardVersionRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x108) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x108,uVar2);
    }
    FUN_037d54e4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
      FUN_0516dc70(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<IncrementStatisticVersionRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x110) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x110,uVar2);
    }
    FUN_037d4b0c();
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
                                  System_Collections_Generic_List<VirtualMesh>_TypeInfo);
      FUN_0516e210(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InitiateFileUploadsRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x118) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x118,uVar2);
    }
    FUN_037d5b74();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRLoader>_TypeInfo);
      FUN_0516ddd8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsEmptyRequest>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x120) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x120,uVar2);
    }
    FUN_037d4e54();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeName>_TypeInfo);
      FUN_0516e2c4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsGetOperationStatusRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x128) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x128,uVar2);
    }
    FUN_037d5ebc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TreeViewItemWrapper>_TypeInfo);
      FUN_0516de8c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsGetPendingOperationsRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x130) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x130,uVar2);
    }
    FUN_037d519c();
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
                                  System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo
                                );
      FUN_05173a0c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsSetPerformanceRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x138) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x138,uVar2);
    }
    FUN_037de88c();
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
                                  System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
      FUN_05173e44(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InsightsSetStorageRetentionRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x140) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x140,uVar2);
    }
    FUN_037dfc3c();
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
                                  System_Collections_Generic_List<UserVariable>_TypeInfo);
      FUN_05173c28(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<InviteToLobbyRequest>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x148) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x148,uVar2);
    }
    FUN_037df264();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<ValueOutput>_TypeInfo);
      FUN_05173fac(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<IsMemberRequest>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x150) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x150,uVar2);
    }
    FUN_037e02cc();
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
                                  System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
      FUN_05173cdc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinArrangedLobbyRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x158) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x158,uVar2);
    }
    FUN_037df5ac();
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
                                  System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo
                                );
      FUN_05174060(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinLobbyAsServerRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x160) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x160,uVar2);
    }
    FUN_037e0614();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<uint>_TypeInfo);
      FUN_05173d90(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinLobbyRequest>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x168) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x168,uVar2);
    }
    FUN_037df8f4();
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
                                  System_Collections_Generic_List<VertexAttribute>_TypeInfo);
      FUN_05174114(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<JoinMatchmakingTicketRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x170) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x170,uVar2);
    }
    FUN_037e095c();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
      FUN_0516e378(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LeaveLobbyAsServerRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x178) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x178,uVar2);
    }
    FUN_037d6204();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
      FUN_0516e7b0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LeaveLobbyRequest>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x180) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x180,uVar2);
    }
    FUN_037d75b4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo)
      ;
      FUN_0516e594(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkAndroidDeviceIDRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x188) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x188,uVar2);
    }
    FUN_037d6bdc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
      FUN_0516e918(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkAppleRequest>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 400) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 400,uVar2);
    }
    FUN_037d7c44();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeStack>_TypeInfo);
      FUN_0516e648(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkFacebookAccountRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x198) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x198,uVar2);
    }
    FUN_037d6f24();
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
                                  System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
      FUN_0516e9cc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkFacebookInstantGamesIdRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x1a0,uVar2);
    }
    FUN_037d7f8c();
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
                                  System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                                );
      FUN_0516e6fc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkGameCenterAccountRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x1a8,uVar2);
    }
    FUN_037d726c();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
      FUN_051741c8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkGoogleAccountRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x1b0,uVar2);
    }
    FUN_037e0ca4();
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
                                  System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
      FUN_051746b4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkGooglePlayGamesServicesAccountRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x1b8,uVar2);
    }
    FUN_037e239c();
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
                                  System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
      FUN_05174768(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkIOSDeviceIDRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x1c0,uVar2);
    }
    FUN_037e26e4();
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
                                  System_Collections_Generic_List<WaypointSettings>_TypeInfo);
      FUN_0517481c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<LinkKongregateAccountRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x1c8,uVar2);
    }
    FUN_037e2a2c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


