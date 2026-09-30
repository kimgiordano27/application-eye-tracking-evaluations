/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03b5f08c
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  long unaff_x19;
  
                    /* try { // try from 03b5f098 to 03c5f1b3 has its CatchHandler @ 03b5f098
                       catch() { ... } // from try @ 03b5f098 with catch @ 03b5f098
                       catch() { ... } // from try @ 03b5f290 with catch @ 03b5f098
                       catch() { ... } // from try @ 03b5f358 with catch @ 03b5f098
                       catch() { ... } // from try @ 03b5f360 with catch @ 03b5f098
                       catch() { ... } // from try @ 03b5f404 with catch @ 03b5f098 */
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(param_1 + 0xb8);
  FUN_03b61948();
  return;
}


