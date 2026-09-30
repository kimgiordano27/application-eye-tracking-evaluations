/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 058a6cc8
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  undefined4 unaff_w25;
  
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w25;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44(param_1._4_4_ + param_2._4_4_,param_1._0_4_ + param_2._0_4_);
  return;
}


