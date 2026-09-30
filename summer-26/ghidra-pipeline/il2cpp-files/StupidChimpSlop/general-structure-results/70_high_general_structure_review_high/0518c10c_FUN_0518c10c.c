/*
FUNCTION_NAME: FUN_0518c10c
ENTRY_POINT: 0518c10c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_21
*/


long FUN_0518c10c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_24;
  undefined8 local_18;
  
  local_18 = param_1;
  if ((DAT_06a51bc1 & 1) == 0) {
    FUN_02d4dc40(PlayFab_EconomyModels_GetDraftItemRequest_var);
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(PlayFab_GroupsModels_GetGroupRequest_var);
    FUN_02d4dc40(PlayFab_GroupsModels_GetGroupResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetInventoryCollectionIdsRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetInventoryCollectionIdsResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetInventoryItemsRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetInventoryItemsResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetInventoryOperationStatusRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetInventoryOperationStatusResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemContainersRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemContainersResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemModerationStateResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemPublishStatusRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemPublishStatusResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemReviewSummaryRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemReviewSummaryResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemReviewsRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemReviewsResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemsRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetItemsResponse_var);
    FUN_02d4dc40(PlayFab_AddonModels_GetKongregateRequest_var);
    FUN_02d4dc40(PlayFab_AddonModels_GetKongregateResponse_var);
    FUN_02d4dc40(PlayFab_LocalizationModels_GetLanguageListRequest_var);
    FUN_02d4dc40(PlayFab_LocalizationModels_GetLanguageListResponse_var);
    FUN_02d4dc40(PlayFab_ExperimentationModels_GetLatestScorecardRequest_var);
    FUN_02d4dc40(PlayFab_ExperimentationModels_GetLatestScorecardResult_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardAroundCharacterRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_var);
    FUN_02d4dc40(PlayFab_ProgressionModels_GetLeaderboardAroundEntityRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardAroundPlayerRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_var);
    FUN_02d4dc40(PlayFab_ProgressionModels_GetLeaderboardDefinitionRequest_var);
    FUN_02d4dc40(PlayFab_ProgressionModels_GetLeaderboardDefinitionResponse_var);
    FUN_02d4dc40(PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardForUsersCharactersRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_GetLeaderboardResult_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetLobbyRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetLobbyResult_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMatchRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMatchResult_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMatchmakingQueueRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMatchmakingQueueResult_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMatchmakingTicketResult_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensResponse_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMultiplayerServerDetailsRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMultiplayerServerLogsRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMultiplayerServerLogsResponse_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetMultiplayerSessionLogsBySessionIdRequest_var);
    FUN_02d4dc40(PlayFab_AddonModels_GetNintendoRequest_var);
    FUN_02d4dc40(PlayFab_AddonModels_GetNintendoResponse_var);
    FUN_02d4dc40(PlayFab_DataModels_GetObjectsRequest_var);
    FUN_02d4dc40(PlayFab_DataModels_GetObjectsResponse_var);
    FUN_02d4dc40(PlayFab_AddonModels_GetPSNRequest_var);
    FUN_02d4dc40(PlayFab_AddonModels_GetPSNResponse_var);
    DAT_06a51bc1 = 1;
  }
  lVar2 = Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__<>m__Finally1(&local_18,0);
  uVar3 = local_18;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)PlayFab_EconomyModels_GetDraftItemRequest_var + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar1 = FUN_0518303c(uVar3);
  uVar3 = local_18;
  if (uVar1 < 0x43264357) {
    if (uVar1 < 0x1fbb72da) {
      if (uVar1 < 0xeb4040e) {
        if (uVar1 < 0x6a85abf) {
          if (uVar1 < 0x3e76232) {
            if (uVar1 < 0x2d32f61) {
              if (uVar1 == 0xe38aef) {
                lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                            PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var
                                          );
                FUN_0518eaac(lVar2,uVar3);
                return lVar2;
              }
              if (uVar1 == 0x2d32f60) {
LAB_0518d480:
                lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                            PlayFab_EconomyModels_GetItemContainersResponse_var);
                FUN_0518dc94(lVar2,uVar3);
                return lVar2;
              }
            }
            else {
              if (uVar1 == 0x3d3458d) {
LAB_0518cf78:
                lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_GroupsModels_GetGroupResponse_var)
                ;
                FUN_0518da2c(lVar2,uVar3);
                return lVar2;
              }
              if (uVar1 == 0x3e76231) goto LAB_0518d5f4;
            }
            goto LAB_0518d4f8;
          }
          if (uVar1 < 0x4e5cf63) {
            if (uVar1 == 0x4b34ca3) goto LAB_0518d288;
            if (uVar1 == 0x4e5cf62) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_MultiplayerModels_GetMatchRequest_var);
              FUN_0518e7ec(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_0518d4f8;
          }
          if (uVar1 == 0x4f8c0f2) {
LAB_0518d6f0:
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_EconomyModels_GetInventoryOperationStatusRequest_var
                                      );
            FUN_0518dbe4(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x5f1e153) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_EconomyModels_GetItemRequest_var);
            FUN_0518dea4(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x6a85abe;
        }
        else {
          if (uVar1 < 0x8891a80) {
            if (uVar1 < 0x80ad3c8) {
              if (uVar1 == 0x73484ca) {
                lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                            PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_var
                                          );
                FUN_0518e634(lVar2,uVar3);
                return lVar2;
              }
              uVar4 = 0x80ad3c7;
              goto LAB_0518c790;
            }
            if (uVar1 == 0x8260ab1) goto LAB_0518d6f0;
            uVar4 = 0x8891a7f;
            goto LAB_0518cf30;
          }
          if (0x9956693 < uVar1) {
            if (uVar1 == 0xdcbd364) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_MultiplayerModels_GetMultiplayerServerDetailsRequest_var
                                        );
              FUN_0518ea54(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0xdf93113) {
LAB_0518d6a8:
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_EconomyModels_GetItemsResponse_var);
              FUN_0518e10c(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0xeb4040d;
            goto LAB_0518d454;
          }
          if (uVar1 == 0x904b598) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_ClientModels_GetLeaderboardAroundCharacterRequest_var
                                      );
            FUN_0518e31c(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x9956693;
        }
        goto LAB_0518d280;
      }
      if (uVar1 < 0x152663b2) {
        if (0x117fc8fe < uVar1) {
          if (uVar1 < 0x14806b86) {
            if (uVar1 == 0x121ab45f) goto LAB_0518d588;
            if (uVar1 == 0x14806b85) goto LAB_0518d5ac;
          }
          else {
            if (uVar1 == 0x14a22a97) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_ProgressionModels_GetLeaderboardAroundEntityRequest_var
                                        );
              FUN_0518e3cc(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x14aa2129) {
LAB_0518d5f4:
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_EconomyModels_GetInventoryCollectionIdsResponse_var
                                        );
              FUN_0518dadc(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x152663b1) {
LAB_0518d618:
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_EconomyModels_GetInventoryCollectionIdsRequest_var
                                        );
              FUN_0518da84(lVar2,uVar3);
              return lVar2;
            }
          }
          goto LAB_0518d4f8;
        }
        if (0x11449fc5 < uVar1) {
          if (uVar1 == 0x1175be60) goto LAB_0518d208;
          uVar4 = 0x117fc8fe;
LAB_0518ce70:
          if (uVar1 == uVar4) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_ClientModels_GetLeaderboardAroundPlayerRequest_var);
            FUN_0518e4d4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0xf9ecf9f) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_ExperimentationModels_GetLatestScorecardRequest_var);
          FUN_0518e26c(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x11449fc5;
LAB_0518cc08:
        if (uVar1 == uVar4) {
LAB_0518cd68:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetItemPublishStatusRequest_var);
          FUN_0518ddf4(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_0518d4f8;
      }
      if (uVar1 < 0x1ad307b5) {
        if (0x18378bef < uVar1) {
          if (uVar1 == 0x186b58b1) goto LAB_0518d4d4;
          if (uVar1 == 0x18f0b01b) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_ClientModels_GetLeaderboardResult_var)
            ;
            FUN_0518e6e4(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x1ad307b4;
LAB_0518d380:
          if (uVar1 == uVar4) {
LAB_0518d388:
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_MultiplayerModels_GetMatchResult_var);
            FUN_0518edc4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0x1577036f) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensRequest_var
                                    );
          FUN_0518e9a4(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x18378bef;
        goto LAB_0518d400;
      }
      if (uVar1 < 0x1d118ab3) {
        if (uVar1 == 0x1bd94aaf) {
LAB_0518d714:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_MultiplayerModels_GetMatchmakingQueueRequest_var);
          FUN_0518e844(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x1d118ab2) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_MultiplayerModels_GetLobbyResult_var);
          FUN_0518e794(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_0518d4f8;
      }
      if (uVar1 == 0x1d403932) {
LAB_0518d738:
        lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_EconomyModels_GetItemReviewsResponse_var);
        FUN_0518e05c(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x1f90f0d5) goto LAB_0518d480;
      uVar4 = 0x1fbb72d9;
    }
    else if (uVar1 < 0x2fdd0cce) {
      if (uVar1 < 0x264885cb) {
        if (uVar1 < 0x22810484) {
          if (uVar1 < 0x21cbe0c1) {
            if (uVar1 == 0x21248069) {
LAB_0518d208:
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_EconomyModels_GetItemReviewsRequest_var);
              FUN_0518df54(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x21cbe0c0) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_MultiplayerModels_GetMultiplayerSessionLogsBySessionIdRequest_var
                                        );
              FUN_0518ec0c(lVar2,uVar3);
              return lVar2;
            }
          }
          else {
            if (uVar1 == 0x2247596e) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var
                                        );
              FUN_0518e584(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x22810483) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_DataModels_GetObjectsRequest_var);
              FUN_0518ed14(lVar2,uVar3);
              return lVar2;
            }
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 < 0x2309f39a) {
          if (uVar1 == 0x22933297) goto LAB_0518d4d4;
          if (uVar1 == 0x2309f399) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_AddonModels_GetNintendoRequest_var);
            FUN_0518ecbc(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0x234bc3f1) {
LAB_0518d5d0:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_AddonModels_GetNintendoResponse_var);
          FUN_0518ec64(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x24472f6c) goto LAB_0518d288;
        uVar4 = 0x264885ca;
      }
      else {
        if (0x2a7dd255 < uVar1) {
          if (0x2d008992 < uVar1) {
            if (uVar1 != 0x2e4dd8d6) {
              if (uVar1 == 0x2f42e727) goto LAB_0518d618;
              if (uVar1 == 0x2fdd0ccd) {
                lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                            PlayFab_EconomyModels_GetItemPublishStatusResponse_var);
                FUN_0518de4c(lVar2,uVar3);
                return lVar2;
              }
              goto LAB_0518d4f8;
            }
            goto LAB_0518d4d4;
          }
          if (uVar1 == 0x2a8f1055) goto LAB_0518d4d4;
          uVar4 = 0x2d008992;
          goto LAB_0518cc08;
        }
        if (0x2955af24 < uVar1) {
          if (uVar1 == 0x296116e5) goto LAB_0518d208;
          if (uVar1 == 0x2a7dd255) goto LAB_0518cf78;
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0x267cf743) goto LAB_0518d5d0;
        uVar4 = 0x2955af24;
      }
    }
    else {
      if (uVar1 < 0x39607bfd) {
        if (0x35692f2b < uVar1) {
          if (uVar1 < 0x35f6769c) {
            if (uVar1 != 0x35728882) {
              if (uVar1 == 0x35f6769b) goto LAB_0518d660;
              goto LAB_0518d4f8;
            }
            goto LAB_0518d4d4;
          }
          if (uVar1 == 0x37f21084) goto LAB_0518d288;
          if (uVar1 == 0x387e7f36) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_ClientModels_GetLeaderboardRequest_var
                                      );
            FUN_0518e68c(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x39607bfc;
          goto LAB_0518d400;
        }
        if (0x316509dc < uVar1) {
          if (uVar1 == 0x3271abda) goto LAB_0518d288;
          uVar4 = 0x35692f2b;
          goto LAB_0518d380;
        }
        if (uVar1 == 0x314c84b8) goto LAB_0518d4d4;
        uVar4 = 0x316509dc;
LAB_0518cf30:
        if (uVar1 == uVar4) {
LAB_0518d588:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetItemReviewSummaryRequest_var);
          FUN_0518e004(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_0518d4f8;
      }
      if (0x3cdbe826 < uVar1) {
        if (uVar1 < 0x3f9b0d0e) {
          if (uVar1 == 0x3e20cb57) goto LAB_0518d288;
          if (uVar1 == 0x3f9b0d0d) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_var);
            FUN_0518e89c(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0x41cfda50) goto LAB_0518d480;
        if (uVar1 == 0x420ac1cf) goto LAB_0518d63c;
        uVar4 = 0x43264356;
LAB_0518d454:
        if (uVar1 == uVar4) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetItemReviewSummaryResponse_var);
          FUN_0518dfac(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_0518d4f8;
      }
      if (uVar1 < 0x3aaf591e) {
        if (uVar1 == 0x3a0f8419) goto LAB_0518ce34;
        uVar4 = 0x3aaf591d;
        goto LAB_0518d280;
      }
      if ((uVar1 == 0x3c147509) || (uVar1 == 0x3c9e46cd)) goto LAB_0518d4d4;
      uVar4 = 0x3cdbe826;
    }
    goto FUN_0518d4cc;
  }
  if (0x5db3474c < uVar1) {
    if (uVar1 < 0x6da7ba90) {
      if (0x67526a83 < uVar1) {
        if (uVar1 < 0x68f2f200) {
          if (uVar1 < 0x679a84b7) {
            if (uVar1 == 0x675f5c24) goto LAB_0518d4d4;
            if (uVar1 == 0x679a84b6) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_var
                                        );
              FUN_0518e374(lVar2,uVar3);
              return lVar2;
            }
          }
          else {
            if (uVar1 == 0x6859d641) goto LAB_0518d208;
            if (uVar1 == 0x68670a0e) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_EconomyModels_GetInventoryOperationStatusResponse_var
                                        );
              FUN_0518dc3c(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x68f2f1ff) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_EconomyModels_GetItemsRequest_var);
              FUN_0518e0b4(lVar2,uVar3);
              return lVar2;
            }
          }
          goto LAB_0518d4f8;
        }
        if (0x6bcf9e47 < uVar1) {
          if (uVar1 == 0x6d1c8906) goto LAB_0518d4d4;
          if (uVar1 == 0x6d5d7886) {
LAB_0518d63c:
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_EconomyModels_GetItemModerationStateRequest_var);
            FUN_0518dd44(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x6da7ba8f;
          goto LAB_0518d380;
        }
        if (uVar1 == 0x6ad44ef8) {
LAB_0518d660:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_ProgressionModels_GetLeaderboardDefinitionRequest_var)
          ;
          FUN_0518e424(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x6bcf9e47;
LAB_0518ceec:
        if (uVar1 == uVar4) {
LAB_0518cef4:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_DataModels_GetObjectsResponse_var);
          FUN_0518ebb4(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_0518d4f8;
      }
      if (uVar1 < 0x6388a555) {
        if (uVar1 < 0x6336cefb) {
          if (uVar1 == 0x629101bc) goto LAB_0518cf78;
          uVar4 = 0x6336cefa;
          goto LAB_0518cc08;
        }
        if (uVar1 == 0x63599e2b) goto LAB_0518ce34;
        uVar4 = 0x6388a554;
        goto FUN_0518d4cc;
      }
      if (0x66093981 < uVar1) {
        if (uVar1 == 0x663a8b5f) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_MultiplayerModels_GetMatchmakingTicketResult_var);
          FUN_0518e94c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x67367f45) goto LAB_0518d684;
        if (uVar1 == 0x67526a83) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensResponse_var
                                    );
          FUN_0518e9fc(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_0518d4f8;
      }
      if (uVar1 == 0x651b4884) goto LAB_0518d6a8;
      uVar4 = 0x66093981;
    }
    else {
      if (0x74d948f3 < uVar1) {
        if (uVar1 < 0x7c2afdcc) {
          if (uVar1 < 0x77584ef4) {
            if (uVar1 == 0x773889f6) {
              lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_AddonModels_GetKongregateResponse_var);
              FUN_0518e1bc(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x77584ef3) goto LAB_0518d208;
            goto LAB_0518d4f8;
          }
          if (uVar1 != 0x78c90470) {
            if (uVar1 == 0x7c2060de) goto LAB_0518d5ac;
            if (uVar1 == 0x7c2afdcb) goto LAB_0518d0ac;
            goto LAB_0518d4f8;
          }
          goto LAB_0518d588;
        }
        if (uVar1 < 0x7dd46e30) {
          if (uVar1 == 0x7d201556) {
LAB_0518d0ac:
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_EconomyModels_GetItemResponse_var);
            PlayFab_PlayFabClientAPI__ConfirmPurchase(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x7dd46e2f) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_LocalizationModels_GetLanguageListResponse_var);
            FUN_0518ed6c(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0x7e9acaf5) goto LAB_0518d714;
        if (uVar1 == 0x7f4ca0c6) goto LAB_0518d588;
        uVar4 = 0x7f79bcaa;
        goto FUN_0518d4cc;
      }
      if (uVar1 < 0x70ba3aef) {
        if (0x6ee4f33c < uVar1) {
          if (uVar1 == 0x6fd62528) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_ExperimentationModels_GetLatestScorecardResult_var);
            FUN_0518e2c4(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x70ba3aee;
          goto LAB_0518ceec;
        }
        if (uVar1 == 0x6daa9cc3) goto LAB_0518d4d4;
        uVar4 = 0x6ee4f33c;
      }
      else {
        if (uVar1 < 0x72c692fb) {
          if (uVar1 == 0x717259e3) goto LAB_0518d4d4;
          uVar4 = 0x72c692fa;
          goto LAB_0518ce70;
        }
        if (uVar1 == 0x7321939c) goto LAB_0518d288;
        if (uVar1 == 0x744ce345) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_ClientModels_GetLeaderboardForUsersCharactersRequest_var
                                    );
          FUN_0518e5dc(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x74d948f3;
      }
    }
