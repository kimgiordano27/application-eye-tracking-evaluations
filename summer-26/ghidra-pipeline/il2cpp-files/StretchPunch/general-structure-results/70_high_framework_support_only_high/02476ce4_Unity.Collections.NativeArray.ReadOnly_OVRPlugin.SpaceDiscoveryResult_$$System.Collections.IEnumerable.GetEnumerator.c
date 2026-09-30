/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02476ce4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8(lVar1);
  }
  FUN_02476c00(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20));
  memcpy(&stack0x00000068,&stack0x00000000,0x68);
  memcpy(&stack0x00000000,&stack0x00000068,0x68);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8();
  }
  thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


