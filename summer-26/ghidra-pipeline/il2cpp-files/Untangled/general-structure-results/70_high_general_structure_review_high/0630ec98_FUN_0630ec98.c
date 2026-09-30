/*
FUNCTION_NAME: FUN_0630ec98
ENTRY_POINT: 0630ec98
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x0630f374) */
/* WARNING: Removing unreachable block (ram,0x0630f3fc) */
/* WARNING: Removing unreachable block (ram,0x0630f440) */
/* WARNING: Removing unreachable block (ram,0x0630f420) */
/* WARNING: Removing unreachable block (ram,0x0630f424) */
/* WARNING: Removing unreachable block (ram,0x0630f528) */

void FUN_0630ec98(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,float param_4,
                 long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam00000000071cd04a & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardForUsersCharactersRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardResult_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetLeaderboardDefinitionRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetLobbyRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetLobbyResult_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetLeaderboardDefinitionResponse_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMatchRequest_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMatchResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMatchmakingQueueRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMatchmakingQueueResult_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMatchmakingTicketResult_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensResponse_var);
    FUN_02f07e70(PTR_DAT_06d5fb50);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMultiplayerServerDetailsRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var);
    bRam00000000071cd04a = 1;
  }
  puVar1 = PlayFab_EconomyModels_GetItemModerationStateRequest_var;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  lVar12 = *(long *)(param_5 + 0x10);
  if (lVar12 != 0) {
    iVar16 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_05624da8(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (cRam00000000071cd09c == '\0') {
      FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
      cRam00000000071cd09c = '\x01';
    }
    lVar12 = *(long *)puVar1;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar12 = *(long *)puVar1;
    }
    puVar6 = PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_var;
    puVar5 = PlayFab_MultiplayerModels_GetLobbyRequest_var;
    puVar4 = PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var;
    puVar3 = PlayFab_ProgressionModels_GetLeaderboardDefinitionRequest_var;
    puVar2 = PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_var;
    puVar1 = PTR_DAT_06d5fb50;
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar12 != 0) {
      FUN_03fd16fc(&uStack_118,lVar12,
                   *(undefined8 *)PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var);
      uStack_b8 = uStack_110;
      uStack_c0 = uStack_118;
      lStack_b0 = lStack_108;
LAB_0630eee0:
      uVar10 = FUN_04df6d30(&uStack_c0,*(undefined8 *)puVar3);
      lVar12 = lStack_b0;
      if ((uVar10 & 1) != 0) {
        if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar7 = FUN_0668ffe8(param_7,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar11 = FUN_066c67ec(lVar12,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar8 = FUN_066c9a84(lVar11,0);
        if ((uVar7 >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
          if (*(int *)(lVar12 + 0x24) == 4) {
            lVar11 = *(long *)(param_5 + 0x10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar15 = *(long *)PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_var;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar7 = *(uint *)(lVar11 + 0x18);
            if (uVar7 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar7 + 1;
              plVar14 = (long *)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
              *plVar14 = lVar12;
              thunk_FUN_02f411dc(plVar14,lVar12);
            }
            else {
              FUN_03fd0c9c(lVar11,lVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            fVar21 = *(float *)(lVar12 + 0xd0);
            fVar17 = *(float *)(lVar12 + 0xd4);
            fVar26 = *(float *)(lVar12 + 0xd8);
            iVar16 = 0;
            fVar23 = fVar21;
            do {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              iVar9 = FUN_066e9a94(param_6,0);
              if (iVar9 <= iVar16) {
                lVar11 = *(long *)(param_5 + 0x10);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                lVar13 = *(long *)(lVar11 + 0x10);
                lVar15 = *(long *)PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_var;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                uVar7 = *(uint *)(lVar11 + 0x18);
                if (uVar7 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar7 + 1;
                  plVar14 = (long *)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
                  *plVar14 = lVar12;
                  thunk_FUN_02f411dc(plVar14,lVar12);
                }
                else {
                  FUN_03fd0c9c(lVar11,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                break;
              }
              fVar25 = param_4;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                fVar25 = param_4;
              }
              uVar20 = FUN_066e9c78(param_6,iVar16,0);
              fVar22 = fVar17;
              fVar24 = fVar26;
              fVar18 = (float)FUN_06222c1c(fVar21,0);
              fVar19 = (float)FUN_06222c1c(uVar20,0);
              param_4 = *(float *)(lVar12 + 0xdc);
              fVar22 = fVar22 * fVar23;
              fVar23 = -param_4;
              iVar16 = iVar16 + 1;
            } while (fVar23 <= fVar25 + fVar24 * (float)param_3 + fVar18 * fVar19 + fVar22);
          }
        }
        goto LAB_0630eee0;
      }
      FUN_04df6d2c(&uStack_c0,*(undefined8 *)puVar2);
      puVar1 = PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var;
      lVar11 = *(long *)(param_5 + 0x10);
      lVar12 = *(long *)PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar12 = *(long *)puVar1;
      }
      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar13 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var;
        }
        puVar1 = PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_var;
        uVar20 = **(undefined8 **)(lVar12 + 0xb8);
        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                     PlayFab_ClientModels_GetLeaderboardForUsersCharactersRequest_var
                                   );
        FUN_04a5da30(lVar13,uVar20,
                     *(undefined8 *)PlayFab_MultiplayerModels_GetMultiplayerServerDetailsRequest_var
                     ,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar14 = lVar13;
        thunk_FUN_02f411dc(plVar14,lVar13);
      }
      if (lVar11 != 0) {
        FUN_03fd26c8(lVar11,lVar13,
                     *(undefined8 *)PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensResponse_var)
        ;
        lVar12 = *(long *)(param_5 + 0x18);
        if (lVar12 != 0) {
          iVar16 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar16) {
            FUN_05624da8(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
          }
          if (cRam00000000071cd09d == '\0') {
            FUN_02f07e70(PlayFab_MultiplayerModels_GetMultiplayerServerLogsRequest_var);
            cRam00000000071cd09d = '\x01';
          }
          if (**(long **)(*(long *)PlayFab_MultiplayerModels_GetMultiplayerServerLogsRequest_var +
                         0xb8) != 0) {
            FUN_03fd16fc(&uStack_118,
                         **(long **)(*(long *)
                                      PlayFab_MultiplayerModels_GetMultiplayerServerLogsRequest_var
                                    + 0xb8),
                         *(undefined8 *)PlayFab_MultiplayerModels_GetMatchmakingTicketResult_var);
            uStack_d8 = uStack_110;
            uStack_e0 = uStack_118;
            lStack_d0 = lStack_108;
            while (uVar10 = FUN_04df6d30(&uStack_e0,
                                         *(undefined8 *)
                                          PlayFab_ClientModels_GetLeaderboardResult_var),
                  lVar12 = lStack_d0, (uVar10 & 1) != 0) {
              if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if (*(long *)(lStack_d0 + 0x28) != 0) {
                FUN_03fd16fc(&uStack_118,*(long *)(lStack_d0 + 0x28),
                             *(undefined8 *)
                              PlayFab_EconomyModels_GetMicrosoftStoreAccessTokensRequest_var);
                uStack_f8 = uStack_110;
                uStack_100 = uStack_118;
                lStack_f0 = lStack_108;
                do {
                  uVar10 = FUN_04df6d30(&uStack_100,*(undefined8 *)puVar5);
                  lVar11 = lStack_f0;
                  if ((uVar10 & 1) == 0) break;
                  if (*(long *)(param_5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  FUN_03fd16fc(&uStack_118,*(long *)(param_5 + 0x10),*(undefined8 *)puVar4);
                  uStack_b8 = uStack_110;
                  uStack_c0 = uStack_118;
                  lStack_b0 = lStack_108;
                  do {
                    do {
                      uVar10 = FUN_04df6d30(&uStack_c0,*(undefined8 *)puVar3);
                      if ((uVar10 & 1) == 0) goto LAB_0630f354;
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f080c0();
                      }
                      uVar10 = FUN_0631feec(lVar11,lStack_b0,0);
                    } while ((uVar10 & 1) == 0);
                    if (*(long *)(param_5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f080c0();
                    }
                    uVar10 = FUN_03fd102c(*(long *)(param_5 + 0x18),lVar12,*(undefined8 *)puVar6);
                  } while ((uVar10 & 1) != 0);
                  lVar11 = *(long *)(param_5 + 0x18);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar15 = *(long *)PlayFab_MultiplayerModels_GetMatchResult_var;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  uVar7 = *(uint *)(lVar11 + 0x18);
                  if (uVar7 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar7 + 1;
                    plVar14 = (long *)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
                    *plVar14 = lVar12;
                    thunk_FUN_02f411dc(plVar14,lVar12);
                  }
                  else {
                    FUN_03fd0c9c(lVar11,lVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
LAB_0630f354:
                  FUN_04df6d2c(&uStack_c0,*(undefined8 *)puVar2);
                  if (*(long *)(param_5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  uVar10 = FUN_03fd102c(*(long *)(param_5 + 0x18),lVar12,*(undefined8 *)puVar6);
                } while ((uVar10 & 1) == 0);
                FUN_04df6d2c(&uStack_100,
                             *(undefined8 *)
                              PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_var);
              }
            }
            FUN_04df6d2c(&uStack_e0,*(undefined8 *)PlayFab_ClientModels_GetLeaderboardRequest_var);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


