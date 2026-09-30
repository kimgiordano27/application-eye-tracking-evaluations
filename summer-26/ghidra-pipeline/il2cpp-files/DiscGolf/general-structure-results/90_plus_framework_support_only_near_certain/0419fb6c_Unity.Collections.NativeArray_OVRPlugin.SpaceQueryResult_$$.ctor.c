/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 0419fb6c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  uint uVar1;
  
                    /* try { // try from 0419fb74 to 0429fb97 has its CatchHandler @ 0419fb20 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0419fb60 with catch @ 0419fb80
                        */
  uVar1 = FUN_038e88a8();
  if (-1 < (int)uVar1) {
                    /* try { // try from 0419fb98 to 0429fbaf has its CatchHandler @ 0419fbe8 */
    FUN_0419fe08();
  }
  return ~uVar1 >> 0x1f;
}


