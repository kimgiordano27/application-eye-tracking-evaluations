/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 04f9fa7c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (void *param_1,undefined8 param_2,size_t param_3)

{
  long unaff_x19;
  int unaff_w20;
  void *unaff_x21;
  long unaff_x22;
  
  memcpy(param_1,unaff_x21,param_3);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  memcpy(&stack0x00000050,&stack0x00000000,0x4c);
  memmove((void *)(unaff_x22 + (long)(unaff_w20 + -1) * 0x4c),&stack0x00000050,0x4c);
  return;
}


