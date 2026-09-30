/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 0265c98c
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  if ((bRam00000000072323d3 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dad268);
    bRam00000000072323d3 = 1;
  }
  return *(undefined8 *)(param_1 + 0x28);
}


