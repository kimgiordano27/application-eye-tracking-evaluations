/*
FUNCTION_NAME: FUN_06744308
ENTRY_POINT: 06744308
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_06744308(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__;
  if ((DAT_076e0738 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727ad50);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072ae1a8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__
                      );
    DAT_076e0738 = 1;
  }
  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar5,0);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
  ;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x10),param_1);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_066c0510(lVar6,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar7 = *(long *)puVar2;
    }
    puVar4 = 
    Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__;
    puVar3 = 
    Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__;
    puVar2 = PTR_DAT_072ae1a8;
    puVar1 = PTR_DAT_0727ad50;
    if (lVar6 != 0) {
      FUN_066c0084(lVar6,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x90),
                   *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x98),0);
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_055c676c(uVar8,lVar5,*(undefined8 *)puVar3,0);
      *(undefined8 *)(lVar6 + 0x48) = uVar8;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar8);
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_05020914(uVar8,lVar5,*(undefined8 *)puVar4,0);
      *(undefined8 *)(lVar6 + 0x50) = uVar8;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar8);
      *(undefined4 *)(lVar6 + 0x70) = 0x3c23d70a;
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


