/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 03cb455c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Item(long param_1)

{
  int in_w9;
  long unaff_x19;
  
                    /* try { // try from 03cb4564 to 03db45c7 has its CatchHandler @ 03cb4490 */
  *(int *)(unaff_x19 + 0x18) = in_w9 + 1;
  memcpy((void *)(param_1 + (long)in_w9 * 0x48 + 0x20),&stack0x00000000,0x48);
  return *(int *)(unaff_x19 + 0x18) + -1;
}


