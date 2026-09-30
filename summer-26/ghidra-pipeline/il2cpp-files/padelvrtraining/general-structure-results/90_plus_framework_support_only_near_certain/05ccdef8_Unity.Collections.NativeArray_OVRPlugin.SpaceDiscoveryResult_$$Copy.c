/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ccdef8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 unaff_x19;
  long unaff_x21;
  
  *(long *)(unaff_x21 + 0x20) = param_1._8_8_;
  *(long *)(unaff_x21 + 0x18) = param_1._0_8_;
  *(long *)(unaff_x21 + 0x10) = param_2._8_8_;
  *(long *)(unaff_x21 + 8) = param_2._0_8_;
  thunk_FUN_03d1023c();
  *(undefined8 *)(unaff_x21 + 0x40) = unaff_x19;
  thunk_FUN_03d1023c(unaff_x21 + 0x40);
  return;
}


