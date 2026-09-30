/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRPointCloudSubsystemDescriptor.Cinfo$$get_supportsUniqueIds
ENTRY_POINT: 06514838
PROGRAM: Untangled-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo__get_supportsUniqueIds(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02f07e70();
  FUN_02f07e70(
              PlayFab_Json_ReflectionUtils_ThreadSafeDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Json_ReflectionUtils_ThreadSafeDictionary<Type,_IDictionary<string,_KeyValuePair<Type,_ReflectionUtils_SetDelegate>>>_TypeInfo
              );
  FUN_02f07e70(
              PlayFab_Json_ReflectionUtils_ThreadSafeDictionary<Type,_ReflectionUtils_ConstructorDelegate>_TypeInfo
              );
  FUN_02f07e70(
              Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>_TypeInfo
              );
  FUN_02f07e70(
              Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
              );
  FUN_02f07e70(UnityEngine_UIElements_TextInputBaseField<Hash128>_TypeInfo);
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
  FUN_02f07e70(PTR_DAT_06d6fd70);
  FUN_02f07e70(PTR_DAT_06d0b478);
  FUN_02f07e70(UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d71bb8);
  *(undefined1 *)(unaff_x20 + 0x39d) = 1;
  FUN_0652792c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<uint>_TypeInfo);
    FUN_05136200(uVar2,uVar4,
                 *(undefined8 *)UnityEngine_UIElements_TextInputBaseField<string>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_03ba9cac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ulong>_TypeInfo);
      FUN_0516795c(uVar2,uVar4,*(undefined8 *)System_Threading_ThreadLocal<StringBuilder>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa36c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Int32Enum>_TypeInfo);
      FUN_0513751c(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Json_ReflectionUtils_ThreadSafeDictionaryValueFactory<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa00c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<Vector3>_TypeInfo);
      FUN_051698f8(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Json_ReflectionUtils_ThreadSafeDictionaryValueFactory<Type,_IDictionary<string,_KeyValuePair<Type,_ReflectionUtils_SetDelegate>>>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa5ac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo);
      FUN_05137c24(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Json_ReflectionUtils_ThreadSafeDictionaryValueFactory<Type,_ReflectionUtils_ConstructorDelegate>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa12c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ushort>_TypeInfo);
      FUN_051699ac(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Json_ReflectionUtils_ThreadSafeDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa6cc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo);
      FUN_05138a34(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Json_ReflectionUtils_ThreadSafeDictionary<Type,_IDictionary<string,_KeyValuePair<Type,_ReflectionUtils_SetDelegate>>>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa24c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo);
      FUN_05168148(uVar2,uVar4,
                   *(undefined8 *)
                    PlayFab_Json_ReflectionUtils_ThreadSafeDictionary<Type,_ReflectionUtils_ConstructorDelegate>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03baa48c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<sbyte>_TypeInfo);
      FUN_051369c0(uVar2,uVar4,
                   *(undefined8 *)
                    Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03ba9dcc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<float>_TypeInfo);
      FUN_05136bdc(uVar2,uVar4,
                   *(undefined8 *)
                    Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    FUN_03ba9eec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


