/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 02765598
PROGRAM: sharks-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  uint in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (unaff_w20 < in_w8) {
    unaff_x22[2] = in_stack_00000010;
    unaff_x22[1] = in_stack_00000008;
    *unaff_x22 = in_stack_00000000;
    thunk_FUN_0188fd20(unaff_x19 + unaff_x21 * 0x18 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


