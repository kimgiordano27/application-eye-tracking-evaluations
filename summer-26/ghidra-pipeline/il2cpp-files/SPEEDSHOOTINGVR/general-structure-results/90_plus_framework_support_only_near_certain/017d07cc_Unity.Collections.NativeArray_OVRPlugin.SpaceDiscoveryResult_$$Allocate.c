/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 017d07cc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate
               (long param_1,uint param_2,undefined8 param_3)

{
  uint in_w8;
  long lVar1;
  
  if (in_w8 <= param_2) {
    FUN_01d69330(0);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20) = param_3;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


