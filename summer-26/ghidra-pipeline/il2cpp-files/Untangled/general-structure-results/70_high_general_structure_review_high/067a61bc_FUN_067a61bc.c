/*
FUNCTION_NAME: FUN_067a61bc
ENTRY_POINT: 067a61bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x067a66b8) */
/* WARNING: Removing unreachable block (ram,0x067a64e8) */
/* WARNING: Removing unreachable block (ram,0x067a6674) */
/* WARNING: Removing unreachable block (ram,0x067a66b0) */
/* WARNING: Removing unreachable block (ram,0x067a6598) */

void FUN_067a61bc(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_071d637c & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_IEnumerator<Collider>_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateStatisticsRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateStatisticsResponse_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateUserDataRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateUserDataResult_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_UpdateLobbyRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_UploadCertificateRequest_TypeInfo);
    FUN_02f07e70(System_Net_UploadDataCompletedEventArgs_TypeInfo);
    FUN_02f07e70(System_Net_UploadDataCompletedEventHandler_TypeInfo);
    FUN_02f07e70(System_Net_UploadFileCompletedEventArgs_TypeInfo);
    FUN_02f07e70(PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_TypeInfo);
    DAT_071d637c = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  FUN_067ec050(param_1,0);
  puVar2 = PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_TypeInfo;
  if (*(long *)(param_1 + 0x58) != 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0x58) + 0x20)) {
      lVar7 = *(long *)PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_TypeInfo;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *(long *)puVar2;
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
      uVar8 = FUN_0564dfcc(uVar14,0,0);
      if ((uVar8 & 1) != 0) {
        FUN_0668a3c0(uVar14,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar9 = FUN_067a5ee4();
      puVar6 = PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_TypeInfo;
      puVar5 = PlayFab_ClientModels_UpdateUserDataRequest_TypeInfo;
      puVar4 = PlayFab_ProgressionModels_UpdateStatisticsRequest_TypeInfo;
      puVar3 = PlayFab_MultiplayerModels_UpdateLobbyRequest_TypeInfo;
      lVar7 = *(long *)(param_1 + 0x58);
      plVar15 = (long *)System_Net_UploadDataCompletedEventArgs_TypeInfo;
      while( true ) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(int *)(lVar7 + 0x20) < 1) break;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        lVar7 = FUN_067a5ee4();
        if ((99 < lVar7 - lVar9) ||
           (lVar7 = FUN_03a1cfb0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)puVar4), lVar7 == 0)
           ) break;
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_05241f40(*(long *)(param_1 + 0x58),lVar7,*(undefined8 *)puVar3);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar10 = *(long *)puVar2;
        }
        plVar11 = (long *)FUN_068cd1d0(lVar7,**(undefined4 **)(lVar10 + 0xb8),0);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar15)) {
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar10 = *(long *)puVar2;
            }
            FUN_068cd3ac(lVar7,**(undefined4 **)(lVar10 + 0xb8),0,0);
            FUN_03fd16fc(&local_98,plVar11,
                         *(undefined8 *)PlayFab_MultiplayerModels_UploadCertificateRequest_TypeInfo)
            ;
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
            while (uVar8 = FUN_04df6d30(&local_80,*(undefined8 *)puVar5), plVar15 = local_70,
                  (uVar8 & 1) != 0) {
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar10 = *local_70;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
                    puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_067a64ac;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_02eea86c(local_70,*(long *)puVar6,0);
LAB_067a64ac:
              (*(code *)*puVar12)(plVar15,lVar7,puVar12[1]);
            }
            FUN_04df6d2c(&local_80,
                         *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_TypeInfo)
            ;
            plVar15 = (long *)System_Net_UploadDataCompletedEventArgs_TypeInfo;
            if (*(int *)(*(long *)System_Net_UploadFileCompletedEventArgs_TypeInfo + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_044088ac(plVar11,*(undefined8 *)System_Net_UploadDataCompletedEventHandler_TypeInfo)
            ;
          }
        }
        lVar7 = *(long *)(param_1 + 0x58);
      }
      uVar8 = FUN_0564dfcc(uVar14,0,0);
      if ((uVar8 & 1) != 0) {
        FUN_0668a45c(uVar14,0);
      }
    }
    FUN_067a5f34(param_1);
    if (*(long *)(param_1 + 0x38) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x38) + 0x20)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        lVar7 = FUN_067a5ee4();
        if (DAT_071d6426 == '\0') {
          FUN_02f07e70(PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_TypeInfo);
          DAT_071d6426 = '\x01';
        }
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar2;
        }
        if ((*(char *)(*(long *)(lVar9 + 0xb8) + 0x30) != '\0') ||
           (*(long *)(param_1 + 0x50) + 100 < lVar7)) {
          FUN_067a6774(param_1);
          *(long *)(param_1 + 0x50) = lVar7;
        }
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x58) + 0x20) == 0) {
          if (*(long *)(param_1 + 0x60) == 0) goto LAB_067a6684;
          System_Array_EmptyInternalEnumerator<KeyValuePair<int,_VertexAttribute>>___cctor
                    (*(long *)(param_1 + 0x60),
                     *(undefined8 *)System_Collections_Generic_IEnumerator<Collider>_TypeInfo);
        }
        return;
      }
    }
  }
LAB_067a6684:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


