/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ea3594
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1,long param_2)

{
  int iVar1;
  long in_x9;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x28);
  lVar3 = *(long *)(param_1 + 0x10);
  iVar1 = FUN_064c43e8(param_2,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x10));
  return lVar2 - lVar3 <= (long)iVar1;
}