LAB_0518d280:
    if (uVar1 == uVar4) {
LAB_0518d288:
      lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                  PlayFab_MultiplayerModels_GetMultiplayerServerLogsRequest_var);
      FUN_0518eb04(lVar2,uVar3);
      return lVar2;
    }
    goto LAB_0518d4f8;
  }
  if (uVar1 < 0x4e207cda) {
    if (0x4901dac0 < uVar1) {
      if (uVar1 < 0x4b49c203) {
        if (uVar1 < 0x49e6dbfb) {
          if (uVar1 == 0x49864735) goto LAB_0518d288;
          uVar4 = 0x49e6dbfa;
          goto LAB_0518d280;
        }
        if (uVar1 == 0x4afc6f74) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetItemContainersRequest_var);
          FUN_0518dcec(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x4b49c202;
      }
      else {
        if (0x4c5b268a < uVar1) {
          if (uVar1 == 0x4db6aff8) goto LAB_0518d4d4;
          if (uVar1 == 0x4e078eee) goto LAB_0518d288;
          uVar4 = 0x4e207cd9;
          goto LAB_0518d400;
        }
        if (uVar1 == 0x4b8efc86) goto LAB_0518d4d4;
        uVar4 = 0x4c5b268a;
      }
FUN_0518d4cc:
      if (uVar1 == uVar4) {
LAB_0518d4d4:
        lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_AddonModels_GetPSNRequest_var);
        FUN_0518bbe8(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_0518d4f8;
    }
    if (uVar1 < 0x453fc9ab) {
      if (0x446aecfa < uVar1) {
        if (uVar1 == 0x44fc006e) {
LAB_0518d5ac:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_EconomyModels_GetInventoryItemsResponse_var);
          FUN_0518db8c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x453fc9aa) goto LAB_0518d6cc;
        goto LAB_0518d4f8;
      }
      if (uVar1 == 0x436f345d) goto LAB_0518cef4;
      uVar4 = 0x446aecfa;
LAB_0518c790:
      if (uVar1 == uVar4) {
        lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                    PlayFab_EconomyModels_GetItemModerationStateResponse_var);
        FUN_0518dd9c(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_0518d4f8;
    }
    if (uVar1 < 0x47570a96) {
      if (uVar1 == 0x4737ea1d) {
        lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                    PlayFab_LocalizationModels_GetLanguageListRequest_var);
        FUN_0518e214(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x47570a95) {
LAB_0518ce34:
        lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                    PlayFab_MultiplayerModels_GetMatchmakingQueueResult_var);
        FUN_0518e8f4(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_0518d4f8;
    }
    if (uVar1 == 0x47933760) {
      lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_MultiplayerModels_GetLobbyRequest_var);
      FUN_0518e73c(lVar2,uVar3);
      return lVar2;
    }
    if (uVar1 == 0x48ff55be) goto LAB_0518d4d4;
    uVar4 = 0x4901dac0;
  }
  else {
    if (uVar1 < 0x57b752b4) {
      if (uVar1 < 0x521adf0e) {
        if (uVar1 < 0x51659515) {
          if (uVar1 == 0x4f9fde1d) goto LAB_0518d618;
          uVar4 = 0x51659514;
          goto LAB_0518c790;
        }
        if (uVar1 == 0x51f8ce0c) goto LAB_0518d388;
        uVar4 = 0x521adf0d;
      }
      else {
        if (uVar1 < 0x5534a925) {
          if (uVar1 == 0x54e2d1f8) goto LAB_0518d288;
          if (uVar1 == 0x5534a924) {
            lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_EconomyModels_GetInventoryItemsRequest_var);
            FUN_0518db34(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_0518d4f8;
        }
        if (uVar1 == 0x568e76c0) goto LAB_0518d208;
        if (uVar1 == 0x5793f456) {
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_ProgressionModels_GetLeaderboardDefinitionResponse_var
                                    );
          FUN_0518e52c(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x57b752b3;
      }
      goto FUN_0518d4cc;
    }
    if (uVar1 < 0x5ae8cd53) {
      if (uVar1 < 0x587c2a8e) {
        if (uVar1 == 0x586f2d14) {
LAB_0518d684:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_AddonModels_GetKongregateRequest_var);
          FUN_0518e164(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x587c2a8d) goto LAB_0518d5d0;
      }
      else {
        if (uVar1 == 0x58d254a5) {
LAB_0518d6cc:
          lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_MultiplayerModels_GetMultiplayerServerLogsResponse_var
                                    );
          FUN_0518eb5c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x593ccbdd) goto LAB_0518d5f4;
        if (uVar1 == 0x5ae8cd52) goto LAB_0518d63c;
      }
      goto LAB_0518d4f8;
    }
    if (uVar1 < 0x5b7ca1b7) {
      if (uVar1 == 0x5b4fbbe0) goto LAB_0518cd68;
      uVar4 = 0x5b7ca1b6;
      goto LAB_0518d454;
    }
    if (uVar1 == 0x5cd7a24f) goto LAB_0518d738;
    if (uVar1 == 0x5d955d38) goto LAB_0518d480;
    uVar4 = 0x5db3474c;
  }
LAB_0518d400:
  if (uVar1 == uVar4) {
    lVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_var);
    FUN_0518e47c(lVar2,uVar3);
    return lVar2;
  }
LAB_0518d4f8:
  lVar2 = FUN_051a0eec(local_18,uVar1,0);
  if (lVar2 == 0) {
    local_24 = uVar1;
    uVar3 = thunk_FUN_02d8a270(*(undefined8 *)PlayFab_GroupsModels_GetGroupRequest_var,&local_24);
    uVar3 = FUN_04e762a8(*(undefined8 *)PlayFab_AddonModels_GetPSNResponse_var,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
    }
    FUN_05ea29a0(uVar3,0);
    return 0;
  }
  return lVar2;
}


