/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 03200144
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(undefined8 param_1)

{
  uint uVar1;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000020 = param_1;
                    /* try { // try from 0320014c to 033001a3 has its CatchHandler @ 032001b4 */
  uVar1 = FUN_024745ac();
  if (-1 < (int)uVar1) {
    FUN_0320044c();
  }
  return ~uVar1 >> 0x1f;
}


