/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 052c7674
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


bool System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(long param_1)

{
  bool bVar1;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if ((*unaff_x19 == unaff_x21) && ((int)unaff_x19[1] == (int)unaff_x20)) {
    bVar1 = *(int *)((long)unaff_x19 + 0xc) == (int)((ulong)unaff_x20 >> 0x20);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


