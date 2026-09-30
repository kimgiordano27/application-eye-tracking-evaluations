/*
FUNCTION_NAME: FUN_0630fa44
ENTRY_POINT: 0630fa44
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0630fa44(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PlayFab_EconomyModels_GetItemModerationStateRequest_var;
  if ((bRam00000000071cd051 & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetLeaderboardDefinitionRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetLeaderboardDefinitionResponse_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var);
    bRam00000000071cd051 = 1;
  }
  uVar7 = _DAT_0144fbd0;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  param_3[1] = _UNK_0144fbd8;
  *param_3 = uVar7;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (cRam00000000071cd09c == '\0') {
    FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
    cRam00000000071cd09c = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PlayFab_ProgressionModels_GetLeaderboardDefinitionRequest_var;
  puVar1 = PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_var;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03fd16fc(&uStack_58,lVar4,
               *(undefined8 *)PlayFab_ProgressionModels_GetLeaderboardForEntitiesRequest_var);
  do {
    bVar3 = FUN_04df6d30(&uStack_58,*(undefined8 *)puVar2);
    lVar4 = lStack_48;
    if ((bVar3 & 1) == 0) {
      iVar6 = 6;
      goto LAB_0630fba4;
    }
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  } while (((*(int *)(lStack_48 + 0x24) != 4) || (*(int *)(lStack_48 + 0x28) != param_2)) ||
          (uVar5 = FUN_0630e1b8(lStack_48,param_1), (uVar5 & 1) == 0));
  uVar7 = *(undefined8 *)(lVar4 + 0x30);
  fVar8 = *(float *)(lVar4 + 0x40);
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20) * fVar8,
                        (float)*(undefined8 *)(lVar4 + 0x38) * fVar8);
  *param_3 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar8,(float)uVar7 * fVar8);
  iVar6 = 4;
LAB_0630fba4:
  FUN_04df6d2c(&uStack_58,*(undefined8 *)puVar1);
  return bVar3 & iVar6 == 4;
}


