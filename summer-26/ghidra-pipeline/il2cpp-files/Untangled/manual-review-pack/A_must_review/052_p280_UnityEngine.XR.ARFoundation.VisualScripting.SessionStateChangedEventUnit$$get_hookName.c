/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.VisualScripting.SessionStateChangedEventUnit$$get_hookName
ENTRY_POINT: 064e7100
PROGRAM: Untangled-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_XR_ARFoundation_VisualScripting_SessionStateChangedEventUnit__get_hookName
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = 
  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteFacebookInstantGamesResponse>_TypeInfo;
  puVar3 = PTR_DAT_06d70d98;
  puVar2 = PTR_DAT_06d70408;
  puVar1 = PTR_DAT_06d6fdb8;
  if ((DAT_071ce12b & 1) == 0) {
    FUN_02f07e70(System_Nullable<sbyte>_TypeInfo);
    FUN_02f07e70(System_Nullable<float>_TypeInfo);
    FUN_02f07e70(System_Nullable<TimeSpan>_TypeInfo);
    FUN_02f07e70(System_Nullable<ushort>_TypeInfo);
    FUN_02f07e70(System_Nullable<uint>_TypeInfo);
    FUN_02f07e70(System_Nullable<ulong>_TypeInfo);
    FUN_02f07e70(System_Nullable<Vector3>_TypeInfo);
    FUN_02f07e70(OVRResult<Int32Enum>_TypeInfo);
    FUN_02f07e70(OVRResult<OVRAnchor_SaveResult>_TypeInfo);
    FUN_02f07e70(OVRResult<Guid,_Int32Enum>_TypeInfo);
    FUN_02f07e70(OVRResult<object,_Int32Enum>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteFacebookResponse>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteFilesResponse>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteGoogleResponse>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteInventoryCollectionResponse>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteInventoryItemsResponse>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteItemResponse>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteKongregateResponse>_TypeInfo)
    ;
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteNintendoResponse>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeletePSNResponse>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteStatisticsResponse>_TypeInfo)
    ;
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteSteamResponse>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteFacebookInstantGamesResponse>_TypeInfo
                );
    FUN_02f07e70(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    FUN_02f07e70(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_02f07e70(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02f07e70(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    FUN_02f07e70(OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_02f07e70(OVRTask<bool>_TypeInfo);
    FUN_02f07e70(OVRTask<Int32Enum>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d6fdb8);
    FUN_02f07e70(PTR_DAT_06d70408);
    FUN_02f07e70(PTR_DAT_06d70d98);
    DAT_071ce12b = 1;
  }
  FUN_0652792c(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar2,
               *(undefined8 *)puVar1,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<uint>_TypeInfo);
    FUN_05136200(lVar7,uVar8,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteFacebookResponse>_TypeInfo,0
                );
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_02f411dc(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_03ba9cac(param_1,lVar7,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ulong>_TypeInfo);
      FUN_0516795c(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteGoogleResponse>_TypeInfo,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa36c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Int32Enum>_TypeInfo);
      FUN_0513751c(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteInventoryCollectionResponse>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa00c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<Vector3>_TypeInfo);
      FUN_051698f8(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteInventoryItemsResponse>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa5ac(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo);
      FUN_05137c24(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteItemResponse>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa12c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<bool>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ushort>_TypeInfo);
      FUN_051699ac(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteKongregateResponse>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa6cc(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo);
      FUN_05138a34(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteNintendoResponse>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa24c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<Int32Enum>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo);
      FUN_05169d30(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeletePSNResponse>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa7ec(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo);
      FUN_05168148(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteStatisticsResponse>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03baa48c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = 
    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
    ;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<sbyte>_TypeInfo);
      FUN_051369c0(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteSteamResponse>_TypeInfo,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03ba9dcc(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<float>_TypeInfo);
      FUN_05136bdc(lVar7,uVar8,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<DeleteFilesResponse>_TypeInfo,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
      *plVar6 = lVar7;
      thunk_FUN_02f411dc(plVar6,lVar7);
    }
    FUN_03ba9eec(param_1,lVar7,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


