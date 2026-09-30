/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05f17d38
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *puVar1;
  undefined8 unaff_x22;
  
  if (param_3 < in_w8) {
    puVar1 = (undefined8 *)(unaff_x20 + (long)(int)unaff_w19 * 8 + 0x20);
    *param_1 = *puVar1;
    thunk_FUN_044bb4b4(param_1,0);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      *puVar1 = unaff_x22;
      thunk_FUN_044bb4b4(puVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


