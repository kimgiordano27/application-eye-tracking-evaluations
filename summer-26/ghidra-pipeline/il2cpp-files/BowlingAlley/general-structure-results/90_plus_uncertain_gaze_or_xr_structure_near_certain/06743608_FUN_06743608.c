/*
FUNCTION_NAME: FUN_06743608
ENTRY_POINT: 06743608
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 200
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction
*/


long FUN_06743608(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  puVar1 = 
  Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__;
  if ((DAT_076e0732 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072aecd8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<TrackableId,_ARPlane>_TryGetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>_Remove__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>_TryGetValue__
                      );
    thunk_FUN_032e1da0(UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_Dispose__
                      );
    DAT_076e0732 = 1;
  }
  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar10,0);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = param_1;
    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x10),param_1);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_066ac73c(lVar11,0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar12 = *(long *)puVar2;
    }
    puVar9 = 
    Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
    ;
    puVar8 = 
    Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
    ;
    puVar7 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__;
    puVar6 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__;
    puVar5 = 
    Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__;
    puVar4 = 
    Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_Dispose__;
    puVar3 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
    puVar2 = PTR_DAT_072aecd8;
    puVar1 = PTR_DAT_07279510;
    if (lVar11 != 0) {
      FUN_066c0084(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x30),
                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x38),0);
      uVar14 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_059324dc(uVar14,0);
      FUN_066c0660(lVar11,uVar14,0);
      uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_055c5e7c(uVar14,lVar10,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar11 + 0x48) = uVar14;
      thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x48),uVar14);
      uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_0501d488(uVar14,lVar10,*(undefined8 *)puVar7,0);
      *(undefined8 *)(lVar11 + 0x50) = uVar14;
      thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x50),uVar14);
      uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_055c5e7c(uVar14,lVar10,*(undefined8 *)puVar8,0);
      *(undefined8 *)(lVar11 + 0x80) = uVar14;
      thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x80),uVar14);
      uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_0501d488(uVar14,lVar10,*(undefined8 *)puVar9,0);
      *(undefined8 *)(lVar11 + 0x88) = uVar14;
      thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x88),uVar14);
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)puVar4;
      }
      lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (lVar12 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar10 = *(long *)puVar4;
        }
        uVar14 = **(undefined8 **)(lVar10 + 0xb8);
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<TrackableId,_ARPlane>_TryGetValue__
                                   );
        FUN_0510c88c(lVar12,uVar14,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                     ,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar13 = lVar12;
        thunk_FUN_0333a630(plVar13,lVar12);
      }
      *(long *)(lVar11 + 0x58) = lVar12;
      thunk_FUN_0333a630((long *)(lVar11 + 0x58),lVar12);
      return lVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


