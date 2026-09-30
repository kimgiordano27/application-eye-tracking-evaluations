/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection.Enumerator<OVRSpace,-OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0295a710
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRSpace,_OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0)
    {
      FUN_01c72394();
    }
    lVar1 = thunk_FUN_01c496e0();
    FUN_02c5f974(lVar1,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0));
    *(long *)(param_1 + 0x38) = lVar1;
  }
  return lVar1;
}


