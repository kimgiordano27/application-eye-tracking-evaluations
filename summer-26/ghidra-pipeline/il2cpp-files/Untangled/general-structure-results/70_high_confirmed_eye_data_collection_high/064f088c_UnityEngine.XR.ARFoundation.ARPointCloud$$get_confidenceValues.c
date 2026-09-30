/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARPointCloud$$get_confidenceValues
ENTRY_POINT: 064f088c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARFoundation_ARPointCloud__get_confidenceValues(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x210));
  FUN_02f07e70(System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRLoader>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XmlNode>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<XmlSchema>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<fsConverter>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<fsData>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<AnimatorSaver_TriggerData>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitleNewsResult>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitlePlayersFromMasterPlayerAccountIdsResponse>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitlePlayersFromProviderIDsResponse>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitlePublicKeyResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTradeStatusResponse>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTransactionHistoryResponse>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTreatmentAssignmentResult>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTwitchResponse>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetUserDataResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetUserInventoryResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GrantCharacterToUserResult>_TypeInfo)
  ;
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<IncrementLeaderboardVersionResponse>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<IncrementStatisticVersionResponse>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InitiateFileUploadsResponse>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetDetailsResponse>_TypeInfo)
  ;
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetLimitsResponse>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetOperationStatusResponse>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetPendingOperationsResponse>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsOperationResponse>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InviteToGroupResponse>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<IsMemberResponse>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<JoinLobbyAsServerResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<JoinLobbyResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<JoinMatchmakingTicketResult>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkAndroidDeviceIDResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkCustomIDResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkFacebookAccountResult>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkFacebookInstantGamesIdResult>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkGameCenterAccountResult>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkGoogleAccountResult>_TypeInfo);
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkGooglePlayGamesServicesAccountResult>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkIOSDeviceIDResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkKongregateAccountResult>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkNintendoSwitchDeviceIdResult>_TypeInfo
              );
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkPSNAccountResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkSteamAccountResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkTwitchAccountResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkXboxAccountResult>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ListAssetSummariesResponse>_TypeInfo)
  ;
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ListBuildAliasesResponse>_TypeInfo);
  FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetStoreItemsResult>_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d92458);
  FUN_02f07e70(PTR_DAT_06d702f8);
  FUN_02f07e70(PTR_DAT_06d6f978);
  *(undefined1 *)(unaff_x20 + 0x1ac) = 1;
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
    FUN_0516bc18(uVar2,uVar4,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitleNewsResult>_TypeInfo,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<IncrementLeaderboardVersionResponse>_TypeInfo
                   ,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<JoinLobbyResult>_TypeInfo,0);
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
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkNintendoSwitchDeviceIdResult>_TypeInfo
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
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkPSNAccountResult>_TypeInfo,0
                  );
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo
                                );
      FUN_05171f48(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkSteamAccountResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d82d4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
      FUN_05172380(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkTwitchAccountResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d9684();
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
                                  System_Collections_Generic_List<WeakReference>_TypeInfo);
      FUN_05172164(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkXboxAccountResult>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8cac();
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
                                  System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo
                                );
      FUN_051724e8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ListAssetSummariesResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d9d14();
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
                                  System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
      FUN_05172218(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ListBuildAliasesResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d8ff4();
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
                                  System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo
                                );
      FUN_0516d34c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitlePlayersFromMasterPlayerAccountIdsResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2064();
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
                                  System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
      FUN_0516d784(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitlePlayersFromProviderIDsResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d3414();
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
                                  System_Collections_Generic_List<fsConverter>_TypeInfo);
      FUN_0516d568(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitlePublicKeyResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2a3c();
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
                                  System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo
                                );
      FUN_0516d8ec(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTradeStatusResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d3aa4();
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
                                  System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
      FUN_0516d61c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTransactionHistoryResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d2d84();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      FUN_05173250(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTreatmentAssignmentResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dc474();
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
                                  System_Collections_Generic_List<VisualElement>_TypeInfo);
      FUN_05173688(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTwitchResponse>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dd824();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIVertex>_TypeInfo);
      FUN_0517346c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetUserDataResult>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dce4c();
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
                                  System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo
                                );
      FUN_051737f0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetUserInventoryResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037ddeb4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsData>_TypeInfo);
      FUN_05173520(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GrantCharacterToUserResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dd194();
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
                                  System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
      FUN_0516da54(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<IncrementStatisticVersionResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d4134();
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
                                  System_Collections_Generic_List<VehicleComponent>_TypeInfo);
      FUN_0516e0a8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InitiateFileUploadsResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d54e4();
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
                                  System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
      FUN_0516dc70(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetDetailsResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d4b0c();
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
                                  System_Collections_Generic_List<VirtualMesh>_TypeInfo);
      FUN_0516e210(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetLimitsResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d5b74();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRLoader>_TypeInfo);
      FUN_0516ddd8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetOperationStatusResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d4e54();
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
                                  System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo
                                );
      FUN_05173a0c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsGetPendingOperationsResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037de88c();
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
                                  System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
      FUN_05173e44(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InsightsOperationResponse>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037dfc3c();
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
                                  System_Collections_Generic_List<UserVariable>_TypeInfo);
      FUN_05173c28(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<InviteToGroupResponse>_TypeInfo,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037df264();
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
                                  System_Collections_Generic_List<ValueOutput>_TypeInfo);
      FUN_05173fac(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<IsMemberResponse>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037e02cc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
      FUN_05173cdc(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<JoinLobbyAsServerResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037df5ac();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
      FUN_0516e378(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<JoinMatchmakingTicketResult>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_037d6204();
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
                                  System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
      FUN_0516e7b0(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkAndroidDeviceIDResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x100) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x100,uVar2);
    }
    FUN_037d75b4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo)
      ;
      FUN_0516e594(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkCustomIDResult>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x108) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x108,uVar2);
    }
    FUN_037d6bdc();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
      FUN_0516e918(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkFacebookAccountResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x110) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x110,uVar2);
    }
    FUN_037d7c44();
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
                                  System_Collections_Generic_List<VolumeStack>_TypeInfo);
      FUN_0516e648(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkFacebookInstantGamesIdResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x118) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x118,uVar2);
    }
    FUN_037d6f24();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
      FUN_051741c8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkGameCenterAccountResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x120) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x120,uVar2);
    }
    FUN_037e0ca4();
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
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitleMultiplayerServersQuotaChangeResponse>_TypeInfo
                                );
      FUN_0517454c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkGoogleAccountResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x128) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x128,uVar2);
    }
    FUN_037e1d0c();
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
                                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitleMultiplayerServersQuotasResponse>_TypeInfo
                                );
      FUN_051743e4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkGooglePlayGamesServicesAccountResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x130) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x130,uVar2);
    }
    FUN_037e167c();
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
                                  System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
      FUN_051746b4(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkIOSDeviceIDResult>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x138) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x138,uVar2);
    }
    FUN_037e239c();
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
                                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<GetTitleEnabledForMultiplayerServersStatusResponse>_TypeInfo
                                );
      FUN_05174498(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<LinkKongregateAccountResult>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x140) = uVar2;
      thunk_FUN_02f411dc(lVar1 + 0x140,uVar2);
    }
    FUN_037e19c4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


