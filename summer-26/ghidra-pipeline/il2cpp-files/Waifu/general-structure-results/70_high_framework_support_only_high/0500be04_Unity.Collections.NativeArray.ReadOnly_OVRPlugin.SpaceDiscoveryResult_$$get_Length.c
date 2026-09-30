/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 0500be04
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (long param_1,long param_2)

{
  bool in_CY;
  bool bVar1;
  long in_x9;
  
  if (in_CY) {
    bVar1 = *(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) == param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


