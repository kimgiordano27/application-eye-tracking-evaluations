/*
FUNCTION_NAME: FUN_067a6774
ENTRY_POINT: 067a6774
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_18;frame_or_lifecycle_behavior
*/


void FUN_067a6774(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_071d637d & 1) == 0) {
    FUN_02f07e70(System_Net_UploadFileCompletedEventHandler_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo);
    FUN_02f07e70(UnityEngine_Networking_UploadHandlerRaw_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdatePlayerStatisticsResult_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateSharedGroupDataRequest_TypeInfo);
    FUN_02f07e70(System_Net_UploadProgressChangedEventArgs_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_TypeInfo);
    FUN_02f07e70(System_Net_UploadProgressChangedEventHandler_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_UploadSecretRequest_TypeInfo);
    FUN_02f07e70(System_Net_UploadStringCompletedEventArgs_TypeInfo);
    DAT_071d637d = 1;
  }
  puVar9 = System_Net_UploadStringCompletedEventArgs_TypeInfo;
  puVar8 = System_Net_UploadProgressChangedEventHandler_TypeInfo;
  puVar7 = UnityEngine_Networking_UploadHandlerRaw_TypeInfo;
  puVar6 = System_Net_UploadFileCompletedEventHandler_TypeInfo;
  puVar5 = PlayFab_ClientModels_UpdatePlayerStatisticsResult_TypeInfo;
  puVar4 = PlayFab_ClientModels_UpdatePlayerStatisticsRequest_TypeInfo;
  puVar3 = PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_TypeInfo;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (long *)0x0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = (long *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_052421e8(&local_d8,*(long *)(param_1 + 0x38),
                 *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_TypeInfo)
    ;
    uStack_78 = uStack_d0;
    local_80 = local_d8;
    local_70 = local_c8;
    while (uVar10 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                              (&local_80,*(undefined8 *)puVar5), plVar14 = local_70,
          (uVar10 & 1) != 0) {
      plVar11 = (long *)FUN_067a58e8(uVar10,local_70);
      if (plVar11 == (long *)0x0) {
LAB_067a6994:
        FUN_067a5b28(param_1,plVar14);
      }
      else {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar17 = plVar14[0x74];
        lVar12 = FUN_067eb888(param_1,0);
        if (lVar17 != lVar12) {
          lVar12 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_067a6988;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,2);
LAB_067a6988:
          (*(code *)*puVar13)(plVar11,puVar13[1]);
          goto LAB_067a6994;
        }
        lVar12 = *(long *)(param_1 + 0x68);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar17 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)puVar8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          plVar14 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
          *plVar14 = (long)plVar11;
          thunk_FUN_02f411dc(plVar14,plVar11);
        }
        else {
          FUN_03fd0c9c(lVar12,plVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    FUN_04df65b0(&local_80,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_03fd16fc(&local_d8,*(long *)(param_1 + 0x68),*(undefined8 *)puVar9);
      uStack_98 = uStack_d0;
      local_a0 = local_d8;
      local_90 = local_c8;
      while (uVar10 = FUN_04df6d30(&local_a0,*(undefined8 *)puVar7), plVar14 = local_90,
            (uVar10 & 1) != 0) {
        if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *local_90;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_067a6a50;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02eea86c(local_90,*(long *)puVar3,0);
LAB_067a6a50:
        (*(code *)*puVar13)(plVar14,puVar13[1]);
      }
      FUN_04df6d2c(&local_a0,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN_03fd16fc(&local_d8,*(long *)(param_1 + 0x68),*(undefined8 *)puVar9);
        uStack_b8 = uStack_d0;
        local_c0 = local_d8;
        local_b0 = local_c8;
        while (uVar10 = FUN_04df6d30(&local_c0,*(undefined8 *)puVar7), plVar14 = local_b0,
              (uVar10 & 1) != 0) {
          if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar12 = *local_b0;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_067a6af8;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02eea86c(local_b0,*(long *)puVar3,1);
LAB_067a6af8:
          (*(code *)*puVar13)(plVar14,puVar13[1]);
        }
        FUN_04df6d2c(&local_c0,*(undefined8 *)puVar6);
        lVar12 = *(long *)(param_1 + 0x68);
        if (lVar12 != 0) {
          iVar1 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_05624da8(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


