/*
FUNCTION_NAME: FUN_0537e4a8
ENTRY_POINT: 0537e4a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14
*/


undefined8 FUN_0537e4a8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_06a53083 & 1) == 0) {
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeResponse_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06648af8);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotasRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotasResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleNewsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleNewsResult_TypeInfo);
    FUN_02d4dc40(PlayFab_ProfilesModels_GetTitlePlayersFromMasterPlayerAccountIdsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleDataRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleDataResult_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetTimeRequest_TypeInfo);
    DAT_06a53083 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar7 = FUN_061f4a08(*(long *)(param_1 + 0x48),0);
      uVar3 = FUN_04e7faf0(uVar7,0);
      lVar8 = *(long *)(param_1 + 0x48);
      if ((uVar3 & 1) == 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar9 = *(long *)(param_1 + 0x30);
        uVar7 = FUN_061f4a08(lVar8,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8(uVar7,uVar7);
        }
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(lVar9 + 0x28));
      }
      else {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar9 = *(long *)(param_1 + 0x38);
        lVar8 = FUN_061f440c(lVar8,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar7 = FUN_061f3034(lVar8,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8(uVar7,uVar7);
        }
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(lVar9 + 0x28));
      }
      FUN_0537ebf8(param_1);
      *(undefined8 *)(param_1 + 0x48) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x48),0);
      return 0;
    }
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar7 = FUN_061f584c(*(undefined8 *)(param_1 + 0x28),0);
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      thunk_FUN_02dc1ef0();
      puVar1 = PTR_DAT_06648af8;
      lVar8 = *(long *)PTR_DAT_06648af8;
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar8 = *(long *)puVar1;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar3 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_061f5178(*(long *)(param_1 + 0x48),
                     *(undefined8 *)PlayFab_ClientModels_GetTitleNewsResult_TypeInfo,
                     *(undefined8 *)PlayFab_ClientModels_GetTitleNewsRequest_TypeInfo,0);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar8 = *(long *)puVar1;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar3 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
        if ((uVar3 & 1) != 0) {
          lVar8 = *(long *)(param_1 + 0x48);
          uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeResponse_TypeInfo
                                    );
          FUN_05285720(uVar7,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_061f411c(lVar8,uVar7,0);
        }
      }
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar7 = FUN_061f44c4(*(long *)(param_1 + 0x48),0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02dc1ef0();
      uVar6 = 1;
    }
    else {
      uVar3 = thunk_FUN_04e7e884(*(undefined8 *)(param_1 + 0x40),
                                 *(undefined8 *)PlayFab_ClientModels_GetTimeRequest_TypeInfo,0);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                    PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotasRequest_TypeInfo
                                  );
        FUN_061f3e7c(uVar4,uVar7,
                     *(undefined8 *)
                      PlayFab_ProfilesModels_GetTitlePlayersFromMasterPlayerAccountIdsRequest_TypeInfo
                     ,0);
        *(undefined8 *)(param_1 + 0x48) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x48),uVar4);
        lVar8 = *(long *)(param_1 + 0x48);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                    PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotasResponse_TypeInfo
                                  );
        FUN_061f59c8(uVar7,uVar4,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_061f41e4(lVar8,uVar7,0);
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_061f5178(*(long *)(param_1 + 0x48),
                     *(undefined8 *)PlayFab_ClientModels_GetTitleDataRequest_TypeInfo,
                     *(undefined8 *)PlayFab_ClientModels_GetTitleDataResult_TypeInfo,0);
        puVar1 = PTR_DAT_06648af8;
        lVar8 = *(long *)PTR_DAT_06648af8;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar8 = *(long *)puVar1;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar3 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        lVar8 = *(long *)(param_1 + 0x48);
        if ((uVar3 & 1) == 0) {
          uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_TypeInfo
                                    );
          FUN_061f3818(uVar7,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_061f411c(lVar8,uVar7,0);
        }
        else {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_061f5178(lVar8,*(undefined8 *)PlayFab_ClientModels_GetTitleNewsResult_TypeInfo,
                       *(undefined8 *)PlayFab_ClientModels_GetTitleNewsRequest_TypeInfo,0);
          lVar8 = *(long *)puVar1;
          lVar9 = *(long *)(param_1 + 0x48);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar8 = *(long *)puVar1;
          }
          plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar3 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
          if ((uVar3 & 1) == 0) {
            uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_TypeInfo
                                      );
            FUN_061f3818(uVar7,0);
          }
          else {
            uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                        PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeResponse_TypeInfo
                                      );
            FUN_05285720(uVar7,0);
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_061f411c(lVar9,uVar7,0);
        }
      }
      else {
        uVar7 = FUN_061f58f0(uVar7,*(undefined8 *)(param_1 + 0x20),0);
        *(undefined8 *)(param_1 + 0x48) = uVar7;
        thunk_FUN_02dc1ef0();
      }
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar7 = FUN_061f44c4(*(long *)(param_1 + 0x48),0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02dc1ef0();
      uVar6 = 2;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar2 = FUN_061f4ac8(*(long *)(param_1 + 0x48),0);
  if (iVar2 != 2) {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar2 = FUN_061f4ac8(*(long *)(param_1 + 0x48),0);
    if (iVar2 != 3) {
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar9 = *(long *)(param_1 + 0x38);
      lVar8 = FUN_061f440c(*(long *)(param_1 + 0x48),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar7 = FUN_061f3034(lVar8,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8(uVar7,uVar7);
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(lVar9 + 0x28))
      ;
      goto LAB_0537e9bc;
    }
  }
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar8 = *(long *)(param_1 + 0x30);
  uVar7 = FUN_061f4a08(*(long *)(param_1 + 0x48),0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8(uVar7,uVar7);
  }
  (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),uVar7,*(undefined8 *)(lVar8 + 0x28));
LAB_0537e9bc:
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_061f43a4(*(long *)(param_1 + 0x48),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x48),0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


