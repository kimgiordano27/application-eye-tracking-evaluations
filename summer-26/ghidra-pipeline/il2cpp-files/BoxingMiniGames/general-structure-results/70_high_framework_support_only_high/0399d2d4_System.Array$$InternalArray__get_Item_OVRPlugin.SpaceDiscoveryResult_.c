/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0399d2d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
                    /* try { // try from 0399d2e0 to 03a9d2f7 has its CatchHandler @ 0399d350 */
  memcpy(&stack0x00000000,
         (void *)((long)unaff_x21 + (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)unaff_w22 + 0x20),
         (ulong)*(uint *)(*unaff_x21 + 0x104));
                    /* try { // try from 0399d2f8 to 03a9d33f has its CatchHandler @ 0399d11c */
  *(undefined4 *)(unaff_x20 + 4) = in_stack_00000020;
  unaff_x20[1] = in_stack_00000008;
  *unaff_x20 = in_stack_00000000;
  unaff_x20[3] = in_stack_00000018;
  unaff_x20[2] = in_stack_00000010;
  return;
}


