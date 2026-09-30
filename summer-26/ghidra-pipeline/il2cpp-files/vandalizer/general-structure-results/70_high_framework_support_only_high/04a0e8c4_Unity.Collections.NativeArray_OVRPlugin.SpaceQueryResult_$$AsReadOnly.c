/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 04a0e8c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(long param_1)

{
  long lVar1;
  long unaff_x23;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a0ed04();
  return;
}


