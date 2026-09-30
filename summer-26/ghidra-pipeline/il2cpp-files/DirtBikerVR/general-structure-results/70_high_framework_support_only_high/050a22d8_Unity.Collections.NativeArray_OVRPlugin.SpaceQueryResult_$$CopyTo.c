/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 050a22d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo(long param_1)

{
  undefined4 unaff_w19;
  long unaff_x21;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03ac4090();
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_050a1ba0();
                    /* try { // try from 050a231c to 051a2387 has its CatchHandler @ 050a2388 */
  return unaff_w19;
}


