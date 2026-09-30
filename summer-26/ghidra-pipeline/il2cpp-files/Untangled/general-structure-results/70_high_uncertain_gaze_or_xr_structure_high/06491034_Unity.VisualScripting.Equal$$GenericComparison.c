/*
FUNCTION_NAME: Unity.VisualScripting.Equal$$GenericComparison
ENTRY_POINT: 06491034
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_Equal__GenericComparison(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0xe90));
  FUN_02f07e70(Unity_VisualScripting_IKeyedCollection<string,_ControlInput>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_IEnumerator<DynamicHeap_TypeData>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xc99) = 1;
  lVar9 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_05645a04(lVar9,0);
  puVar8 = Unity_VisualScripting_IKeyedCollection<string,_ControlInput>_TypeInfo;
  puVar7 = System_Linq_IGrouping<int,_SocketPose>_TypeInfo;
  puVar6 = System_Collections_Generic_IEqualityComparer<string>_TypeInfo;
  puVar5 = 
  System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
  ;
  puVar4 = System_Collections_Generic_IEnumerator<OpenXRInteractionFeature_ActionConfig>_TypeInfo;
  puVar3 = System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar1 = System_Collections_Generic_IEnumerator<InputBindingCompositeContext_PartBinding>_TypeInfo
  ;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = unaff_x20;
    thunk_FUN_02f411dc();
    uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
    FUN_0513bd28(uVar10,lVar9,*(undefined8 *)puVar6,0);
    uVar10 = FUN_03a330d8(uVar11,uVar10,*(undefined8 *)puVar2);
    uVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_0513ca78(uVar11,lVar9,*(undefined8 *)puVar7,0);
    uVar10 = FUN_03a26eb0(uVar10,uVar11,*(undefined8 *)puVar1);
    uVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
    FUN_0513ca78(uVar11,lVar9,*(undefined8 *)puVar8,0);
    FUN_03a2925c(uVar10,uVar11,
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


