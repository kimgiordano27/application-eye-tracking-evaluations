/*
FUNCTION_NAME: FUN_0695ffa0
ENTRY_POINT: 0695ffa0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_11;validity_or_gating_hits_13;telemetry_or_network_hits_9;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_5
*/


long FUN_0695ffa0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_072840b8;
  if ((DAT_076e1b6f & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Count__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072840b8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__
                      );
    DAT_076e1b6f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d1280 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_072840b8);
    DAT_076d1280 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 4) == '\0') {
    lVar3 = 0;
  }
  else {
    if (param_1 < 1) {
      thunk_FUN_032e1da0(PTR_DAT_0727dd40);
      uVar8 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_072840c0);
      uVar6 = thunk_FUN_032e1da0(PTR_DAT_072840c8);
      FUN_05897d8c(uVar8,uVar5,uVar6,0);
      uVar5 = thunk_FUN_032e1da0(
                                Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar8,uVar5);
    }
    lVar3 = *(long *)
             Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = 
    Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Count__
    ;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                                );
      FUN_055c629c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>__ctor__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar7;
      thunk_FUN_0333a630(plVar4,lVar7);
    }
    puVar1 = 
    Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = FUN_05609f08(lVar7,*(undefined8 *)puVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(int *)(lVar3 + 0x24) = param_1;
  }
  return lVar3;
}


