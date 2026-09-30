/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 0419ee28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(long param_1)

{
  long unaff_x21;
  uint unaff_w22;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    return *(undefined1 (*) [16])(param_1 + unaff_x21 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


