/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 04d40ae8
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__get_Current(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_071c0368 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01fd8);
    DAT_071c0368 = 1;
  }
  plVar3 = (long *)(param_1 + 0x48);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fd8);
    FUN_05645a04(uVar2,0);
    FUN_02eca9b4(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


