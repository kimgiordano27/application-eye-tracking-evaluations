/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04433e34
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,int param_2,long param_3,int param_4,long param_5)

{
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8(*(long *)(param_5 + 0x20));
  }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 04433e00 with catch @ 04433e5c
                       try { // try from 04433e5c to 04533e73 has its CatchHandler @ 04433db8 */
                    /* try { // try from 04433e74 to 04533e8b has its CatchHandler @ 04433f00 */
  return param_3 == param_1 && param_2 == param_4;
}


