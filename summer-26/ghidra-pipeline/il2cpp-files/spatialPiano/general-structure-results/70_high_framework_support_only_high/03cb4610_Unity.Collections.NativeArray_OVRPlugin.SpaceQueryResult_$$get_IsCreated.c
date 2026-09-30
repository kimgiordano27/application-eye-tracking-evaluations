/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 03cb4610
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68);
  if (*(int *)(*(long *)(param_1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050e4454(uVar1,0);
  FUN_050f5a8c();
  return *(int *)(unaff_x19 + 0x18) + -1;
}


