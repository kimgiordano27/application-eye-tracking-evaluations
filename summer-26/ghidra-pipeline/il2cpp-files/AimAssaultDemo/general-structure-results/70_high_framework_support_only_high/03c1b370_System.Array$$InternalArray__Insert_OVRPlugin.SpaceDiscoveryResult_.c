/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03c1b370
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  memcpy(param_1,(void *)(unaff_x21 + param_3 * (long)unaff_w22 + 0x20),param_3);
  unaff_x20[1] = in_stack_00000010;
  *unaff_x20 = in_stack_00000008;
  unaff_x20[2] = in_stack_00000018;
  return;
}


