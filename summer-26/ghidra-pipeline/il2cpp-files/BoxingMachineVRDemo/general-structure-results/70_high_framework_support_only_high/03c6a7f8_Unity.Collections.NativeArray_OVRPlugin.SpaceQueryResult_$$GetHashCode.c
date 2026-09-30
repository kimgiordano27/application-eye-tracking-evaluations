/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 03c6a7f8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(void)

{
  long lVar1;
  long unaff_x19;
  
  thunk_FUN_02dbd7b4();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


