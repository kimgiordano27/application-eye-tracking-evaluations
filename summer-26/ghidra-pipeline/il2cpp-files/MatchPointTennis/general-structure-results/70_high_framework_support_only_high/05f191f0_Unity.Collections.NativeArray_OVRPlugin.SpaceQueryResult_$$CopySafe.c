/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 05f191f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(void)

{
  bool in_ZR;
  bool in_CY;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (in_CY && !in_ZR) {
    unaff_x21[5] = in_stack_00000028;
    unaff_x21[4] = in_stack_00000020;
    unaff_x21[7] = in_stack_00000038;
    unaff_x21[6] = in_stack_00000030;
    unaff_x21[1] = in_stack_00000008;
    *unaff_x21 = in_stack_00000000;
    unaff_x21[3] = in_stack_00000018;
    unaff_x21[2] = in_stack_00000010;
    thunk_FUN_044bb4b4(unaff_x19 + unaff_x23 * 0x40 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


