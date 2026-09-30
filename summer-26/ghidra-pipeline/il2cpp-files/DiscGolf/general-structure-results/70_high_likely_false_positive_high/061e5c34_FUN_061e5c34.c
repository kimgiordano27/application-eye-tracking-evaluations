/*
FUNCTION_NAME: FUN_061e5c34
ENTRY_POINT: 061e5c34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_061e5c34(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_06dc6f3c & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d348);
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_Unity_Services_Multiplayer_LobbyHandler_ValidateNoActiveLobby__);
    FUN_02d965b8(Method_LobbyListSingleUI_<Awake>b__8_0__);
    FUN_02d965b8(Method_LobbyListUI_CreateLobbyButtonClick__);
    FUN_02d965b8(Method_LobbyPatcher_GetPlayerPathAndIndex__);
    FUN_02d965b8(Method_LobbyPlayerSingleUI_KickPlayer__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_2__);
    FUN_02d965b8(Method_LobbyPlayerSingleUI_OnFriendRequestFlowComplete__);
    FUN_02d965b8(Method_Unity_Services_Lobbies_LobbyService_get_Instance__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                Method_Unity_Services_Multiplayer_LobbySessionInfo_ConvertProperty<DataObject,_SessionProperty>__
                );
    FUN_02d965b8(Method_LobbyUI_<Awake>b__24_2__);
    FUN_02d965b8(Method_LobbyUI_SetSelectedCourseToNetwork__);
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_LobbyValue_Added<Dictionary<int,_LobbyPlayerChanges>>__
                );
    DAT_06dc6f3c = 1;
  }
  plVar10 = (long *)param_1[0x15];
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (plVar10 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar10 + 0x198))(plVar10,param_2,*(undefined8 *)(*plVar10 + 0x1a0));
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar14 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)Method_LobbyCreateUI_<Awake>b__22_2__) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 5) * 0x10 + 0x138);
            goto FUN_061e5da8;
          }
          uVar11 = uVar11 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02dd004c(param_2,*(long *)Method_LobbyCreateUI_<Awake>b__22_2__,5)
      ;
FUN_061e5da8:
      lVar14 = (*(code *)*puVar12)(param_2,puVar12[1]);
      if (lVar14 != 0) {
        FUN_04010c90(&local_b8,lVar14,
                     *(undefined8 *)Method_Unity_Services_Lobbies_LobbyService_get_Instance__);
        local_80 = local_b8;
        puVar9 = 
        Method_Unity_Services_Lobbies_LobbyValue_Added<Dictionary<int,_LobbyPlayerChanges>>__;
        puVar8 = Method_LobbyUI_SetSelectedCourseToNetwork__;
        puVar7 = Method_LobbyPatcher_GetPlayerPathAndIndex__;
        puVar6 = Method_LobbyListSingleUI_<Awake>b__8_0__;
        puVar5 = Method_Unity_Services_Multiplayer_LobbyHandler_ValidateNoActiveLobby__;
        puVar4 = PTR_DAT_06a0d348;
        puVar3 = PTR_DAT_069fb990;
        puVar2 = PTR_DAT_069fb930;
        local_70 = local_a8;
        local_b8 = 0;
        puStack_78 = puStack_b0;
        puStack_b0 = &local_80;
        while (uVar11 = FUN_05156804(&local_80,*(undefined8 *)puVar7), uVar13 = local_70,
              (uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar11 = FUN_06350670(uVar13,0,0);
          if ((uVar11 & 1) == 0) {
            if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar11 = FUN_04e95158(param_1[0x11],uVar13,&local_88,*(undefined8 *)puVar6);
            if ((uVar11 & 1) == 0) {
              if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e935f0(param_1[0x11],uVar13,param_2,*(undefined8 *)puVar5);
            }
            else {
              lVar14 = *(long *)puVar4;
              bVar1 = *(byte *)(lVar14 + 0x130);
              if ((((*(byte *)(*param_2 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) ||
                  (local_88 == (long *)0x0)) ||
                 ((*(byte *)(*local_88 + 0x130) < bVar1 ||
                  (*(long *)(*(long *)(*local_88 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)))) {
                uVar13 = FUN_0536e120(*(undefined8 *)Method_LobbyUI_<Awake>b__24_2__,uVar13,local_88
                                      ,param_2,0);
                uVar13 = FUN_0536d554(*(undefined8 *)puVar9,uVar13,*(undefined8 *)puVar8,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar14 = *(long *)puVar3;
                bVar1 = *(byte *)(lVar14 + 0x130);
                if (*(byte *)(*param_2 + 0x130) < bVar1) {
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar10 = param_2;
                  if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
                    plVar10 = (long *)0x0;
                  }
                }
                FUN_0630c038(uVar13,plVar10,0);
              }
            }
          }
        }
        FUN_05156800(&local_80,*(undefined8 *)Method_LobbyListUI_CreateLobbyButtonClick__);
        if (param_1[0x29] != 0) {
          local_a0 = FUN_03e9d880(param_1[0x29],&local_90,
                                  *(undefined8 *)
                                   Method_LobbyPlayerSingleUI_OnFriendRequestFlowComplete__);
          puStack_b0 = (undefined8 *)local_a0;
          local_b8 = 0;
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(long *)(local_90 + 0x10) = (long)param_1;
          LeanTween__value((long *)(local_90 + 0x10),param_1);
          if (local_90 != 0) {
            *(long *)(local_90 + 0x18) = (long)param_2;
            LeanTween__value((long *)(local_90 + 0x18),param_2);
            (**(code **)(*param_1 + 0x2e8))(param_1,local_90,*(undefined8 *)(*param_1 + 0x2f0));
            FUN_044356d4(local_a0,*(undefined8 *)
                                   Method_Unity_Services_Multiplayer_LobbySessionInfo_ConvertProperty<DataObject,_SessionProperty>__
                        );
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


