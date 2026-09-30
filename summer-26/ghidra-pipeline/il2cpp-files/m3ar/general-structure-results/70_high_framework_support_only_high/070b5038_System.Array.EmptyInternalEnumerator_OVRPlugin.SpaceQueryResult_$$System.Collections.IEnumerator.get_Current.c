/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 070b5038
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_2;
  FUN_04fe771c(param_3,param_4,2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x168));
  thunk_FUN_0406db0c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x160));
  return;
}


