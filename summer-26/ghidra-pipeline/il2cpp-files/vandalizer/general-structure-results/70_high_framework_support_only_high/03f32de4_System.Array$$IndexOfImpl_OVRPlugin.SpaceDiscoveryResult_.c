/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03f32de4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOfImpl<OVRPlugin_SpaceDiscoveryResult>(long param_1,undefined8 param_2)

{
  long in_x9;
  
  if (*(byte *)(in_x9 + 0x130) < *(byte *)(param_1 + 0x130)) {
    param_2 = 0;
  }
  else if (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1
          ) {
    param_2 = 0;
  }
  thunk_FUN_032060ec(param_2,0);
  return;
}


