/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 05ccd658
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  byte unaff_w22;
  
  *(undefined8 *)(unaff_x20 + 0x108) = unaff_x21;
  thunk_FUN_03d1023c(unaff_x20 + 0x108);
  *(byte *)(unaff_x20 + 0x110) = unaff_w22 & 1;
  *(undefined8 *)(unaff_x20 + 0x118) = unaff_x19;
  thunk_FUN_03d1023c(unaff_x20 + 0x118);
  return;
}


