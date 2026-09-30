/*
FUNCTION_NAME: FUN_067440f0
ENTRY_POINT: 067440f0
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


long FUN_067440f0(undefined8 param_1)

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
  
  puVar1 = Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__;
  if ((DAT_076e0737 & 1) == 0) {
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
    thunk_FUN_032e1da0(PTR_DAT_0727eb10);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__
                      );
    DAT_076e0737 = 1;
  }
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar7,0);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
  ;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_1;
    thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x10),param_1);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_066c0510(lVar8,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)puVar2;
    }
    puVar6 = 
    Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_MoveNext__;
    puVar5 = 
    Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__;
    puVar4 = 
    Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__;
    puVar3 = PTR_DAT_072ae1a8;
    puVar2 = PTR_DAT_0727eb10;
    puVar1 = PTR_DAT_0727ad50;
    if (lVar8 != 0) {
      FUN_066c0084(lVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x80),
                   *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x88),0);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_055c676c(uVar10,lVar7,*(undefined8 *)puVar4,0);
      *(undefined8 *)(lVar8 + 0x48) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_05020914(uVar10,lVar7,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar8 + 0x50) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar10);
      *(undefined4 *)(lVar8 + 0x70) = 0x3c23d70a;
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_055c5a5c(uVar10,lVar7,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar8 + 0x40) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x40),uVar10);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


