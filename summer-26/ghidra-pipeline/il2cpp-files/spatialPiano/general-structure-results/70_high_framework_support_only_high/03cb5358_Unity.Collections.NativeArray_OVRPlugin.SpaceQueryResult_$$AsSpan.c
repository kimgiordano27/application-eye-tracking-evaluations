/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsSpan
ENTRY_POINT: 03cb5358
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsSpan
               (void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
                    /* try { // try from 03cb5370 to 03db53bb has its CatchHandler @ 03cb5370
                       catch() { ... } // from try @ 03cb5370 with catch @ 03cb5370
                       catch() { ... } // from try @ 03cb5420 with catch @ 03cb5370
                       catch() { ... } // from try @ 03cb5450 with catch @ 03cb5370
                       catch() { ... } // from try @ 03cb54cc with catch @ 03cb5370 */
  FUN_0361bf00();
  return;
}


