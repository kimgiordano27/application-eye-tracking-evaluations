/*
FUNCTION_NAME: FUN_05b5e6a8
ENTRY_POINT: 05b5e6a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction
*/


long FUN_05b5e6a8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_28;
  
  if ((DAT_06b81c1c & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_067869b8);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__);
    FUN_02d6084c(Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_get_Current__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_Dispose__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                );
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                );
    DAT_06b81c1c = 1;
  }
  local_28 = 0;
  if (param_1 == 0) goto LAB_05b5e974;
  lVar7 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
  ;
  if (*(char *)(param_1 + 0x1ac) != '\0') {
    lVar7 = 0;
  }
  lVar8 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
  ;
  if (*(long *)(param_1 + 0x200) != 0) {
    lVar8 = lVar7;
  }
  if (lVar8 != 0) goto LAB_05b5e7b4;
  if (*(int *)(param_1 + 0x100) != 1) {
    plVar6 = (long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__
    ;
    if ((*(long *)(param_1 + 0x1a0) != 0) &&
       (uVar5 = FUN_059e0b14(*(long *)(param_1 + 0x1a0),0),
       plVar6 = (long *)
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__
       , (uVar5 & 1) != 0)) {
      plVar6 = (long *)
               Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
      ;
    }
    lVar8 = *plVar6;
    if (*plVar6 != 0) goto LAB_05b5e7b4;
  }
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_05b5e974;
  uVar5 = FUN_0335c1c4(*(long *)(param_1 + 0xd8),&local_28,
                       *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (local_28 == 0) goto LAB_05b5e974;
    if (*(int *)(local_28 + 0x2c) != 1) {
      lVar7 = FUN_05b5e978();
      if (lVar7 == 0) goto LAB_05b5e974;
      if (*(int *)(lVar7 + 0x18) < 1) goto LAB_05b5e924;
    }
    lVar8 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
    ;
    if (*(long *)
         Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
        != 0) goto LAB_05b5e7b4;
  }
LAB_05b5e924:
  if (*(long *)(param_1 + 0xd8) == 0) {
LAB_05b5e974:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar5 = FUN_0601c448(*(long *)(param_1 + 0xd8),0);
  if ((*(long *)Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_get_Current__ == 0) ||
     (lVar8 = *(long *)Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_get_Current__,
     (uVar5 & 1) == 0)) {
    plVar6 = *(long **)(param_1 + 0x1d8);
    if (plVar6 == (long *)0x0) goto LAB_05b5e974;
    uVar5 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
    lVar8 = 0;
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_Dispose__
      ;
    }
  }
LAB_05b5e7b4:
  puVar3 = Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__;
  lVar7 = *(long *)Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *(long *)puVar3;
  }
  iVar2 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (((uint)(iVar2 * -0x11111111) >> 2 | iVar2 * -0x40000000) < 0x4444445) {
    puVar1 = (undefined8 *)
             Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
    ;
    if ((param_2 & 1) == 0) {
      puVar1 = (undefined8 *)PTR_DAT_0675e638;
    }
    uVar4 = FUN_04e8db00(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                         ,*puVar1,lVar8,0);
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
    }
    FUN_0601ea80(uVar4,0);
    lVar7 = *(long *)puVar3;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *(long *)puVar3;
  }
  *(int *)(*(long *)(lVar7 + 0xb8) + 0x20) = *(int *)(*(long *)(lVar7 + 0xb8) + 0x20) + 1;
  return lVar8;
}


