/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetHashCode
ENTRY_POINT: 044ec980
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetHashCode(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


