/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 0566f204
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,undefined8 param_2,int param_3)

{
  undefined8 in_x9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((uint)((long)param_3 + -1) < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + ((long)param_3 + -1) * 0x28;
    *(undefined8 *)(param_1 + 0x40) = in_x9;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000008;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000000;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000018;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000010;
    thunk_FUN_03d1023c(param_1 + 0x38,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


