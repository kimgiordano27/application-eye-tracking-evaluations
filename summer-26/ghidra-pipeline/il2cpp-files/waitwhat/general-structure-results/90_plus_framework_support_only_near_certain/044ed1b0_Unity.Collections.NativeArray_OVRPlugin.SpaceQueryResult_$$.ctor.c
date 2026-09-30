/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 044ed1b0
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor
               (long param_1,undefined8 param_2,int param_3)

{
  int in_w8;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = in_w8 + 1;
  if (0 < param_3) {
    FUN_0595236c(*(undefined8 *)(param_1 + 0x10),0,param_3,0);
    return;
  }
                    /* try { // try from 044ed1d0 to 045ed21f has its CatchHandler @ 044ed1d0
                       catch() { ... } // from try @ 044ed1d0 with catch @ 044ed1d0
                       catch() { ... } // from try @ 044ed298 with catch @ 044ed1d0
                       catch() { ... } // from try @ 044ed2c8 with catch @ 044ed1d0
                       catch() { ... } // from try @ 044ed348 with catch @ 044ed1d0 */
  return;
}


