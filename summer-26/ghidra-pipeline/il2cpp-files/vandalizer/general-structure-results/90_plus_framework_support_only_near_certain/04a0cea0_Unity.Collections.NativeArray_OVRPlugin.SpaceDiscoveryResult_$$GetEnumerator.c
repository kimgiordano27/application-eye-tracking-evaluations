/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 04a0cea0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator
               (undefined8 *param_1)

{
  uint in_w9;
  uint unaff_w19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (unaff_w19 < in_w9) {
    param_1[3] = in_stack_00000018;
    param_1[2] = in_stack_00000010;
    param_1[5] = in_stack_00000028;
    param_1[4] = in_stack_00000020;
    param_1[1] = in_stack_00000008;
    *param_1 = in_stack_00000000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


