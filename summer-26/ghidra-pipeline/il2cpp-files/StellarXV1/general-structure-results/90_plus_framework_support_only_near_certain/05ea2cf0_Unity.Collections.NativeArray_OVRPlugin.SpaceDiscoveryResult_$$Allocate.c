/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 05ea2cf0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate
               (long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x28);
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*param_1);
  }
  FUN_076de68c(0);
  if (lVar1 != 0) {
    FUN_076fff44(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


