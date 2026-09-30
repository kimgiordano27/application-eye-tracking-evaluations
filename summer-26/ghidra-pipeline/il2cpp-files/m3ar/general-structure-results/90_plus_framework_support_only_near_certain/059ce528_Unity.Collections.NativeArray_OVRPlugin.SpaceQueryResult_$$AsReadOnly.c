/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 059ce528
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_075082e0(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
    return;
  }
  return;
}


