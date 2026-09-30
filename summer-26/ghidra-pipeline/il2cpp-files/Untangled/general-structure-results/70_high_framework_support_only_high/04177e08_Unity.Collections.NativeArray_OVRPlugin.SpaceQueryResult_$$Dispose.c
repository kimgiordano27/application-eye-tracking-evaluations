/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 04177e08
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  long unaff_x19;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  
  FUN_03771654(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
                    /* try { // try from 04177e28 to 04277f3b has its CatchHandler @ 04177e28
                       catch() { ... } // from try @ 04177e28 with catch @ 04177e28
                       catch() { ... } // from try @ 04178014 with catch @ 04177e28
                       catch() { ... } // from try @ 041780d0 with catch @ 04177e28
                       catch() { ... } // from try @ 041780d8 with catch @ 04177e28
                       catch() { ... } // from try @ 0417817c with catch @ 04177e28 */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


