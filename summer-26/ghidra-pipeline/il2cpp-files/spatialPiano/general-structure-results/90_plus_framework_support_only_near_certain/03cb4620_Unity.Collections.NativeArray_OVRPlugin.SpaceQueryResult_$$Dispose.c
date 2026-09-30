/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 03cb4620
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(long param_1)

{
  int in_w9;
  long unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  if (in_w9 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050e4454(uVar1,0);
  FUN_050f5a8c();
  return *(int *)(unaff_x19 + 0x18) + -1;
}


