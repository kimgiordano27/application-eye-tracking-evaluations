/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 04f9fa84
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Item
               (void *param_1,void *param_2,size_t param_3)

{
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  int unaff_w23;
  
  memcpy(param_1,param_2,param_3);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  memcpy(&stack0x00000050,&stack0x00000000,0x4c);
  memmove((void *)(unaff_x22 + (long)(unaff_w20 + -1) * (long)unaff_w23),&stack0x00000050,0x4c);
  return;
}


