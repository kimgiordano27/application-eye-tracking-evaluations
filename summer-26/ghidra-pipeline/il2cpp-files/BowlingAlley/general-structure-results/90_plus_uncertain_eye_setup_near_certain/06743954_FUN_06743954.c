/*
FUNCTION_NAME: FUN_06743954
ENTRY_POINT: 06743954
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


long FUN_06743954(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
  ;
  if ((DAT_076e0733 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<Type,_HashSet<Type>>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<Type,_HashSet<Type>>_get_Item__)
    ;
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Type,_List<EventCallback<AttachToPanelEvent>>>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Type,_List<EventCallback<AttachToPanelEvent>>>_get_Item__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727eb10);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Type,_List<EventCallback<AttachToPanelEvent>>>_set_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                      );
    DAT_076e0733 = 1;
  }
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar7,0);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__;
  puVar1 = Method_System_Collections_Generic_Dictionary<Type,_HashSet<Type>>_get_Item__;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_1;
    thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x10),param_1);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_066b3798(lVar8,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)puVar2;
    }
    puVar6 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
    puVar5 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__;
    puVar4 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<Type,_List<EventCallback<AttachToPanelEvent>>>_set_Item__
    ;
    puVar2 = Method_System_Collections_Generic_Dictionary<Type,_HashSet<Type>>__ctor__;
    puVar1 = PTR_DAT_0727eb10;
    if (lVar8 != 0) {
      FUN_066c0084(lVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x40),
                   *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),0);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_055c5d1c(uVar10,lVar7,*(undefined8 *)puVar4,0);
      *(undefined8 *)(lVar8 + 0x48) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_0501bce4(uVar10,lVar7,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar8 + 0x50) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_055c5a5c(uVar10,lVar7,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar8 + 0x40) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x40),uVar10);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


