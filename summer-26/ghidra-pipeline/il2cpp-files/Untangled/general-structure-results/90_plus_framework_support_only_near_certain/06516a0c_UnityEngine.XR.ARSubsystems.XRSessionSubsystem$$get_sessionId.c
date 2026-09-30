/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRSessionSubsystem$$get_sessionId
ENTRY_POINT: 06516a0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 226
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_10
*/


void UnityEngine_XR_ARSubsystems_XRSessionSubsystem__get_sessionId(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 *puVar9;
  
  puVar2 = 
  System_Net_Http_Headers_TryParseListDelegate<TransferCodingWithQualityHeaderValue>_TypeInfo;
  puVar6 = *(undefined8 **)(unaff_x21 + 0xdd0);
  puVar8 = *(undefined8 **)(unaff_x23 + 0x68);
  puVar9 = *(undefined8 **)(unaff_x24 + 0xda8);
  if ((*(byte *)(unaff_x20 + 0x405) & 1) == 0) {
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
    FUN_02f07e70(System_Net_Http_Headers_TryParseListDelegate<ViaHeaderValue>_TypeInfo);
    FUN_02f07e70(System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo);
    FUN_02f07e70(Language_Lua_Tuple<int,_string>_TypeInfo);
    FUN_02f07e70(System_Tuple<Action<object>,_object>_TypeInfo);
    FUN_02f07e70(System_Tuple<TaskCompletionSource<int>,_byte[]>_TypeInfo);
    FUN_02f07e70(System_Tuple<Guid,_string>_TypeInfo);
    FUN_02f07e70(System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo);
    FUN_02f07e70(System_Tuple<string,_string>_TypeInfo);
    FUN_02f07e70(System_Tuple<TextReader,_Memory<char>>_TypeInfo);
    FUN_02f07e70(System_Tuple<TextWriter,_char>_TypeInfo);
    FUN_02f07e70(System_Tuple<TextWriter,_string>_TypeInfo);
    FUN_02f07e70(
                System_Net_Http_Headers_TryParseListDelegate<TransferCodingWithQualityHeaderValue>_TypeInfo
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
    FUN_02f07e70(PTR_DAT_06d0e068);
    FUN_02f07e70(PTR_DAT_06d3ddd0);
    FUN_02f07e70(PTR_DAT_06d6fda8);
    *(undefined1 *)(unaff_x20 + 0x405) = 1;
  }
  FUN_0652792c(param_1,*puVar6,*puVar6,*puVar8,*puVar9,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<uint>_TypeInfo);
    FUN_05136200(lVar5,uVar7,
                 *(undefined8 *)
                  System_Net_Http_Headers_TryParseListDelegate<ViaHeaderValue>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_02f411dc(plVar4,lVar5);
  }
  if (param_1 != 0) {
    FUN_03ba9cac(param_1,lVar5,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ulong>_TypeInfo);
      FUN_0516795c(lVar5,uVar7,*(undefined8 *)Language_Lua_Tuple<int,_string>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa36c(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Int32Enum>_TypeInfo);
      FUN_0513751c(lVar5,uVar7,*(undefined8 *)System_Tuple<Action<object>,_object>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa00c(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<Vector3>_TypeInfo);
      FUN_051698f8(lVar5,uVar7,
                   *(undefined8 *)System_Tuple<TaskCompletionSource<int>,_byte[]>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa5ac(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo);
      FUN_05137c24(lVar5,uVar7,*(undefined8 *)System_Tuple<Guid,_string>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa12c(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<bool>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ushort>_TypeInfo);
      FUN_051699ac(lVar5,uVar7,*(undefined8 *)System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo,
                   0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa6cc(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo);
      FUN_05138a34(lVar5,uVar7,*(undefined8 *)System_Tuple<string,_string>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa24c(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<Int32Enum>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo);
      FUN_05169d30(lVar5,uVar7,*(undefined8 *)System_Tuple<TextReader,_Memory<char>>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa7ec(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo);
      FUN_05168148(lVar5,uVar7,*(undefined8 *)System_Tuple<TextWriter,_char>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03baa48c(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = 
    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
    ;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<sbyte>_TypeInfo);
      FUN_051369c0(lVar5,uVar7,*(undefined8 *)System_Tuple<TextWriter,_string>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03ba9dcc(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<float>_TypeInfo);
      FUN_05136bdc(lVar5,uVar7,
                   *(undefined8 *)
                    System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
      *plVar4 = lVar5;
      thunk_FUN_02f411dc(plVar4,lVar5);
    }
    FUN_03ba9eec(param_1,lVar5,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


