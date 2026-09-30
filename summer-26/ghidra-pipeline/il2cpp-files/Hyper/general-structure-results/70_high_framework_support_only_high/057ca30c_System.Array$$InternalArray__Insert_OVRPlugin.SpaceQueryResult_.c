/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 057ca30c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  long in_x9;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  memcpy(param_1,(void *)(unaff_x21 + param_3 * in_x9 + 0x20),param_3);
  unaff_x20[5] = in_stack_00000028;
  unaff_x20[4] = in_stack_00000020;
  unaff_x20[1] = in_stack_00000008;
  *unaff_x20 = in_stack_00000000;
  unaff_x20[3] = in_stack_00000018;
  unaff_x20[2] = in_stack_00000010;
  unaff_x20[6] = in_stack_00000030;
  return;
}


