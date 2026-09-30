/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 03b5e39c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  undefined4 *puVar1;
  long in_x9;
  
  if (param_1 == in_x9) {
    puVar1 = (undefined4 *)thunk_FUN_02cea9e8();
    FUN_03b5e2b0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce8018();
}


