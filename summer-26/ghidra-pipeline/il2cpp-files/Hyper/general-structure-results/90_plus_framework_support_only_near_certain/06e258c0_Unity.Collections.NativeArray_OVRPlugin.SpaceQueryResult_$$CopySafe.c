/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 06e258c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long param_1)

{
  uint in_w9;
  void *unaff_x19;
  uint unaff_w22;
  ulong unaff_x25;
  
  if (unaff_w22 < in_w9) {
    memcpy(unaff_x19,(void *)(param_1 + (unaff_x25 & 0xffffffff) * 0x48 + 0x20),0x48);
                    /* try { // try from 06e258f4 to 06f25903 has its CatchHandler @ 06e25904 */
                    /* catch() { ... } // from try @ 06e25854 with catch @ 06e25904
                       catch() { ... } // from try @ 06e25880 with catch @ 06e25904
                       catch() { ... } // from try @ 06e258f4 with catch @ 06e25904 */
                    /* try { // try from 06e25908 to 06f2590b has its CatchHandler @ 06e25914 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


