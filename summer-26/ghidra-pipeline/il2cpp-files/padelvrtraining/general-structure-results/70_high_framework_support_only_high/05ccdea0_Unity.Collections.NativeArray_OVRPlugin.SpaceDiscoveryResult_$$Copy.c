/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ccdea0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  FUN_06ae3328(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48),
               *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x40));
  *(undefined8 *)(unaff_x19 + 0xe8) = param_2;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0xe8),param_2);
  return;
}


