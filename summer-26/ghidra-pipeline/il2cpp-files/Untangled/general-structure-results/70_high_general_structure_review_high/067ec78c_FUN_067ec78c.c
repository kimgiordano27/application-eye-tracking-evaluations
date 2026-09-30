/*
FUNCTION_NAME: FUN_067ec78c
ENTRY_POINT: 067ec78c
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


void FUN_067ec78c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
                    /* catch() { ... } // from try @ 067ec7c0 with catch @ 067ec7a4
                       catch() { ... } // from try @ 067ec800 with catch @ 067ec7a4
                       catch() { ... } // from try @ 067eca84 with catch @ 067ec7a4
                       catch() { ... } // from try @ 067eca90 with catch @ 067ec7a4 */
  if ((DAT_071d6674 & 1) == 0) {
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Manager_DebugManager_<>c_TypeInfo);
                    /* try { // try from 067ec7bc to 068ec7bf has its CatchHandler @ 067ec7d0 */
                    /* try { // try from 067ec7c0 to 068ec7e7 has its CatchHandler @ 067ec7a4 */
    FUN_02f07e70(PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 067ec7bc with catch @ 067ec7d0
                        */
    FUN_02f07e70(PlayFab_ClientModels_UpdatePlayerStatisticsResult_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateSharedGroupDataRequest_TypeInfo);
                    /* try { // try from 067ec7e8 to 068ec7ff has its CatchHandler @ 067eca88 */
    FUN_02f07e70(PlayFab_ClientModels_UpdateSharedGroupDataResult_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo);
    DAT_071d6674 = 1;
  }
                    /* try { // try from 067ec800 to 068eca73 has its CatchHandler @ 067ec7a4 */
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x38)) {
    return;
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
  FUN_067ecab8(param_1);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_067ecba4();
    puVar3 = PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_052421e8(&local_98,*(long *)(param_1 + 0x20),
                   *(undefined8 *)
                    PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo);
      puVar1 = PlayFab_ClientModels_UpdatePlayerStatisticsResult_TypeInfo;
      uStack_58 = uStack_90;
      local_60 = local_98;
      local_50 = local_88;
      while (uVar5 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                               (&local_60,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_067ec70c(*(long *)(param_1 + 0x40),local_50,0x10);
      }
      FUN_04df65b0(&local_60,
                   *(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo);
      puVar2 = PlayFab_ClientModels_UpdateSharedGroupDataResult_TypeInfo;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_05241d14(*(long *)(param_1 + 0x20),
                     *(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_TypeInfo);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_052421e8(&local_98,*(long *)(param_1 + 0x28),*(undefined8 *)puVar3);
          puVar3 = Meta_XR_ImmersiveDebugger_Manager_DebugManager_<>c_TypeInfo;
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_70 = local_88;
          while (uVar5 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                                   (&local_80,*(undefined8 *)puVar1), lVar4 = local_70,
                (uVar5 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar5 = FUN_068c3554(local_70,0);
            if (((uVar5 & 1) != 0) || (uVar5 = FUN_068c3604(lVar4,0), (uVar5 & 1) != 0)) {
              uVar6 = FUN_068c2b24(lVar4,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_068bc4e0(uVar6,0);
              lVar7 = *(long *)(param_1 + 0x40);
              uVar6 = FUN_068c2b24(lVar4,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_067ecc48(lVar7,lVar4,uVar6);
            }
          }
          FUN_04df65b0(&local_80,
                       *(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_05241d14(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


