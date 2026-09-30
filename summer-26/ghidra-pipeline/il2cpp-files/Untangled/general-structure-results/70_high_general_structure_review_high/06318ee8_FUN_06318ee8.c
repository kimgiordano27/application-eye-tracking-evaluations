/*
FUNCTION_NAME: FUN_06318ee8
ENTRY_POINT: 06318ee8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06318ee8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined4 auStack_68 [2];
  
  puVar11 = PlayFab_ClientModels_GetPlayerTagsRequest_var;
  puVar10 = PlayFab_ClientModels_GetPlayerStatisticsResult_var;
  puVar9 = PlayFab_ClientModels_GetPlayerStatisticsRequest_var;
  puVar8 = PlayFab_ClientModels_GetPlayerStatisticVersionsResult_var;
  puVar7 = PlayFab_ClientModels_GetPlayerStatisticVersionsRequest_var;
  puVar6 = PlayFab_ClientModels_GetPlayerSegmentsResult_var;
  puVar5 = PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_var;
  puVar4 = PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsRequest_var;
  puVar3 = PTR_DAT_06d96378;
  puVar2 = PTR_DAT_06d02220;
  if ((bRam00000000071cd08e & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d03ce0);
    FUN_02f07e70(PTR_DAT_06d96378);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsRequest_var);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerTagsResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerTradesRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerTradesResponse_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPublisherDataRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPublisherDataResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPurchaseRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPurchaseResult_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetQueueStatisticsRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetQueueStatisticsResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerStatisticVersionsRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetRemoteLoginEndpointRequest_var);
    FUN_02f07e70(PTR_DAT_06d09660);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerSegmentsResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerStatisticsRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetServerBackfillTicketRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetServerBackfillTicketResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetSharedGroupDataRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetSharedGroupDataResult_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticDefinitionRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticDefinitionResponse_var);
    FUN_02f07e70(PTR_DAT_06d09688);
    FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticsForEntitiesRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticsForEntitiesResponse_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticsRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticsResponse_var);
    FUN_02f07e70(PlayFab_AddonModels_GetSteamRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerTagsRequest_var);
    FUN_02f07e70(PlayFab_AddonModels_GetSteamResponse_var);
    FUN_02f07e70(PlayFab_ClientModels_GetStoreItemsRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetStoreItemsResult_var);
    FUN_02f07e70(PlayFab_EventsModels_GetTelemetryKeyRequest_var);
    FUN_02f07e70(PlayFab_EventsModels_GetTelemetryKeyResponse_var);
    FUN_02f07e70(PlayFab_ClientModels_GetTimeRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetTimeResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerStatisticsResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetTitleDataRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayerStatisticVersionsResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetTitleDataResult_var);
    bRam00000000071cd08e = 1;
  }
  uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_062a6880(uVar13,*(undefined8 *)puVar6,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar13;
  thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar13);
  auStack_68[0] = 0;
  FUN_066f1fc8(auStack_68,*(undefined8 *)puVar5,0);
  uVar1 = _UNK_0144d4c8;
  uVar13 = _DAT_0144d4c0;
  lVar15 = *(long *)puVar4;
  lVar16 = *(long *)(lVar15 + 0xb8);
  *(undefined4 *)(lVar16 + 8) = auStack_68[0];
  *(undefined8 *)(lVar16 + 0x14) = uVar1;
  *(undefined8 *)(lVar16 + 0xc) = uVar13;
  *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x20) = *(undefined8 *)puVar7;
  thunk_FUN_02f411dc();
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = *(undefined8 *)puVar8;
  thunk_FUN_02f411dc();
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = *(undefined8 *)puVar9;
  thunk_FUN_02f411dc();
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = *(undefined8 *)puVar10;
  thunk_FUN_02f411dc();
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = *(undefined8 *)puVar11;
  thunk_FUN_02f411dc();
  lVar15 = FUN_02f07f14(*(undefined8 *)puVar2,4);
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0x18) != 0) {
      *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)PlayFab_ClientModels_GetTitleDataRequest_var;
      thunk_FUN_02f411dc((undefined8 *)(lVar15 + 0x20));
      if (1 < *(uint *)(lVar15 + 0x18)) {
        *(undefined8 *)(lVar15 + 0x28) =
             *(undefined8 *)PlayFab_ProgressionModels_GetStatisticsResponse_var;
        thunk_FUN_02f411dc((undefined8 *)(lVar15 + 0x28));
        if (2 < *(uint *)(lVar15 + 0x18)) {
          *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)PlayFab_AddonModels_GetSteamRequest_var;
          thunk_FUN_02f411dc((undefined8 *)(lVar15 + 0x30));
          puVar3 = PlayFab_EventsModels_GetTelemetryKeyResponse_var;
          puVar2 = PTR_DAT_06d03ce0;
          if (3 < *(uint *)(lVar15 + 0x18)) {
            *(undefined8 *)(lVar15 + 0x38) =
                 *(undefined8 *)PlayFab_ClientModels_GetPurchaseResult_var;
            thunk_FUN_02f411dc();
            plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
            *plVar14 = lVar15;
            thunk_FUN_02f411dc(plVar14,lVar15);
            lVar15 = FUN_02f07f14(*(undefined8 *)puVar2,4);
            uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
            puVar3 = PlayFab_AddonModels_GetSteamResponse_var;
            if (lVar15 == 0) goto LAB_06319780;
            if (*(int *)(lVar15 + 0x18) != 0) {
              *(undefined4 *)(lVar15 + 0x20) = uVar12;
              uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
              puVar3 = PlayFab_MultiplayerModels_GetServerBackfillTicketResult_var;
              if (1 < *(uint *)(lVar15 + 0x18)) {
                *(undefined4 *)(lVar15 + 0x24) = uVar12;
                uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                puVar3 = PlayFab_ClientModels_GetStoreItemsResult_var;
                if (2 < *(uint *)(lVar15 + 0x18)) {
                  *(undefined4 *)(lVar15 + 0x28) = uVar12;
                  uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                  if (3 < *(uint *)(lVar15 + 0x18)) {
                    *(undefined4 *)(lVar15 + 0x2c) = uVar12;
                    puVar3 = PlayFab_MultiplayerModels_GetRemoteLoginEndpointRequest_var;
                    plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                    *plVar14 = lVar15;
                    thunk_FUN_02f411dc(plVar14,lVar15);
                    lVar15 = FUN_02f07f14(*(undefined8 *)puVar2,4);
                    uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                    puVar3 = PlayFab_ClientModels_GetSharedGroupDataResult_var;
                    if (lVar15 == 0) goto LAB_06319780;
                    if (*(int *)(lVar15 + 0x18) != 0) {
                      *(undefined4 *)(lVar15 + 0x20) = uVar12;
                      uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                      puVar3 = PlayFab_ClientModels_GetPlayerTradesResponse_var;
                      if (1 < *(uint *)(lVar15 + 0x18)) {
                        *(undefined4 *)(lVar15 + 0x24) = uVar12;
                        uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                        puVar3 = PlayFab_ProgressionModels_GetStatisticsRequest_var;
                        if (2 < *(uint *)(lVar15 + 0x18)) {
                          *(undefined4 *)(lVar15 + 0x28) = uVar12;
                          uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                          if (3 < *(uint *)(lVar15 + 0x18)) {
                            *(undefined4 *)(lVar15 + 0x2c) = uVar12;
                            puVar3 = PlayFab_ProgressionModels_GetStatisticsForEntitiesResponse_var;
                            plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                            *plVar14 = lVar15;
                            thunk_FUN_02f411dc(plVar14,lVar15);
                            lVar15 = FUN_02f07f14(*(undefined8 *)puVar2,4);
                            uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                            puVar2 = PlayFab_ClientModels_GetStoreItemsRequest_var;
                            if (lVar15 == 0) goto LAB_06319780;
                            if (*(int *)(lVar15 + 0x18) != 0) {
                              *(undefined4 *)(lVar15 + 0x20) = uVar12;
                              uVar12 = FUN_066a0664(*(undefined8 *)puVar2,0);
                              puVar2 = PlayFab_ClientModels_GetPurchaseRequest_var;
                              if (1 < *(uint *)(lVar15 + 0x18)) {
                                *(undefined4 *)(lVar15 + 0x24) = uVar12;
                                uVar12 = FUN_066a0664(*(undefined8 *)puVar2,0);
                                puVar2 = 
                                PlayFab_MultiplayerModels_GetServerBackfillTicketRequest_var;
                                if (2 < *(uint *)(lVar15 + 0x18)) {
                                  *(undefined4 *)(lVar15 + 0x28) = uVar12;
                                  uVar12 = FUN_066a0664(*(undefined8 *)puVar2,0);
                                  puVar11 = PlayFab_ClientModels_GetTitleDataResult_var;
                                  puVar10 = PlayFab_ClientModels_GetTimeResult_var;
                                  puVar9 = 
                                  PlayFab_ProgressionModels_GetStatisticsForEntitiesRequest_var;
                                  puVar8 = PlayFab_ClientModels_GetSharedGroupDataRequest_var;
                                  puVar7 = 
                                  PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_var;
                                  puVar6 = PlayFab_MultiplayerModels_GetQueueStatisticsRequest_var;
                                  puVar5 = PlayFab_ClientModels_GetPublisherDataResult_var;
                                  puVar3 = PTR_DAT_06d09688;
                                  puVar2 = PTR_DAT_06d09660;
                                  if (3 < *(uint *)(lVar15 + 0x18)) {
                                    *(undefined4 *)(lVar15 + 0x2c) = uVar12;
                                    plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
                                    *plVar14 = lVar15;
                                    thunk_FUN_02f411dc(plVar14,lVar15);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = 8;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar2,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar3,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x74) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar6,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar5,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x7c) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar9,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar11,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x84) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar10,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar7,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x8c) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)puVar8,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_ProgressionModels_GetStatisticDefinitionResponse_var
                                                  ,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x94) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_EventsModels_GetTelemetryKeyRequest_var,0)
                                    ;
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_ClientModels_GetPlayerTradesRequest_var,0)
                                    ;
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x9c) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_ProgressionModels_GetStatisticDefinitionRequest_var
                                                  ,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_ClientModels_GetPlayerTagsResult_var,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa4) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                           PlayFab_ClientModels_GetTimeRequest_var,0
                                                         );
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_ClientModels_GetPublisherDataRequest_var,0
                                                  );
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xac) =
                                         uVar12;
                                    uVar12 = FUN_066a0664(*(undefined8 *)
                                                                                                                      
                                                  PlayFab_MultiplayerModels_GetQueueStatisticsResult_var
                                                  ,0);
                                    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0) =
                                         uVar12;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
LAB_06319780:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


