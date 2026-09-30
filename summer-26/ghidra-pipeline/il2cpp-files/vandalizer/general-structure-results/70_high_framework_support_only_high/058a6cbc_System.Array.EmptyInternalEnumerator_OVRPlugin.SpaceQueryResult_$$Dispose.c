/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 058a6cbc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long unaff_x19;
  undefined4 unaff_w25;
  
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w25;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + param_3._4_4_,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + param_3._0_4_);
  return;
}


