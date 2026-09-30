/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 0419e9f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  
  if (unaff_w23 < 0) {
    FUN_05509450(0x10,4,0);
  }
  if (*(int *)(unaff_x25 + 0x18) - unaff_w22 < unaff_w23) {
    FUN_05508fa4(0x17,0);
  }
  FUN_03755580(*(undefined8 *)(unaff_x25 + 0x10),unaff_w22,unaff_w23);
  return;
}


