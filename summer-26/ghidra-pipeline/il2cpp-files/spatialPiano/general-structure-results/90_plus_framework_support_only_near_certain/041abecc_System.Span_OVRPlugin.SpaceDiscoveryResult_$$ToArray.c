/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 041abecc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Span<OVRPlugin_SpaceDiscoveryResult>__ToArray(ulong param_1)

{
  uint unaff_w19;
  long unaff_x22;
  uint unaff_w23;
  
  if ((param_1 & 1) == 0) {
    FUN_02f41e9c();
  }
  if (unaff_w23 <= unaff_w19) {
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    FUN_03348260();
  }
  return unaff_w23 <= unaff_w19;
}


