/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 052c766c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *unaff_x19;
  long unaff_x20;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if ((*unaff_x19 == lVar1) && ((int)unaff_x19[1] == (int)lVar2)) {
    bVar3 = *(int *)((long)unaff_x19 + 0xc) == (int)((ulong)lVar2 >> 0x20);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


