/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 0566f228
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long in_x9;
  long in_x10;
  undefined8 in_x11;
  
  param_1 = param_1 + in_x9 * in_x10;
  *(undefined8 *)(param_1 + 0x40) = in_x11;
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  *(long *)(param_1 + 0x38) = param_3._8_8_;
  *(long *)(param_1 + 0x30) = param_3._0_8_;
  thunk_FUN_03d1023c(param_1 + 0x38,0);
  return;
}


