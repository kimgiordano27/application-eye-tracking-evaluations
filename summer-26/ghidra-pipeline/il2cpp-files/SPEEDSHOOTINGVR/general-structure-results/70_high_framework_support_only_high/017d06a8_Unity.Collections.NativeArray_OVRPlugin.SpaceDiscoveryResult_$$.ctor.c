/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 017d06a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  *unaff_x19 = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_0106e12c();
  return;
}


