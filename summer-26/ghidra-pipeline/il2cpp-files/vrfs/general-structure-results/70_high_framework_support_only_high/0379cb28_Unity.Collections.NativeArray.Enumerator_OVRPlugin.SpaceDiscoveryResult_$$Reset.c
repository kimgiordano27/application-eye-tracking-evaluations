/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Reset
ENTRY_POINT: 0379cb28
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_02d76b34(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = unaff_x19;
  thunk_FUN_01656ef8();
  return param_1;
}


