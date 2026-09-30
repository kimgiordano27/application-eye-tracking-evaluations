/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 048ce85c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
                (long param_1,ulong param_2)

{
  bool in_ZR;
  long unaff_x19;
  
  if (((in_ZR) && (*(float *)(unaff_x19 + 4) == *(float *)(param_1 + 4))) &&
     (*(float *)(unaff_x19 + 8) == *(float *)(param_1 + 8))) {
    param_2 = (ulong)((*(float *)(unaff_x19 + 0xc) == *(float *)(param_1 + 0xc) &&
                      *(float *)(unaff_x19 + 0x10) == *(float *)(param_1 + 0x10)) &&
                     *(float *)(unaff_x19 + 0x14) == *(float *)(param_1 + 0x14));
  }
  return param_2;
}


