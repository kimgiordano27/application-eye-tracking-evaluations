/*
FUNCTION_NAME: Unity.Collections.NativeArray<ARPointCloudManager.PointCloudRaycastInfo>$$get_Length
ENTRY_POINT: 0233d388
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>__get_Length(void)

{
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  OVRManager_PassthroughCapabilities___ctor();
  if (unaff_w20 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_033b2d60(0x17,0);
  }
  in_stack_00000030 = unaff_x23[2];
  in_stack_00000028 = unaff_x23[1];
  in_stack_00000020 = *unaff_x23;
  FUN_02047660(*(undefined8 *)(unaff_x24 + 0x10),unaff_w21,unaff_w20,&stack0x00000020);
  return;
}


