/*
FUNCTION_NAME: FUN_05c78fdc
ENTRY_POINT: 05c78fdc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


void FUN_05c78fdc(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar27;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar10 = Method_UnityEngine_Component_GetComponent<TriggerEventBroadcaster>__;
  uVar16 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
  if ((DAT_06a57a7d & 1) == 0) {
    FUN_02d4dc40(Method_PlayFab_PlayFabClientAPI_GetPlayerStatistics__);
    FUN_02d4dc40(PTR_DAT_066485a0);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_GetTransactionHistory__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_PublishDraftItem__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_PurchaseInventoryItems__);
    FUN_02d4dc40(PTR_DAT_0664a8d8);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreWithJwsInventoryItems__
                );
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemGooglePlayInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemMicrosoftStoreInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemNintendoEShopInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemPlayStationStoreInventoryItems__);
    FUN_02d4dc40(Method_UnityEngine_ObjectDispatcher_GetTypeChangesAndClear<LODGroup>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemSteamInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_ReportItem__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_ReportItemReview__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_ReviewItem__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_SearchItems__);
    FUN_02d4dc40(Method_Newtonsoft_Json_JsonReader_ReadAsDecimal__);
    FUN_02d4dc40(Method_Newtonsoft_Json_JsonReader_ReadDateTimeOffsetString__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_SetItemModerationState__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_SubmitItemReviewVote__);
    FUN_02d4dc40(PTR_DAT_066485b0);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_SubtractInventoryItems__);
    FUN_02d4dc40(Method_System_Enum_ToObject__);
    FUN_02d4dc40(Method_System_Net_Sockets_NetworkStream__ctor__);
    FUN_02d4dc40(Method_PlayFab_PlayFabClientAPI_GetPlayerStatisticVersions__);
    FUN_02d4dc40(Method_System_Security_Cryptography_Oid__ctor__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AABB>__
                );
    FUN_02d4dc40(PTR_DAT_0664c3b8);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_TakedownItemReviews__);
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<CullingSplit>__
                );
    FUN_02d4dc40(PTR_DAT_06648570);
    FUN_02d4dc40(Method_System_Collections_Specialized_NameValueCollection_Set__);
    FUN_02d4dc40(Method_PlayFab_PlayFabClientInstanceAPI_PurchaseItem__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_TransferInventoryItems__);
    FUN_02d4dc40(Method_UnityEngine_Component_GetComponent<TriggerEventBroadcaster>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_UpdateCatalogConfig__);
    FUN_02d4dc40(PTR_DAT_0664bc18);
    FUN_02d4dc40(Method_PlayFab_PlayFabClientAPI_GetPublisherData__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_UpdateDraftItem__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_UpdateInventoryItems__);
    FUN_02d4dc40(Method_UnityEngine_Component_GetComponent<PhotonView>__);
    FUN_02d4dc40(Method_PlayFab_Events_PlayFabEvents_OnProcessingErrorEvent__);
    FUN_02d4dc40(Method_PlayFab_Events_PlayFabEvents_OnProcessingEvent__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEventsAPI_CreateTelemetryKey__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonInstanceAPI_GetToxMod__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEventsAPI_DeleteDataConnection__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEventsAPI_DeleteTelemetryKey__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEventsAPI_GetDataConnection__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonInstanceAPI_GetTwitch__);
    DAT_06a57a7d = 1;
  }
  puVar8 = PTR_DAT_066485a0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar10 = Method_System_Collections_Specialized_NameValueCollection_Set__;
  uVar14 = FUN_05b5153c(0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar8);
  }
  puVar8 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AABB>__;
  uVar17 = FUN_05b5663c(uVar14,0,0);
  *(undefined8 *)(param_1 + 0x360) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x360,uVar17);
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar9 = PTR_DAT_066485b0;
  FUN_05c13268(param_1,param_2,0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar7 = Method_PlayFab_PlayFabEconomyInstanceAPI_SetItemModerationState__;
  FUN_05c97f48(0);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar18 = FUN_03239830(&local_68,*(undefined8 *)puVar7);
  puVar7 = Method_PlayFab_PlayFabEconomyInstanceAPI_UpdateInventoryItems__;
  if ((uVar18 & 1) != 0) {
    uVar17 = thunk_FUN_02d8a638(*(undefined8 *)Method_PlayFab_PlayFabEconomyInstanceAPI_ReviewItem__
                               );
    FUN_04c55544(uVar17,0,*(undefined8 *)puVar7,0);
    if (local_68 == 0) goto LAB_05c7a458;
    uVar22 = *(undefined8 *)(local_68 + 0x10);
    uVar24 = *(undefined8 *)(local_68 + 0x18);
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<PhotonView>__ + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05ae407c(uVar17,uVar22,uVar24,0);
    if (local_68 == 0) goto LAB_05c7a458;
    uVar22 = *(undefined8 *)(local_68 + 0x20);
    uVar17 = thunk_FUN_02d8a638(*(undefined8 *)Method_PlayFab_PlayFabClientAPI_GetPublisherData__);
    FUN_05c53d64(uVar17,0x96,uVar22,0);
    *(undefined8 *)(param_1 + 0x1f8) = uVar17;
    thunk_FUN_02dc1ef0(param_1 + 0x1f8,uVar17);
  }
  puVar7 = Method_Newtonsoft_Json_JsonReader_ReadDateTimeOffsetString__;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar18 = FUN_03239830(&local_70,*(undefined8 *)puVar7);
  if ((uVar18 & 1) != 0) {
    if (local_70 == 0) goto LAB_05c7a458;
    uVar17 = *(undefined8 *)(local_70 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0664a8d8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar17 = FUN_05b5e60c(uVar17,0);
    *(undefined8 *)(param_1 + 0x2e0) = uVar17;
    thunk_FUN_02dc1ef0(param_1 + 0x2e0,uVar17);
    if (local_70 == 0) goto LAB_05c7a458;
    uVar17 = FUN_05b5e60c(*(undefined8 *)(local_70 + 0x20),0);
    *(undefined8 *)(param_1 + 0x2e8) = uVar17;
    thunk_FUN_02dc1ef0(param_1 + 0x2e8,uVar17);
    if (local_70 == 0) goto LAB_05c7a458;
    uVar17 = FUN_05b5e60c(*(undefined8 *)(local_70 + 0x38),0);
    *(undefined8 *)(param_1 + 0x2f0) = uVar17;
    thunk_FUN_02dc1ef0(param_1 + 0x2f0,uVar17);
  }
  puVar7 = Method_PlayFab_PlayFabEconomyInstanceAPI_SubmitItemReviewVote__;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar18 = FUN_03239830(&local_78,*(undefined8 *)puVar7);
  if ((uVar18 & 1) == 0) {
    uVar17 = 0;
  }
  else {
    if (local_78 == 0) goto LAB_05c7a458;
    uVar17 = *(undefined8 *)(local_78 + 0x18);
    uVar22 = *(undefined8 *)(local_78 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0664a8d8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar22 = FUN_05b5e60c(uVar22,0);
    *(undefined8 *)(param_1 + 0x2f8) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x2f8,uVar22);
    if (local_78 == 0) goto LAB_05c7a458;
    uVar22 = FUN_05b5e60c(*(undefined8 *)(local_78 + 0x30),0);
    *(undefined8 *)(param_1 + 0x300) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x300,uVar22);
    if (local_78 == 0) goto LAB_05c7a458;
    uVar22 = FUN_05b5e60c(*(undefined8 *)(local_78 + 0x20),0);
    *(undefined8 *)(param_1 + 0x308) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x308,uVar22);
    if (local_78 == 0) goto LAB_05c7a458;
    uVar24 = *(undefined8 *)(local_78 + 0x38);
    uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_PlayFab_PlayFabEconomyInstanceAPI_TransferInventoryItems__);
    FUN_05c53150(uVar22,uVar24,0);
    *(undefined8 *)(param_1 + 0x220) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x220,uVar22);
  }
  if (param_2 == (long *)0x0) goto LAB_05c7a458;
  lVar23 = param_2[0xd];
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x2bd);
  auVar26 = FUN_05f173cc(0);
  *pauVar1 = auVar26;
  puVar7 = Method_Newtonsoft_Json_JsonReader_ReadAsDecimal__;
  if (lVar23 == 0) goto LAB_05c7a458;
  FUN_05f1bb60(pauVar1,*(undefined1 *)(lVar23 + 0x10),0);
  FUN_05f1bbec(pauVar1,*(undefined4 *)(lVar23 + 0x18),0);
  FUN_05f1bc08(pauVar1,*(undefined4 *)(lVar23 + 0x1c),0);
  FUN_05f1bc24(pauVar1,*(undefined4 *)(lVar23 + 0x20),0);
  FUN_05f1bc40(pauVar1,*(undefined4 *)(lVar23 + 0x24),0);
  lVar19 = *(long *)puVar9;
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)((long)param_2 + 0x8c);
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar18 = FUN_03239830(&local_80,*(undefined8 *)puVar7);
  if ((uVar18 & 1) == 0) {
LAB_05c7967c:
    uVar14 = (undefined4)param_2[0xc];
    *(undefined4 *)(param_1 + 0x350) = uVar14;
  }
  else {
    if (local_80 == 0) goto LAB_05c7a458;
    uVar18 = FUN_05c64d80(local_80,0);
    if ((uVar18 & 1) != 0) goto LAB_05c7967c;
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)((long)param_2 + 0x5c);
    uVar14 = (undefined4)param_2[0xc];
  }
  *(undefined4 *)(param_1 + 0x354) = uVar14;
  puVar9 = PTR_DAT_0664bc18;
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)((long)param_2 + 100);
  lVar19 = *(long *)puVar9;
  *(char *)(param_1 + 0x35c) = (char)param_2[0xe];
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar7 = PTR_DAT_066462d0;
  lVar19 = FUN_05c8ac5c(0);
  if ((lVar19 != 0) && (*(char *)(lVar19 + 0xf7) != '\0')) {
    FUN_05c25bc8(&local_150,0);
    uStack_a8 = uStack_148;
    local_b0 = local_150;
    local_a0 = local_140;
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar19 = FUN_05c8ac5c(0);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)puVar7);
    }
    uVar18 = FUN_05ee6de4(lVar19,0);
    if ((uVar18 & 1) != 0) {
      if (lVar19 == 0) goto LAB_05c7a458;
      uVar14 = FUN_05be6de0(lVar19,0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar14);
      local_b0 = FUN_05be7008(lVar19,0);
    }
    uVar22 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Net_Sockets_NetworkStream__ctor__);
    FUN_05c22fb4(uVar22,&local_b0,0);
    *(undefined8 *)(param_1 + 0x2d0) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x2d0,uVar22);
  }
  bVar13 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  lVar19 = *(long *)puVar10;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar19);
  }
  *(byte *)(param_1 + 0x141) = bVar13 & 1;
  bVar13 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  lVar19 = *(long *)puVar8;
  *(byte *)(param_1 + 0x142) = bVar13 & 1;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a577e5 == '\0') {
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AABB>__
                );
    DAT_06a577e5 = '\x01';
  }
  puVar11 = Method_PlayFab_PlayFabEconomyInstanceAPI_UpdateDraftItem__;
  puVar7 = Method_PlayFab_PlayFabEconomyInstanceAPI_ReportItemReview__;
  puVar9 = Method_PlayFab_PlayFabClientAPI_GetPlayerStatistics__;
  puVar10 = Method_PlayFab_PlayFabClientAPI_GetPlayerStatisticVersions__;
  lVar19 = *(long *)puVar8;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar19 = *(long *)puVar8;
  }
  puVar8 = Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemMicrosoftStoreInventoryItems__;
  local_90 = *(undefined8 *)(param_1 + 0x2d0);
  *(byte *)(param_1 + 0x142) = *(byte *)(*(long *)(lVar19 + 0xb8) + 8) ^ 1;
  thunk_FUN_02dc1ef0(&local_90);
  uVar22 = local_90;
  local_88 = CONCAT71(local_88._1_7_,(*(uint *)((long)param_2 + 0x74) & 0xfffffffe) == 2);
  uVar24 = local_88;
  uVar20 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
  FUN_05ca58b4(uVar20,uVar22,uVar24,0);
  *(undefined8 *)(param_1 + 0x298) = uVar20;
  thunk_FUN_02dc1ef0(param_1 + 0x298,uVar20);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)((long)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)((long)param_2 + 0x7c);
  uVar14 = FUN_05c1d9d0(param_2,0);
  *(undefined4 *)(param_1 + 0x2b4) = uVar14;
  uVar14 = FUN_05c1db28(param_2,0);
  uVar22 = *(undefined8 *)puVar10;
  *(undefined4 *)(param_1 + 0x2b8) = uVar14;
  lVar19 = param_2[8];
  *(undefined1 *)(param_1 + 700) = 0;
  *(char *)(param_1 + 0x134) = (char)lVar19;
  uVar22 = thunk_FUN_02d8a638(uVar22);
  FUN_05cb91a0(uVar22,0x32,0);
  *(undefined8 *)(param_1 + 0x168) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x168,uVar22);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
  FUN_05ca0504(uVar22,0x32,0);
  *(undefined8 *)(param_1 + 0x170) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x170,uVar22);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)puVar11);
  FUN_05c5558c(uVar22,0xfa,0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1e8,uVar22);
  puVar10 = Method_PlayFab_PlayFabEconomyInstanceAPI_PurchaseInventoryItems__;
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_PurchaseInventoryItems__);
  FUN_05cad150(uVar22,0x3ea,uVar17,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1f0,uVar22);
  if (*(int *)(*(long *)PTR_DAT_0664c3b8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar22 = FUN_05f17180(0);
  uVar14 = *(undefined4 *)(param_1 + 0x350);
  uVar24 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
  FUN_05cb0fa4(uVar24,0x96,uVar22,uVar14,0);
  *(undefined8 *)(param_1 + 0x148) = uVar24;
  thunk_FUN_02dc1ef0(param_1 + 0x148,uVar24);
  uVar22 = FUN_05f17180(0);
  uVar14 = *(undefined4 *)(param_1 + 0x350);
  uVar24 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemGooglePlayInventoryItems__
                             );
  FUN_05caf588(uVar24,0x96,uVar22,uVar14,0);
  *(undefined8 *)(param_1 + 0x150) = uVar24;
  thunk_FUN_02dc1ef0(param_1 + 0x150,uVar24);
  uVar15 = *(uint *)(param_1 + 0x2a8);
  if ((uVar15 | 2) == 2) {
    uVar22 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
    FUN_05cad150(uVar22,200,uVar17,1,1,0,0,0);
    *(undefined8 *)(param_1 + 0x158) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x158,uVar22);
    uVar15 = *(uint *)(param_1 + 0x2a8);
  }
  puVar10 = Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreInventoryItems__;
  if ((uVar15 | 2) == 3) {
    local_d0 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_c8 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    thunk_FUN_02dc1ef0(&local_d0);
    uStack_c8 = *(undefined8 *)(param_1 + 0x300);
    thunk_FUN_02dc1ef0((ulong)&local_d0 | 8);
    local_c0 = *(undefined8 *)(param_1 + 0x2d0);
    thunk_FUN_02dc1ef0(&local_c0);
    uVar4 = *(undefined1 *)(param_1 + 0x134);
    uStack_b8 = CONCAT71(uStack_b8._1_7_,*(int *)(param_1 + 0x2a8) == 3);
    uStack_148 = uStack_c8;
    local_150 = local_d0;
    uStack_138 = uStack_b8;
    local_140 = local_c0;
    uVar22 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
    uStack_f8 = uStack_148;
    local_100 = local_150;
    uStack_e8 = uStack_138;
    uStack_f0 = local_140;
    FUN_05c991ac(uVar22,&local_100,uVar4,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x2a0,uVar22);
    puVar10 = PTR_DAT_0664c3b8;
    if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_05c7a458;
    *(char *)(*(long *)(param_1 + 0x2a0) + 0x19) = (char)param_2[0x11];
    puVar8 = Method_PlayFab_PlayFabEconomyInstanceAPI_SearchItems__;
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar22 = FUN_05f17180(0);
    lVar19 = param_2[0xc];
    uVar20 = *(undefined8 *)*pauVar1;
    uVar16 = *(undefined4 *)(param_1 + 0x2c5);
    uVar14 = *(undefined4 *)(lVar23 + 0x14);
    uVar25 = *(undefined8 *)(param_1 + 0x2a0);
    uVar24 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
    FUN_05cb74b8(uVar24,0xd2,uVar22,(int)lVar19,uVar20,uVar16,uVar14,uVar25,0);
    *(undefined8 *)(param_1 + 0x178) = uVar24;
    thunk_FUN_02dc1ef0(param_1 + 0x178,uVar24);
    uVar22 = *(undefined8 *)*pauVar1;
    uVar16 = *(undefined4 *)(param_1 + 0x2c5);
    if (*(int *)(*(long *)
                  Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreInventoryItems__ +
                0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05c9b6fc(uVar22,uVar16,0x60,0);
    lVar19 = FUN_02d4dd2c(*(undefined8 *)Method_PlayFab_PlayFabClientInstanceAPI_PurchaseItem__,3);
    local_104 = 0;
    FUN_05f1ae9c(&local_104,*(undefined8 *)Method_PlayFab_PlayFabAddonInstanceAPI_GetTwitch__,0);
    puVar10 = Method_PlayFab_PlayFabAddonInstanceAPI_GetToxMod__;
    if (lVar19 == 0) goto LAB_05c7a458;
    if (*(int *)(lVar19 + 0x18) == 0) {
LAB_05c7a45c:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    *(undefined4 *)(lVar19 + 0x20) = local_104;
    local_108 = 0;
    FUN_05f1ae9c(&local_108,*(undefined8 *)puVar10,0);
    puVar10 = Method_PlayFab_Events_PlayFabEvents_OnProcessingErrorEvent__;
    if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) goto LAB_05c7a45c;
    *(undefined4 *)(lVar19 + 0x24) = local_108;
    local_10c = 0;
    FUN_05f1ae9c(&local_10c,*(undefined8 *)puVar10,0);
    puVar8 = Method_PlayFab_Events_PlayFabEvents_OnProcessingEvent__;
    puVar10 = Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreWithJwsInventoryItems__;
    if (*(uint *)(lVar19 + 0x18) < 3) goto LAB_05c7a45c;
    *(undefined4 *)(lVar19 + 0x28) = local_10c;
    uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_PlayFab_PlayFabEconomyInstanceAPI_PurchaseInventoryItems__);
    FUN_05cad150(uVar22,0xd3,uVar17,1,0,0,*(undefined8 *)puVar8,0);
    *(undefined8 *)(param_1 + 0x180) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x180,uVar22);
    uVar24 = *(undefined8 *)(param_1 + 0x2a0);
    uVar22 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
    FUN_05caea30(uVar22,0xe6,uVar24,0);
    *(undefined8 *)(param_1 + 0x188) = uVar22;
    thunk_FUN_02dc1ef0(param_1 + 0x188,uVar22);
    uVar22 = FUN_05f17180(0);
    lVar6 = param_2[0xc];
    uVar24 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemNintendoEShopInventoryItems__
                               );
    uVar16 = extraout_var;
    FUN_05cb2104(uVar24,*(undefined8 *)Method_PlayFab_PlayFabEventsAPI_GetDataConnection__,lVar19,1,
                 0xfa,uVar22,(int)lVar6);
    *(undefined8 *)(param_1 + 400) = uVar24;
    thunk_FUN_02dc1ef0(param_1 + 400,uVar24);
  }
  puVar10 = Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemPlayStationStoreInventoryItems__;
  if (*(int *)(*(long *)PTR_DAT_0664c3b8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar22 = FUN_05f17180(0);
  lVar19 = param_2[0xc];
  uVar20 = *(undefined8 *)*pauVar1;
  uVar14 = *(undefined4 *)(param_1 + 0x2c5);
  uVar27 = *(undefined4 *)(lVar23 + 0x14);
  uVar24 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemNintendoEShopInventoryItems__
                             );
  uVar25 = CONCAT44(uVar16,uVar27);
  FUN_05cb25bc(uVar24,10,1,0xfa,uVar22,(int)lVar19,uVar20,uVar14,uVar25,0);
  uVar27 = (undefined4)((ulong)uVar25 >> 0x20);
  *(undefined8 *)(param_1 + 0x198) = uVar24;
  thunk_FUN_02dc1ef0(param_1 + 0x198,uVar24);
  uVar22 = FUN_05f17180(0);
  lVar19 = param_2[0xc];
  uVar20 = *(undefined8 *)*pauVar1;
  uVar16 = *(undefined4 *)(param_1 + 0x2c5);
  uVar14 = *(undefined4 *)(lVar23 + 0x14);
  uVar24 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
  uVar25 = CONCAT44(uVar27,uVar14);
  FUN_05cb4054(uVar24,10,1,0xfa,uVar22,(int)lVar19,uVar20,uVar16,uVar25,0);
  uVar16 = (undefined4)((ulong)uVar25 >> 0x20);
  *(undefined8 *)(param_1 + 0x1a0) = uVar24;
  thunk_FUN_02dc1ef0(param_1 + 0x1a0,uVar24);
  iVar2 = *(int *)(param_1 + 0x2b0);
  uVar15 = 500;
  if (iVar2 != 1) {
    uVar15 = 400;
  }
  if (*(int *)(*(long *)PTR_DAT_06648570 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar10 = Method_UnityEngine_ObjectDispatcher_GetTypeChangesAndClear<LODGroup>__;
  bVar13 = FUN_05c62620(0);
  puVar8 = Method_PlayFab_PlayFabEconomyInstanceAPI_PurchaseInventoryItems__;
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_PurchaseInventoryItems__);
  FUN_05cad150(uVar22,uVar15,uVar17,1,0,iVar2 == 1 & bVar13,0,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1b0,uVar22);
  uVar24 = *(undefined8 *)(param_1 + 0x308);
  lVar19 = param_2[0xc];
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Security_Cryptography_Oid__ctor__);
  FUN_05c31910(uVar22,uVar15 | 1,uVar24,(int)lVar19,0);
  *(undefined8 *)(param_1 + 0x160) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x160,uVar22);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemSteamInventoryItems__)
  ;
  FUN_05c2e3b4(uVar22,0x15e,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1a8,uVar22);
  uVar24 = *(undefined8 *)(param_1 + 0x2f0);
  uVar20 = *(undefined8 *)(param_1 + 0x2e0);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_PublishDraftItem__);
  FUN_05cabe58(uVar22,400,uVar24,uVar20,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1b8,uVar22);
  lVar19 = param_2[0xe];
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_UpdateCatalogConfig__);
  FUN_05c53a98(uVar22,0x1c2,(char)lVar19,0);
  *(undefined8 *)(param_1 + 0x1c0) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1c0,uVar22);
  if (*(int *)(*(long *)PTR_DAT_0664c3b8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar22 = FUN_05f17188(0);
  uVar14 = *(undefined4 *)((long)param_2 + 100);
  uVar20 = *(undefined8 *)*pauVar1;
  uVar27 = *(undefined4 *)(param_1 + 0x2c5);
  uVar3 = *(undefined4 *)(lVar23 + 0x14);
  uVar24 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemNintendoEShopInventoryItems__
                             );
  FUN_05cb25bc(uVar24,0xb,0,0x1c2,uVar22,uVar14,uVar20,uVar27,CONCAT44(uVar16,uVar3),0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar24;
  thunk_FUN_02dc1ef0(param_1 + 0x1c8,uVar24);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_SubtractInventoryItems__);
  FUN_05c3126c(uVar22,0x226,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x1d0,uVar22);
  uVar24 = *(undefined8 *)(param_1 + 0x2f0);
  uVar20 = *(undefined8 *)(param_1 + 0x2e0);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_PlayFab_PlayFabEconomyInstanceAPI_PublishDraftItem__);
  FUN_05cabe58(uVar22,0x226,uVar24,uVar20,
               *(undefined8 *)Method_PlayFab_PlayFabEventsAPI_CreateTelemetryKey__,0);
  *(undefined8 *)(param_1 + 0x210) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x210,uVar22);
  uVar15 = FUN_05c62620(0);
  uVar22 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
  FUN_05cad150(uVar22,0x226,uVar17,0,uVar15 & 1,0,
               *(undefined8 *)Method_PlayFab_PlayFabEventsAPI_DeleteTelemetryKey__,0);
  *(undefined8 *)(param_1 + 0x218) = uVar22;
  thunk_FUN_02dc1ef0(param_1 + 0x218,uVar22);
  uVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
  FUN_05c2c1f4(uVar17,0x226,1,0);
  *(undefined8 *)(param_1 + 0x200) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x200,uVar17);
  uVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
  FUN_05c2c1f4(uVar17,0x3ea,0,0);
  *(undefined8 *)(param_1 + 0x208) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x208,uVar17);
  FUN_05c55eb8(0);
  local_e0 = *(undefined8 *)(param_1 + 0x2e0);
  local_d8 = extraout_x1;
  thunk_FUN_02dc1ef0(&local_e0,local_e0);
  puVar10 = PTR_DAT_0664bc18;
  local_d8 = CONCAT44(local_d8._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_0664bc18 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar23 = FUN_05c8ac5c(0);
  puVar8 = PTR_DAT_066485b0;
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
  }
  uVar18 = FUN_05ee6de4(lVar23,0);
  if ((uVar18 & 1) != 0) {
    if (lVar23 == 0) goto LAB_05c7a458;
    cVar5 = *(char *)(lVar23 + 0x4d);
    uVar16 = *(undefined4 *)(lVar23 + 0x50);
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar16 = FUN_05c930cc(cVar5 != '\0',uVar16,0,0);
    local_d8 = CONCAT44(local_d8._4_4_,uVar16);
  }
  puVar12 = Method_PlayFab_PlayFabEventsAPI_DeleteDataConnection__;
  puVar11 = Method_PlayFab_PlayFabEconomyInstanceAPI_TakedownItemReviews__;
  puVar7 = Method_PlayFab_PlayFabEconomyInstanceAPI_ReportItem__;
  puVar9 = Method_PlayFab_PlayFabEconomyInstanceAPI_GetTransactionHistory__;
  puVar10 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<CullingSplit>__
  ;
  uStack_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  FUN_05c55f6c(&local_150,param_2[10],&local_e0,0);
  *(undefined8 *)(param_1 + 0x318) = uStack_148;
  *(undefined8 *)(param_1 + 0x310) = local_150;
  *(undefined8 *)(param_1 + 0x328) = uStack_138;
  *(undefined8 *)(param_1 + 800) = local_140;
  *(undefined8 *)(param_1 + 0x338) = uStack_128;
  *(undefined8 *)(param_1 + 0x330) = local_130;
  *(undefined8 *)(param_1 + 0x348) = uStack_118;
  *(undefined8 *)(param_1 + 0x340) = local_120;
  thunk_FUN_02dc1ef0(param_1 + 0x310,0);
  uVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
  FUN_05c2b710(uVar17,1000,0);
  *(undefined8 *)(param_1 + 0x1e0) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x1e0,uVar17);
  uVar22 = *(undefined8 *)(param_1 + 0x2e0);
  uVar24 = *(undefined8 *)(param_1 + 0x2e8);
  uVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
  FUN_05cb5324(uVar17,0x3e9,uVar22,uVar24,0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x1d8,uVar17);
  uVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar11);
  FUN_05cbc024(uVar17,*(undefined8 *)puVar12,0);
  *(undefined8 *)(param_1 + 0x228) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x228,uVar17);
  lVar23 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
  FUN_05c1c7a8(lVar23,0);
  puVar10 = Method_System_Collections_Specialized_NameValueCollection_Set__;
  if (*(int *)(*(long *)Method_System_Collections_Specialized_NameValueCollection_Set__ + 0xe4) == 0
     ) {
    thunk_FUN_02dabd98();
  }
  plVar21 = (long *)(param_1 + 0xf0);
  *plVar21 = lVar23;
  thunk_FUN_02dc1ef0(plVar21,lVar23);
  if ((*(uint *)(param_1 + 0x2a8) | 2) == 3) {
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (*plVar21 == 0) {
LAB_05c7a458:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(undefined1 *)(*plVar21 + 0x11) = 0;
  }
  puVar10 = Method_System_Enum_ToObject__;
  lVar23 = *(long *)Method_System_Enum_ToObject__;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar23 = *(long *)puVar10;
  }
  *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x24) = DAT_01274440;
  FUN_05b360f4(0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  bVar13 = FUN_05efd740(0x1d,0);
  *(byte *)(param_1 + 0x2dc) = bVar13 & 1;
  return;
}


