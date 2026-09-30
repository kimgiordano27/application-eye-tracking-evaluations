/*
FUNCTION_NAME: FUN_067a5f34
ENTRY_POINT: 067a5f34
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void FUN_067a5f34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_071d637b & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdatePlayerStatisticsResult_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateSharedGroupDataRequest_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_UpdateLobbyAsServerRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateSharedGroupDataResult_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_UpdateLobbyRequest_TypeInfo);
    DAT_071d637b = 1;
  }
  puVar6 = PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo;
  puVar5 = PlayFab_ClientModels_UpdateSharedGroupDataResult_TypeInfo;
  puVar4 = PlayFab_ClientModels_UpdatePlayerStatisticsResult_TypeInfo;
  puVar3 = PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo;
  puVar2 = PlayFab_MultiplayerModels_UpdateLobbyRequest_TypeInfo;
  puVar1 = PlayFab_MultiplayerModels_UpdateLobbyAsServerRequest_TypeInfo;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_052421e8(&local_a0,*(long *)(param_1 + 0x40),
                 *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo)
    ;
    uStack_68 = uStack_98;
    local_70 = local_a0;
    local_60 = local_90;
    while (uVar8 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                             (&local_70,*(undefined8 *)puVar4), uVar7 = local_60, (uVar8 & 1) != 0)
    {
      lVar9 = FUN_067a58e8(uVar8,local_60);
      if (lVar9 != 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_05242864(*(long *)(param_1 + 0x38),uVar7,*(undefined8 *)puVar1);
      }
    }
    FUN_04df65b0(&local_70,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_05241d14(*(long *)(param_1 + 0x40),*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_052421e8(&local_88,*(long *)(param_1 + 0x48),*(undefined8 *)puVar6);
        while (uVar8 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                                 (&local_88,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_05241f40(*(long *)(param_1 + 0x38),local_78,*(undefined8 *)puVar2);
        }
        FUN_04df65b0(&local_88,*(undefined8 *)puVar3);
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_05241d14(*(long *)(param_1 + 0x48),*(undefined8 *)puVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


