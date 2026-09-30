/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetLayerTexturePtr
ENTRY_POINT: 0569d474
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetLayerTexturePtr(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar12;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xec8));
  FUN_02d965b8(Unity_Services_CloudSave_Internal_Response<GetItemsResponse>_TypeInfo);
  FUN_02d965b8(Unity_Services_CloudSave_Internal_Response<SetItemBatchResponse>_TypeInfo);
  FUN_02d965b8(Unity_Services_CloudSave_Internal_Response<SignedUrlResponse>_TypeInfo);
  FUN_02d965b8(Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
  FUN_02d965b8(Unity_Services_Lobbies_Response<Dictionary<string,_TokenData>>_TypeInfo);
  FUN_02d965b8(Unity_Services_Lobbies_Response<List<string>>_TypeInfo);
  FUN_02d965b8(Unity_Services_Lobbies_Response<Lobby>_TypeInfo);
  FUN_02d965b8(Unity_Services_Lobbies_Response<QueryResponse>_TypeInfo);
  FUN_02d965b8(Unity_Services_CloudSave_Internal_Response<FileList>_TypeInfo);
  FUN_02d965b8(Unity_Services_Matchmaker_Response<CreateBackfillTicketResponse>_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a165a8);
  *(undefined1 *)(unaff_x20 + 0x886) = 1;
  lVar7 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0552aca4(lVar7,0);
  puVar3 = PTR_DAT_06a20ec8;
  puVar1 = PTR_DAT_069fc268;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar12 = (long *)(lVar7 + 0x10);
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
    uVar9 = FUN_054a6b74(lVar7,*(undefined8 *)puVar2,1,0);
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar6;
    }
    puVar11 = *(undefined8 **)(lVar7 + 0xb8);
    lVar8 = puVar11[2];
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar11 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar10 = *puVar11;
      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
      FUN_03b78560(lVar8,uVar10,*(undefined8 *)Unity_Services_Lobbies_Response<Lobby>_TypeInfo,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar12 = lVar8;
      LeanTween__value(plVar12,lVar8);
    }
    uVar9 = FUN_0360a330(uVar9,lVar8,*(undefined8 *)puVar5);
    lVar7 = FUN_03606bf0(uVar9,*(undefined8 *)puVar4);
  }
  else {
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_0549a56c();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = FUN_054a6b74(lVar8,*(undefined8 *)puVar2,1,0);
    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Unity_Services_Lobbies_Response<Dictionary<string,_TokenData>>_TypeInfo
                               );
    FUN_03b7820c(uVar10,lVar7,*(undefined8 *)Unity_Services_Lobbies_Response<QueryResponse>_TypeInfo
                 ,0);
    uVar9 = FUN_036170b4(uVar9,uVar10,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Response<SignedUrlResponse>_TypeInfo);
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar6;
    }
    puVar11 = *(undefined8 **)(lVar7 + 0xb8);
    lVar8 = puVar11[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar11 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar10 = *puVar11;
      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
      FUN_03b78560(lVar8,uVar10,
                   *(undefined8 *)Unity_Services_Lobbies_Response<List<string>>_TypeInfo,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
      *plVar12 = lVar8;
      LeanTween__value(plVar12,lVar8);
    }
    uVar9 = FUN_0360a330(uVar9,lVar8,*(undefined8 *)puVar5);
    lVar7 = FUN_03606bf0(uVar9,*(undefined8 *)puVar4);
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


