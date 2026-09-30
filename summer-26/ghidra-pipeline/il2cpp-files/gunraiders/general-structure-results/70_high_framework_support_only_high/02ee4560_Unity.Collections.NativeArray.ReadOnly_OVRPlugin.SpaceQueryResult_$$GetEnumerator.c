/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 02ee4560
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (void *param_1,long param_2)

{
  int unaff_w20;
  long unaff_x21;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  memmove(&stack0x00000008,(void *)(unaff_x21 + (long)unaff_w20 * 0x68),0x68);
  memcpy(&stack0x00000070,&stack0x00000008,0x68);
  memcpy(param_1,&stack0x00000070,0x68);
  return;
}


