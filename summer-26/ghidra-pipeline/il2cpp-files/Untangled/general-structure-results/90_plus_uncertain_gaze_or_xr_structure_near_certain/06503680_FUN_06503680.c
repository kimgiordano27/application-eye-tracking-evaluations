/*
FUNCTION_NAME: FUN_06503680
ENTRY_POINT: 06503680
PROGRAM: Untangled-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06503680(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = System_Collections_Generic_Queue<IDataNode>_TypeInfo;
  puVar4 = System_Collections_Generic_Queue<EventContents>_TypeInfo;
  puVar3 = PTR_DAT_06d71d30;
  puVar2 = PTR_DAT_06d6fd80;
  puVar1 = PTR_DAT_06d582c0;
  if ((bRam00000000071ce2b4 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_Queue<IEnumerator>_TypeInfo);
    FUN_02f07e70(System_Nullable<TimeSpan>_TypeInfo);
    FUN_02f07e70(System_Nullable<ushort>_TypeInfo);
    FUN_02f07e70(System_Nullable<uint>_TypeInfo);
    FUN_02f07e70(System_Nullable<ulong>_TypeInfo);
    FUN_02f07e70(System_Nullable<Vector3>_TypeInfo);
    FUN_02f07e70(OVRResult<Int32Enum>_TypeInfo);
    FUN_02f07e70(OVRResult<Guid,_Int32Enum>_TypeInfo);
    FUN_02f07e70(OVRResult<object,_Int32Enum>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<ISpawned>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<int>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<NCommand>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<NetworkId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<PedestrianWaypointSettings>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<QueuedUIAlert>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<float>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<StreamBuffer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<string>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<IDataNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<Transform>_TypeInfo);
    FUN_02f07e70(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    FUN_02f07e70(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02f07e70(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_02f07e70(OVRTask<bool>_TypeInfo);
    FUN_02f07e70(OVRTask<Int32Enum>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Queue<EventContents>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d582c0);
    FUN_02f07e70(PTR_DAT_06d6fd80);
    FUN_02f07e70(PTR_DAT_06d71d30);
    bRam00000000071ce2b4 = 1;
  }
  FUN_0652792c(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_Queue<IEnumerator>_TypeInfo
                              );
    FUN_05135f90(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_Queue<ISpawned>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_02f411dc(plVar7,lVar8);
  }
  if (param_1 != 0) {
    FUN_03ba9b8c(param_1,lVar8,*(undefined8 *)System_Collections_Generic_Queue<Transform>_TypeInfo);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = 
    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<uint>_TypeInfo);
      FUN_05136200(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_Queue<int>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03ba9cac(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ulong>_TypeInfo);
      FUN_0516795c(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_Queue<NCommand>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa36c(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Int32Enum>_TypeInfo);
      FUN_0513751c(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_Queue<NetworkId>_TypeInfo,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa00c(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<Vector3>_TypeInfo);
      FUN_051698f8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_Queue<PedestrianWaypointSettings>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa5ac(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo);
      FUN_05137c24(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_Queue<QueuedUIAlert>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa12c(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<bool>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<ushort>_TypeInfo);
      FUN_051699ac(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_Queue<float>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa6cc(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo);
      FUN_05138a34(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_Queue<StreamBuffer>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa24c(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = OVRTask<Int32Enum>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo);
      FUN_05169d30(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_Queue<string>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_03baa7ec(param_1,lVar8,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


