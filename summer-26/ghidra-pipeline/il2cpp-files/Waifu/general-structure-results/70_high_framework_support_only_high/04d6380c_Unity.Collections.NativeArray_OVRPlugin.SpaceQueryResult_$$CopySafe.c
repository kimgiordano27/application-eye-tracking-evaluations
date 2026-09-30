/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 04d6380c
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
                (long param_1,ulong param_2)

{
  uint uVar1;
  long in_x9;
  uint in_w11;
  
  if (*(byte *)(param_1 + 0x130) <= in_w11) {
    uVar1 = (uint)param_2;
    if (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1) {
      uVar1 = uVar1 + 1;
    }
    param_2 = (ulong)uVar1;
  }
  return param_2;
}


