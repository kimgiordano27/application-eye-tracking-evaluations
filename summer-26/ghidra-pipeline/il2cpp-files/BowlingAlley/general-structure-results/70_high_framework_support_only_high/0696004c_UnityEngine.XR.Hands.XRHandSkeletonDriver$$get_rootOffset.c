/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSkeletonDriver$$get_rootOffset
ENTRY_POINT: 0696004c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_10;telemetry_or_network_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


long UnityEngine_XR_Hands_XRHandSkeletonDriver__get_rootOffset(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  int unaff_w19;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
    param_1 = *unaff_x20;
  }
  puVar2 = Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__;
  if (*(char *)(*(long *)(param_1 + 0xb8) + 4) == '\0') {
    lVar3 = 0;
  }
  else {
    if (unaff_w19 < 1) {
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
      lVar3 = *(long *)puVar2;
    }
    puVar1 = 
    Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Count__
    ;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar3 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                                );
      FUN_055c629c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>__ctor__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar7;
      thunk_FUN_0333a630(plVar4,lVar7);
    }
    puVar2 = 
    Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = FUN_05609f08(lVar7,*(undefined8 *)puVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(int *)(lVar3 + 0x24) = unaff_w19;
  }
  return lVar3;
}


