/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 0569d510
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x21;
  long *plVar12;
  
  FUN_0552aca4(param_1,0);
  puVar3 = PTR_DAT_06a20ec8;
  puVar1 = PTR_DAT_069fc268;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = unaff_x21;
  LeanTween__value(plVar12);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar6 = Unity_Services_Matchmaker_Response<CreateBackfillTicketResponse>_TypeInfo;
  puVar5 = Unity_Services_CloudSave_Internal_Response<SetItemBatchResponse>_TypeInfo;
  puVar4 = Unity_Services_CloudSave_Internal_Response<GetItemsResponse>_TypeInfo;
  puVar2 = PTR_DAT_06a165a8;
  if (*plVar12 == 0) {
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_0549a56c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_054a6b74(lVar7,*(undefined8 *)puVar2,1,0);
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar6;
    }
    puVar10 = *(undefined8 **)(lVar7 + 0xb8);
    lVar11 = puVar10[2];
    if (lVar11 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar10 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar9 = *puVar10;
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
      FUN_03b78560(lVar11,uVar9,*(undefined8 *)Unity_Services_Lobbies_Response<Lobby>_TypeInfo,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar12 = lVar11;
      LeanTween__value(plVar12,lVar11);
    }
    uVar8 = FUN_0360a330(uVar8,lVar11,*(undefined8 *)puVar5);
    lVar7 = FUN_03606bf0(uVar8,*(undefined8 *)puVar4);
  }
  else {
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_0549a56c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_054a6b74(lVar7,*(undefined8 *)puVar2,1,0);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Unity_Services_Lobbies_Response<Dictionary<string,_TokenData>>_TypeInfo
                              );
    FUN_03b7820c(uVar9,param_1,
                 *(undefined8 *)Unity_Services_Lobbies_Response<QueryResponse>_TypeInfo,0);
    uVar8 = FUN_036170b4(uVar8,uVar9,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Response<SignedUrlResponse>_TypeInfo);
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar6;
    }
    puVar10 = *(undefined8 **)(lVar7 + 0xb8);
    lVar11 = puVar10[1];
    if (lVar11 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar10 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar9 = *puVar10;
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
      FUN_03b78560(lVar11,uVar9,
                   *(undefined8 *)Unity_Services_Lobbies_Response<List<string>>_TypeInfo,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
      *plVar12 = lVar11;
      LeanTween__value(plVar12,lVar11);
    }
    uVar8 = FUN_0360a330(uVar8,lVar11,*(undefined8 *)puVar5);
    lVar7 = FUN_03606bf0(uVar8,*(undefined8 *)puVar4);
  }
  if (lVar7 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_054c8b04(0);
  }
  else {
    FUN_054a9700(lVar7,0);
  }
  return;
}


