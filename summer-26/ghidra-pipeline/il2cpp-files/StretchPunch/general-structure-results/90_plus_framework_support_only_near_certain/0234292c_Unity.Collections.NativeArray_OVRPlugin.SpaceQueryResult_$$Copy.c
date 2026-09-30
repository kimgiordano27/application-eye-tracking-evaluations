/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 0234292c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 102
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  OVRManager_PassthroughCapabilities___ctor();
  if (unaff_w20 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_033b2d60(0x17,0);
  }
  in_stack_00000058 = unaff_x23[3];
  in_stack_00000050 = unaff_x23[2];
  in_stack_00000068 = unaff_x23[5];
  in_stack_00000060 = unaff_x23[4];
  in_stack_00000070 = unaff_x23[6];
  in_stack_00000048 = unaff_x23[1];
  in_stack_00000040 = *unaff_x23;
  FUN_02047a54(*(undefined8 *)(unaff_x24 + 0x10),unaff_w21,unaff_w20,&stack0x00000040);
  return;
}


