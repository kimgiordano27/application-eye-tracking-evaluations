/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 03cb4554
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length(long param_1)

{
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  
  if (in_w9 < in_w10) {
    *(uint *)(unaff_x19 + 0x18) = in_w9 + 1;
    memcpy((void *)(param_1 + (long)(int)in_w9 * 0x48 + 0x20),&stack0x00000000,0x48);
  }
  else {
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    FUN_03cb4430();
  }
  return *(int *)(unaff_x19 + 0x18) + -1;
}


